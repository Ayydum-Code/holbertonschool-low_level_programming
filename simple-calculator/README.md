# Simple Calculator (C)

A command-line calculator that performs basic arithmetic on two numbers.

## Compile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o calc
Run


## Examples:

./calc 6 + 3     # 9
./calc 7 / 2     # 3
./calc 45 + 100  # 145

## Supported Operations
Operator	Operation
+	Addition
-	Subtraction
*	Multiplication
/	Division


## Known Limitations
- Only one operation per run
- Wrong number of arguments or an unknown operator prints Error and asks to try again.
- Non-numeric input is treated as 0 (no validation).
- Results outside the int range overflow.
- must be integer values, cannot accept alphabetic values
