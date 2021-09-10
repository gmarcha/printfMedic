#ifndef TESTS_H
# define TESTS_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <signal.h>
# include <sys/wait.h>

# include "color.h"

# define PROGRAM_NAME                   "printMedic"
# define ferror(funName, errNum)        fprintf(stderr, "%s: %s failed: %s\n", PROGRAM_NAME, funName, strerror(errNum)); exit(1);

//# ifdef DEBUG
//    extern int (*ft_printf)(const char *, ...);
//# endif

void 
test_print(
    int test,
    const char *expectedOutput,
    const int expectedReturnValue,
    int (*test_ptr)(),
    char *input,
    char *subset
);

#endif // TESTS_H
