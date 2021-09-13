#include "tests.h"

void 
test_print(
    int test,
    const char *expectedOutput,
    const int expectedReturnValue,
    int (*test_ptr)(),
    char *input,
    char *subset
) {

    pid_t           pid;
    int             fd_output;
    int             fd_error;
    FILE*           fs_return;
    FILE*           fs_read_output;
    FILE*           fs_read_return;
    FILE*           fs_read_error;
    FILE*           fs_log;
    int             return_code;
    int             wstatus;

    pid = fork();

    if (pid == (pid_t)-1) {
        ferror("fork", errno);
    }

    else if (pid == (pid_t)0) {

        if (
            (fd_output = open("./tmp/output.tmp", O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1 ||
            (fd_error = open("./tmp/error.tmp", O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1 ||
            (fs_return = fopen("./tmp/return.tmp", "w")) == NULL
        ) {
            ferror("open", errno);
        }
        if (dup2(fd_output, STDOUT_FILENO) == -1 || dup2(fd_error, STDERR_FILENO) == -1) {
            ferror("dup2", errno);
        }
        return_code = test_ptr();
        fprintf(fs_return, "%d", return_code);
        exit(0);
    }

    else {

        wait(&wstatus);
        if (
            (fs_read_output = fopen("./tmp/output.tmp", "r")) == NULL ||
            (fs_read_return = fopen("./tmp/return.tmp", "r")) == NULL ||
            (fs_read_error = fopen("./tmp/error.tmp", "r")) == NULL ||
            (fs_log = fopen("tester.log", "a")) == NULL
        ) {
            ferror("open", errno);
        }

        if (wstatus != 0) {
            char testErr[256] = {0};
            sprintf(
                testErr,
                "\n\n--> Test %d\n    Input: ft_printf(%s)\n    Expected output: [%s]\n    Expected return: %d\n\n",
                test,
                input,
                expectedOutput,
                expectedReturnValue
            );
            char msgErr[4096 + 1] = {0};
            fread(msgErr, 1, 4096, fs_read_error);
            fwrite(testErr, strlen(testErr), 1, fs_log);
            fwrite(msgErr, strlen(msgErr), 1, fs_log);
            fflush(fs_log);
        }

        else {
            char    outputValue[128] = {0};
            int     returnValue;

            fread(outputValue, 1, 128, fs_read_output);
            fscanf(fs_read_return, "%d", &returnValue);

            int     outputCompare = strcmp(outputValue, expectedOutput);
            int     returnCompare = (returnValue != expectedReturnValue);

            if (outputCompare != 0 || returnCompare != 0) {
                char testErr[256] = {0};
                sprintf(
                    testErr,
                    "\n\n--> %s: %d\n    Input: ft_printf(%s)\n    Expected output:  [%s]\n    Expected return:  %d\n",
                    subset,
                    test,
                    input,
                    expectedOutput,
                    expectedReturnValue
                );
                char outputErr[128] = {0};
                sprintf(
                    outputErr,
                    "    Effective output: [%s]\n    Effective return: %d",
                    outputValue,
                    returnValue
                );
                fwrite(testErr, strlen(testErr), 1, fs_log);
                fwrite(outputErr, strlen(outputErr), 1, fs_log);
                fflush(fs_log);
                if (outputCompare != 0 && returnCompare != 0) {
                    printf(FG_RED"%d.KO BOTH  "RESET, test);
                    fflush(stdout);
                } else if (outputCompare != 0) {
                    printf(FG_RED"%d.KO OUTPUT  "RESET, test);
                    fflush(stdout);
                } else if (returnCompare != 0) {
                    printf(FG_RED"%d.KO RETURN VALUE  "RESET, test);
                    fflush(stdout);
                }
            } else {
                printf(FG_GREEN"%d.OK  "RESET, test);
                fflush(stdout);
            }

            fclose(fs_read_output);
            fclose(fs_read_return);
            fclose(fs_read_error);
            fclose(fs_log);
        }
    }
}
