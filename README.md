<h2 align="center">

[![FT_PRINTF](https://github.com/TiagoDev88/42-project-badges/blob/main/badges/ft_printfe.png)](https://github.com/TiagoDev88/ft_printf) 
</h2>

<p align="center">
	<b><i>Your own printf implementation in C</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/TiagoDev88/ft_printf?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/TiagoDev88/ft_printf?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/TiagoDev88/ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/TiagoDev88/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/TiagoDev88/ft_printf?color=green" />
</p>

<h3 align="center">
	<a href="#️-about">About</a>
	<span> · </span>
	<a href="#️-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About

> _This project aims to recreate the C standard library function `printf` with some supported conversions._

It helped deepen my understanding of:
- Variadic functions in C using `stdarg.h`
- Handling different format specifiers
- Creating a modular and reusable codebase
- Managing flags, widths, and conversions

### ✅ Supported conversions:
- `%c` : character  
- `%s` : string  
- `%p` : pointer address  
- `%d` / `%i` : signed integer  
- `%u` : unsigned integer  
- `%x` / `%X` : hexadecimal  
- `%%` : percent symbol

## 🛠️ Usage

### Requirements

- GCC compiler
- Make

### Instructions

**1. Clone the repository**

```bash
git clone https://github.com/TiagoDev88/ft_printf.git
cd ft_printf
```

**2. Compile the library**

```bash
make
```
This will generate the libftprintf.a static library.

**3. Use it in your project**
```
In your code:

c
#include "ft_printf.h"
```
Compile with:

```bash

gcc your_program.c -L. -lftprintf
```
## 📋 Testing
You can test the function manually:
```
c
#include "ft_printf.h"

int main(void)
{
	ft_printf("Hello %s! Number: %d | Hex: %x\n", "world", 42, 42);
	return (0);
}
```
Compile and run:

```bash
gcc -Wall -Wextra -Werror main.c libftprintf.a && ./a.out
```
Or use a tester like:

paulo-santana/printf-tester

Tripouille/printfTester

## **👤 Author**
42 login: tfilipe-

GitHub: @TiagoDev88
