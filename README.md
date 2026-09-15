# C — Basics

Learning C from scratch, one small file at a time.

## Files

| File | Topic |
|---|---|
| [`intro.c`](./intro.c) | Your first program — `#include`, `main()`, variables, `printf()`, `return 0` |
| [`syntax.c`](./syntax.c) | C syntax rules — semicolons, and that code can be written in different layouts |
| [`newline.c`](./newline.c) | Escape sequences — `\n`, `\t`, `\\`, `\"` |

## Run any file

```bash
gcc filename.c -o out
./out
```

## Notes

**intro.c**
- `#include <stdio.h>` gives access to `printf()` and other I/O functions
- `main()` is where execution starts
- `return 0` tells the OS the program ran successfully

**syntax.c**
- Every statement ends with `;`
- Whitespace mostly doesn't matter — code can be written on one line or spread across many, and it behaves the same

**newline.c**
- `printf()` doesn't add a new line by itself — without `\n`, output runs together on one line
- Common escape sequences:

  | Sequence | Meaning |
  |---|---|
  | `\n` | new line |
  | `\t` | horizontal tab |
  | `\\` | backslash |
  | `\"` | double quote |

## Roadmap

- [x] Intro
- [x] Syntax
- [x] Escape characters
- [ ] Data types
- [ ] Operators
- [ ] Control flow
