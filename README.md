# Homework repository for the modern C++ course

This repository is a template repository to enable seamless homework checking.
To use it, click the <kbd>Use this template</kbd> button at the top of the page.
This will create a repository with all the necessary pipelines set up to
check your homework submissions.

## How to submit a homework

### Easy start
In order to start, you can instantly create a PR to fix a failing test (see the
Wiki of this project to see which test is failing). Just copy the contents of
the `commands.sh` in the `example_task` into the `commands.sh` in the
`example_task_copy` folder, commit it to a new branch an open a PR to your new
repository's `main` branch. If this is unclear than see a video from the course
about it.

### More information
Homeworks must all be under `homeworks` folder. You can see an example homework
already there and you will be adding your own to the same folder alongside the
`example_homework`, using it as an example.

Homeworks are automatically checked with the use of the
[`homework_checker`](https://github.com/cpp-for-yourself/homework_checker)
project following the homework receipt found in the
[`homework-definitions`](https://github.com/cpp-for-yourself/homework-definitions)
project.

