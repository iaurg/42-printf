# 42-printf
This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future projects without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.

I think the most difficult part was new commands like va_*, variadic params and a new way to organize and think in coding.

**variadic arguments/variadic functions**
variadic functions receive a ... parameter that can be any number of arguments. We need to use stdarg lib to read this type of arguments using va_start, va_arg, va_copy, va_end

## Compile and test
```sh
make && gcc-flag main.c libftprintf.a && ./a.out
```

## Testers
I've used/passed into the following tests:

https://github.com/paulo-santana/ft_printf_tester

https://github.com/Tripouille/printfTester
