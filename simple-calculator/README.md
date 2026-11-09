# Simple Calculator (C)

A command-line calculator that performs basic arithmetic on two numbers.

## Compile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o calc
Run
./calc <number> <operator> <number>

## Examples:

./calc 6 + 3     # 9
./calc 7 / 2     # 3
./calc 7 % 2     # 1
./calc 4 \* 5    # 20  (escape * so the shell doesn't expand it)

## Supported Operations
Operator	Operation
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulo

## Numeric Behavior
- Integers only. Input is converted with atoi.
- Division truncates toward zero (7 / 2 gives 3, -7 / 2 gives -3).
- Decimal input is cut off at the decimal point (2.9 is read as 2).

## Known Limitations
- Only one operation per run; no chained expressions or parentheses.
- Division or modulo by zero prints Error and exits.
- Wrong number of arguments or an unknown operator prints Error and exits.
- Non-numeric input is treated as 0 (no validation).
- Results outside the int range overflow.
- * must be quoted or escaped on the command line.
