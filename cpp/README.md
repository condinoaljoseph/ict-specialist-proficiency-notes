About C++
- from human-readable form transform into machine language
- a strongly typed language

---------------------
BASIC INPUT /OUTPUT

`C++` uses a convenient abstraction called `streams` to perform input and output operations in sequential media such as the screen, the keyboard or a file. A `stream` is an entity where a program can either insert or extract characters to/from.
	
| STREAM | DESCRIPTION |
|---|---|
| cin | standard input stream  |
| cout | standard output stream  |
| cerr | standard error (output) stream  |
| clog | standard logging (output) stream  |

- `"` double qouting makes difference when it comes to `c++`; when the text is enclosed between them, the text is printed literally; when they are not, the text is interpreted as the identifier of a variable, and its value is printed instead
- `std` abbreviation for standard

- `::` is the `scope` operator

- `=` indicates assignment, not equality in the mathematical sense

- `>>` operator (“get from”) specifies where that input goes

- `<<` operator inserts the data that follows it into the stream that precedes it

- Don't forget to add a backslash n (`\n`) to insert a line break, `endl` manipulator can also be used to break lines

- `getline` that takes the stream (`cin`) as first argument, and the string variable as second

-------
- STRINGSTREAM
    - The standard header `<sstream>` defines a type called `stringstream` that allows a string to be treated as a stream, and thus allowing extraction or insertion operations from/to strings in the same way as they are performed on cin and cout


----------
To run c++ on terminal: execute and run the program.

to execute:

`g++ filename -o a.out` 

`g++ filename`

to run:

`./a.out`

`./my_executable.out`

`./filename`

```
// single line comment
/* ... */ multiple line comment
```

Code, save, run (IDE)
Compile and Execute (terminal)

------------
DATA TYPES:							
|  TYPE |  USAGE | EX  |
|---|---|---|
| Int  | int num  |0, 420   | 
| Double  | floating-point num  |3.14, -2.0   | 
|Char   | characters  | ‘a’, ‘@‘  | 
|String   | seq of characters  | “Hello World!”, “Codecademy”  | 
|Bool   | truth values  | true, false  | 

----------
Arithmetic Operators:
- `+` addition
- `-` subtraction
- `*` multiplication 
- `/` division
- `%` modulo

```Note: The order of operations can be specified using parentheses ().```

Chaining - to write the `cout` statements within a single line

----------
`Formulas`:

Fahrenheit (F) to Celsius (C)
- C = (F - 32) / 1.8C=(F−32)/1.8

To calculate `BMI` body mass index
- bmi = weight / (height * height)

------------
Introduction to Conditionals & Logic

- if, else if, and else statements
    - `if` statement is used to test an expression for truth and execute some code based on it
    - 
- switch statements
- Relational operators
- Logical operators