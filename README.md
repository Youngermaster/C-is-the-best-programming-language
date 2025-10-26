# C is the best programming language

A simple C program that demonstrates pointer usage and string manipulation by creating a typographic animation effect.

## Output

```
C is the best programming language
C is the best programming languag
C is the best programming langua
C is the best programming langu
C is the best programming lang
C is the best programming lan
C is the best programming la
C is the best programming l
C is the best programming
C is the best programmin
C is the best programmi
C is the best programm
C is the best program
C is the best progra
C is the best progr
C is the best prog
C is the best pro
C is the best pr
C is the best p
C is the best
C is the bes
C is the be
C is the b
C is the
C is th
C is t
C is
C i
C
C+
C++
C++ i
C++ is
C++ is t
C++ is th
C++ is the
C++ is the b
C++ is the be
C++ is the bes
C++ is the best
C++ is the best p
C++ is the best pr
C++ is the best pro
C++ is the best prog
C++ is the best progr
C++ is the best progra
C++ is the best program
C++ is the best programm
C++ is the best programmi
C++ is the best programmin
C++ is the best programming
C++ is the best programming l
C++ is the best programming la
C++ is the best programming lan
C++ is the best programming lang
C++ is the best programming langu
C++ is the best programming langua
C++ is the best programming languag
C++ is the best programming language
```

## How it works

The program uses two char pointers to store two strings:
- `"C is the best programming language"`
- `"C++ is the best programming language"`

### Algorithm

1. **First loop (shrinking)**: Prints the first string progressively removing one character at a time from the end
   - Starts with full length and decrements down to 1
   - Uses `printf("%.*s\n", i, str1)` where `%.*s` is a precision specifier

2. **Second loop (growing)**: Prints the second string progressively adding one character at a time
   - Starts with 1 character and increments up to full length
   - Uses `printf("%.*s\n", i, str2)`

### Key C concepts

- **Char pointers**: `char *str` - points to the first character of a string
- **Precision specifier**: `%.*s` - the `.*` takes an integer argument that specifies how many characters to print from the string pointer
- **String length**: `strlen()` - calculates the length of the string to know iteration bounds

## Building and running

```bash
# Compile
make

# Compile and run
make run

# Clean up
make clean
```

## Requirements

- GCC compiler
- Works on Linux and macOS
