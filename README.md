# Printf Medic
A complete tester for ft_printf, a 42 version of printf.

# How to use it ?
- Clone the repository in your Printf directory, go in the tester directory, and run `bash test.sh`.
- You can launch a test subset with `bash test.sh d`, and you can even run a specific test in a subset with `bash test.sh d 4` for example.
- Just check the `tester.log` file to see the differences between the true printf and your ft_printf version.
- Pay attention: this project has to be submitted on macos. There are some differences between BSD C Lib printf and GNU Lib C printf. This tester compares output with the macos printf, so the BSD Lib. You can install a virtual machine with FreeBSD for example, if you don't have an apple system.

![output](/assets/output.png)

# List of test subsets:

- a (all tests)
- m (mandatory tests)
- b (bonus tests)
- c
- s
- p
- d
- i
- u
- x
- X
- %
- c_width
- s_width
- p_width
- d_width
- i_width
- u_width
- x_width
- X_width
- c_width_dash
- s_width_dash
- p_width_dash
- d_width_dash
- i_width_dash
- u_width_dash
- x_width_dash
- X_width_dash
- d_width_zero
- i_width_zero
- u_width_zero
- x_width_zero
- X_width_zero
- s_precision
- d_precision
- i_precision
- u_precision
- x_precision
- X_precision
- s_width_precision
- d_width_precision
- i_width_precision
- u_width_precision
- x_width_precision
- X_width_precision
- s_width_precision_dash
- d_width_precision_dash
- i_width_precision_dash
- u_width_precision_dash
- x_width_precision_dash
- X_width_precision_dash
- d_space
- i_space
- d_width_space
- i_width_space
- d_width_dash_space
- i_width_dash_space
- d_precision_space
- i_precision_space
- d_width_precision_space
- i_width_precision_space
- d_width_precision_dash_space
- i_width_precision_dash_space
- d_plus
- i_plus
- d_width_plus
- i_width_plus
- d_width_dash_plus
- i_width_dash_plus
- d_precision_plus
- i_precision_plus
- d_width_precision_plus
- i_width_precision_plus
- d_width_precision_dash_plus
- i_width_precision_dash_plus
- x_hash
- X_hash
- x_width_hash
- X_width_hash
- x_width_dash_hash
- X_width_dash_hash
- x_precision_hash
- X_precision_hash
- x_width_precision_hash
- X_width_precision_hash
- x_width_precision_dash_hash
- X_width_precision_dash_hash
