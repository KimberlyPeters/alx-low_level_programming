## C - Function pointers

In this project, I learned about function pointers in C - what they hold, where they point in virtual memory, and how to use them.

### Helper File 🙌
* [_putchar.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x0F-function_pointers/_putchar.c): C function that writes a character to ```stdout```.

### Header Files 📁

* [function_pointers.h](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h): Header file containing prototypes for all functions written for programs 0-2 of the project.


| 	```File```    	    |				 ```Prototype``` 				        |
| ------------------------- | --------------------------------------------------------------------------------- |
| ```0-print_name.c```      | ```void print_name(char *name, void (*f)(char *));```  				|
| ```1-array_iterator.c```  | ```void array_iterator(int *array, size_t size, void (*action)(int));```  	|
| ```2-int_index.c```  	    | ```int int_index(int *array, int size, int (*cmp)(int));```		        |

* [3-calc.h](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h): Header file containing definitions and prototypes for all types and function written for the program [3-main.c](https://github.com/KimberlyPeters/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c).


| Type/File  | Definition/Prototypes |
| ------------- | ------------- |
| ```struct op```  | ```char *op``` ```int (*f)(int a, int b)```  |
| ```typedef op_t```  | ```struct op```    |
| ```3-op_functions.c```  | ```int op_add(int a, int b);``` ```int op_sub(int a, int b);``` ```int op_mul(int a, int b);``` ```int op_div(int a, int b);``` ```int op_mod(int a, int b);``` |
| ```3-get_op_func.c```  | ```int (*get_op_func(char *s))(int, int);```  |
