# ScriptWarrior Shell

## Overview
ScriptWarrior Shell is a simple command-line shell that allows users to execute commands and simulate scheduling algorithms. It supports First-Come-First-Serve (FCFS) and Round Robin scheduling, providing a basic framework for understanding process management in operating systems.

## Project Structure
```
scriptwarrior_shell
├── src
│   ├── main.c            # Entry point of the application
│   ├── commands.c        # Command execution functionality
│   ├── commands.h        # Header for commands.c
│   ├── scheduler.c       # Scheduling algorithms implementation
│   ├── scheduler.h       # Header for scheduler.c
│   ├── utils.c           # Utility functions
│   ├── utils.h           # Header for utils.c
│   └── scriptwarrior_shell.h # Consolidated header for the shell
├── Makefile              # Build instructions
└── README.md             # Project documentation
```

## Building the Project
To build the project, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable named `scriptwarrior_shell`.

## Running the Shell
After building the project, you can run the shell using the following command:

```
./scriptwarrior_shell
```

## Usage
Once the shell is running, you can enter commands directly. Here are some examples:

- To execute a single command:
  ```
  ls -l
  ```

- To simulate FCFS scheduling:
  ```
  fcfs command1 command2 command3
  ```

- To simulate Round Robin scheduling with a specified quantum:
  ```
  rr <quantum> command1 command2 command3
  ```

- To run automation tasks (file listing and disk usage):
  ```
  automate
  ```

- To exit the shell:
  ```
  exit
  ```

## Contributing
Contributions are welcome! If you have suggestions for improvements or new features, feel free to submit a pull request.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.