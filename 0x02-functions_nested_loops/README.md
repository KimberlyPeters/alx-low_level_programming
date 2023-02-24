## C - Functions, Nested loops
-----------------------------------------------
In this project, I learned about nested loops, header files, and variable scope in C while practicing declaring and defining my own functions.
----------------------------------------------------------------
### Helper File
------------------------------------------------------------
* _putchar.c: C function that writes a character to ```stdout```.
-----------------------------------
### Header File
---------------------------------
* main.h: Header file containing prototypes for all functions written in the project.

|        File          		|      	  Prototype                  	|
| -------------------- 		| -----------------                    	|
| ```1-alphabet.c```    	| ```void print_alphabet(void);``` 	|
| ```2-print_alphabet_x10.c``` 	| ```void print_alphabet_x10(void);```  |
| ```3-islower.c```  		| ```int _islower(int c);```  		|
| ```4-isalpha.c```  		| ```int _isalpha(int c);```		|
| ```5-sign.c```		| ```int print_sign(int n);```		|
| ```6-abs.c```			| ```int _abs(int);```			|
| ```7-print_last_digit.c```    | ```int print_last_digit(int);```      |
| ```8-24_hours.c```            | ```void jack_bauer(void);```	  	|
| ```9-times_table.c```         | ```void times_table(void);```         |
| ```10-add.c```	        | ```int add(int, int);```		|
| ```11-print_to_98.c```        | ```void print_to_98(int n);```        |
| ```100-times_table.c```       | ```void print_times_table(int n);```  |

### TASKS
---------------------------------------------------
* [0-putchar.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c): C program that prints ```_putchar```, followed by a new line. Returns 0. 
-----------------------------------------------------
* [1-alphabet.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c): C function that prints the alphabet in lowercase, followed by a new line.
----------------------------------------------
* [2-print_alphabet_x10.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c):C function that prints the alphabet in lowercase 10 times, followed by a new line.
--------------------------------
* [3-islower.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c): C function that checks for lowercase characters. Returns ```1``` if the character is lowercase, ```0``` otherwise.
-------------------------------------------
* [4-isalpha.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c): C function that checks for alphabetic characters. Returns ```1``` if the character is a letter, ```0``` otherwise.
-----------------------------------------------
* [5-sign.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c): C function that prints the sign of a number. Returns:
	* ```1``` and prints ```+``` if the number is greater than zero.
	* ```0``` and prints ```0``` if the number is zero.
	* ```-1``` and prints ```-``` if the number is less than zero
---------------------------------------------------------
* [6-abs.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c): C function that returns the absolute value of an integer
------------------------------------------------
* [7-print_last_digit.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c): C function that prints the last digit of a number. Returns the value of the last digit.
----------------------------------------------------
* [8-24_hours.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c): C function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
--------------------------------------------------------------------------
* [9-times_table.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c): C function that prints the 9 times table, starting with 0.
--------------------------------------------
* [10-add.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c): C function that returns the addition of two integers.
--------------------------------------------------------
* [11-print_to_98.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c): C function that prints all natural numbers from an input to 98 followed by a new line, as follows:
	* Numbers are separated by a comma followed by a space.
	* Numbers are printed in order.
	* Input represents the number to begin counting from.
	* ```98``` is the last number printed.
------------------------------------------------------------------
* [100-times_table.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c): C function that prints the times table of an input value, starting with 0:
	* If input is greater than ```15``` or less than ```0```, function prints nothing.
------------------------------------------------------
* [101-natural.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c): C program that computes and prints the sum of all multiples of ```3``` or ```5``` below ```1024``` (excluded).
-------------------------------------------------
* [102-fibonacci.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c): C program that prints the first 50 Fibonacci numbers, starting with ```1``` and ```2```, followed by a new line. Numbers are separated by a comma followed by a space. 
-------------------------------------------------------------
* [103-fibonacci.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c): C program that prints the sum of even-valued Fibonacci numbers not exceeding 4,000,000, followed by a new line.
-----------------------------------------------------------
* [104-fibonacci.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c): C program that prints the first 98 Fibonacci numbers, starting with ```1``` and ```2```, followed by a new line, without using ```long long```, ```malloc```, ```pointers```, ```arrays```, ```structures```, or any library besides the standard. Numbers are separated by a comma followed by a space.
