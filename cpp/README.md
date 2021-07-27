**`About C++`**
- from human-readable form transform into machine language
- a strongly typed language

---------------------
**BASIC INPUT /OUTPUT**

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
    - The standard header `<sstream>` defines a type called `stringstream` that allows a string to be treated as a stream, and thus allowing extraction or insertion operations from/to strings in the same way as they are performed on `cin` and `cout`


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
`DATA TYPES`:							
|  TYPE |  USAGE | EX  |
|---|---|---|
| Int  | int num  |0, 420   | 
| Double  | floating-point num  |3.14, -2.0   | 
|Char   | characters  | ‘a’, ‘@‘  | 
|String   | seq of characters  | “Hello World!”, “Codecademy”  | 
|Bool   | truth values  | true, false  | 

----------
**`Arithmetic Operators`**:
- `+` addition
- `-` subtraction
- `*` multiplication 
- `/` division
- `%` modulo

```Note: The order of operations can be specified using parentheses ().```

----------
`Variable` - is a location in memory where a value can be stored. Declare variables with data type and name before use



----------
`Formulas`:

Fahrenheit (F) to Celsius (C)
- C = (F - 32) / 1.8C=(F−32)/1.8

To calculate `BMI` body mass index
- bmi = weight / (height * height)

| #  | Planet  | Relative Gravity  |
|---|---|---|
| 1  | Mercury  | 0.38  |
| 2 | Venus | 0.91  |
| 3  | Mars  | 0.38  |
| 4  | Jupiter  | 2.34  |
| 5  | Saturn  | 1.06  |
| 6  | Uranus  | 0.92  |
| 7  | Neptune  | 1.19  |

------------
**`CONDITIONAL & LOGIC`**

- ***if, else if, and else statements***
    - `if` statement is used to test an expression for truth and execute some code based on it: if the condition is `true`, then the statements within are executed. Otherwise, the statements are skipped and the program continues on.
    - add an `else` clause to an `if` statement to provide code that will only be executed if the condition is `false`. So what happens if you want more than two possible outcomes? This is where `else if` comes in! The e`lse if` statement always comes after the `if` statement and before the `else` statement. The `else if` statement also takes a condition.
- ***switch statements***
    - `switch` statement provides an alternative syntax that is easier to read and write
    - the `switch` keyword initiates the statement and is followed by `()`, which contains the value that each case will compare. `One restriction` on this expression is that it must evaluate to an `integral type` (`int`, `char`, `short`, `long`, `long long`, or `enum`)
    - inside the block, `{}`, there are multiple cases. The `case` keyword checks if the expression matches the specified value that comes after it, the code that follows the `:` would run
    - `break` keyword tells the computer to exit the block and not execute any more code
    - At the end of each `switch` statement, there is a `default` statement. If none of the cases are `true`, then the code in the `default` statement will run. It’s essentially the `"else"` part.
- ***Relational Opreators***(can compare 2 values):
    - `==` equal to
    - `!=` not equal to
    - `>` greater than
    - `<` less than
    - `>=` greater than or equal to
    - `<=` less than or equal to
- ***Logical Operators***
    - `&&`: the `and` logical operator (only one needs to be `false`)
    - `||`: the `or` logical operator (only one needs to be `true`)
    - `!`: the `not` logical operator 

**`Introduction to Loops`**

`Loops` - a programming tool that repeats some code or a set of instructions until a specified condition is reached. An `iteration` in your code when referring to your `loops`; `iterate` means `"to repeat"`.

2 Types of Loops:
1. while loops
    - The `while` loop looks very similar to an `if` statement. And just like an `if` statement, it executes the code inside of it if the condition is `true`. However, the difference is that the `while` loop will continue to execute the code inside of it, *over and over again*, as long as the condition is `true`.
2. for loops
    - A `for` loop is a *repetition* control structure that allows you to efficiently write a loop that needs to execute a specific number of times.
    - There are three separate parts to this separated by `;`:
        - The initialization of a *counter*: `int i = 0`
        - The continue condition: `i < 20`
        - The change in the counter (*in this case an increment*): `i++`

*Syntax of a `For` loop*
```
for ( init; condition; increment ) {
   statement(s);
}
```

*Incrementing `for` loop:*
```
for (int i = 0; i < 20; i++) 
{
  // Statements
}
```


*Decrementing `for` loop:*
```
for (int i = 20; i > 0; i--) 
{
  // Statements
}
```



**`Classifying Errors`**
1. ***Compile-time errors***: Errors found by the compiler.
    - `Syntax errors`: Errors that occur when we violate the rules of C++ syntax. eg: missing semi-colon `;`, closing parenthesis `)`, square bracket `]`, or curly brace `}`
    - `Type errors`: Errors that occur when there are mismatch between the types we declared. eg: `Forgetting to declare` a variable and `Storing a value` into the wrong type
2. ***Link-time errors***: Errors found by the linker when it is trying to combine object files into an executable program.
3. ***Run-time errors***: Errors found by checks in a running program.
4. ***Logic errors***: Errors found by the programmer looking for the causes of erroneous results.
