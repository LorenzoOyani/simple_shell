# simple_shell
### A simple UNIX command line interpreter written, as part of my Learning projects in ALX Low level programming  tracks 

# DESCRIPTION
------------------------------------------
### A simple shell is  UNIX command language interpreter that reads commands from a file or standard input and execute them.

# Basic lifetime of a shell
### A shell does three things in its lifetime
 <ol>
    <li><em>Initialize</em> : </li>
    <li><em>Interpret</em> : </li>
    <li><em>Terminate</em> : </li>
</ol>

- ***Initialize***: In this step, a typical shell would read and execute its configuration files. These change aspects of the shell's behaviour.

- ***Interpret***: Next, the shell reads commands from stdin(which could be interactive, or a file) and executes them.

- ***Terminate***: After it's command are executed, the shell executes any shutdown commands, frees up any emory, and terminates.

# Basic loop of a shell.
- **Read**: Read the command from the standard input.
- **Parse**: seperate the command string into a program and arguments.
- **Execute**: Run the parsed command.