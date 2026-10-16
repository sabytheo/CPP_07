*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 07

> C++ templates

## Description

Function templates and class templates.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | Start with a few functions | `swap`, `min` and `max` function templates. |
| [`ex01`](ex01/) | Iter | `iter` applies a function to every element of an array of any type. |
| [`ex02`](ex02/) | Array | `Array<T>` class template with bounds-checked `operator[]` (throws on out-of-range access), deep copies and `size()`. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `Start` | `./Start` |
| `ex01` | `Iter` | `./Iter` |
| `ex02` | `Array` | `./Array` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
