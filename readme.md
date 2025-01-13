**Programming Language Documentation: Mahabharata**

---

### Introduction
The "Mahabharata" programming language is inspired by the epic Mahabharata, blending cultural elements with modern programming constructs. This language uses Sanskrit terminology for keywords and emphasizes clarity and readability while offering powerful features.

---

### Lexical Elements

#### Keywords
- **Control Flow**: `Dharma`, `Adharma`, `Vikalpa`, `Tapas`, `Yatra`
- **Functions**: `Yajna`, `Ahvana`
- **Input/Output**: `Mantra`, `Shravana`
- **Other Constructs**: `Tyaga`, `Nivritti`, `Moksha`, `Prayaschitta`, `Shanti`

#### Types
- `Artha` (int)
- `Jala` (float)
- `Satya` (bool)
- `Akshara` (char)
- `Vani` (string)

#### Operators
- Arithmetic: `+` (Yoga), `-` (Viyoga), `*` (Bal), `/` (Vibhajan), `%` (Shesha)
- Logical: `&&` (Samavaya), `||` (Vibhaga), `!` (Maya)
- Relational: `==` (Eq), `!=` (Ne), `<` (Lt), `>` (Gt), `<=` (Le), `>=` (Ge)

#### Delimiters
- Semicolon: `;`
- Assignment: `=`
- Parentheses: `(`, `)`
- Braces: `{`, `}`
- Brackets: `[`, `]`
- Comma: `,`

#### Literals
- Integer: e.g., `42`
- Float: e.g., `3.14`
- String: e.g., `"Hello"`

---

### Grammar Rules

#### Program Structure
```c
def program: declarations functions main_function
```
- A program consists of global declarations, function definitions, and a main function.

#### Main Function
```c
def main_function: SANKALPA LPAREN RPAREN LBRACE statements RBRACE
```
- The main function is mandatory and serves as the entry point.

#### Declarations
```c
def declarations: /* empty */ | declarations declaration SEMICOLON
```
- Variables must be declared before use.
- Example: `Artha x;`

#### Functions
```c
def function_declaration: YAJNA type IDENTIFIER LPAREN parameters RPAREN LBRACE statements RBRACE
```
- Functions are defined with the keyword `Yajna`.
- Example:
  ```c
  Yajna Artha sum(Artha a, Artha b) {
      return a + b;
  }
  ```

#### Control Flow
```c
def conditional: DHARMA LPAREN expression RPAREN LBRACE statements RBRACE
                | DHARMA LPAREN expression RPAREN LBRACE statements RBRACE ADHARMA LBRACE statements RBRACE
                | DHARMA LPAREN expression RPAREN LBRACE statements RBRACE VIKALPA LPAREN expression RPAREN LBRACE statements RBRACE ADHARMA LBRACE statements RBRACE
```
- Example:
  ```c
  Dharma (x > 10) {
      Mantra("x is greater than 10");
  } Vikalpa (x == 10) {
      Mantra("x is equal to 10");
  } Adharma {
      Mantra("x is less than 10");
  }
  ```

#### Loops
```c
def loop: TAPAS LPAREN expression RPAREN LBRACE statements RBRACE
```
- Example:
  ```c
  Tapas (i < 10) {
      i = i + 1;
  }
  ```

#### Try-Catch
```c
def try_catch_block: PRAYASCHITTA LBRACE statements RBRACE SHANTI LPAREN IDENTIFIER RPAREN LBRACE statements RBRACE
```
- Example:
  ```c
  Prayaschitta {
      Mantra("Try block");
  } Shanti (error) {
      Mantra("Catch block");
  }
  ```

---

### Semantics

#### Scope Handling
- Variables and functions have block-level scope.
- Nested blocks maintain their own scope.

#### Error Handling
- Errors such as undefined variables or incompatible operations are caught at runtime or during parsing.
- Example:
  ```c
  Error: Undefined variable x.
  ```

---

### Example Program
```c
Sankalpa() {
    Artha x = 10;
    Artha y = 20;
    Mantra("Sum of x and y: ");
    Mantra(x + y);

    Dharma (x > y) {
        Mantra("x is greater than y");
    } Vikalpa (x == y) {
        Mantra("x is equal to y");
    } Adharma {
        Mantra("x is less than y");
    }

    Tapas (x < 100) {
        x = x + 1;
    }

    Prayaschitta {
        Mantra("Attempting risky operation");
    } Shanti (error) {
        Mantra("An error occurred");
    }
}
```

---

### Compilation and Execution

1. **Lexical Analysis**
   - Uses `Flex` to tokenize the input code.

2. **Parsing**
   - Utilizes `Bison` to generate an Abstract Syntax Tree (AST).

3. **Code Execution**
   - The generated AST is interpreted or compiled for execution.

---

### Limitations and Future Work

- Current language lacks support for pointers and dynamic memory allocation.
- Advanced features such as object-oriented programming can be added.
- Optimizations for faster compilation and execution are planned.

---

