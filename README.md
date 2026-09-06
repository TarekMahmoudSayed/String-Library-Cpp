# String Library in C++

A custom C++ string utility class that provides a collection of useful functions for string manipulation, analysis, formatting, and word processing.

## 📌 About The Project

`clsString` is a reusable C++ class created to practice and demonstrate different concepts of **C++ and Object-Oriented Programming (OOP)**.

The project provides several operations for working with strings, including case conversion, character counting, word manipulation, splitting, trimming, joining, and replacing words.

It was developed as part of my journey to improve my C++ programming and OOP skills.

## ✨ Features

### 🔤 Case Manipulation

* Print the first letter of each word
* Convert the first letter of each word to uppercase
* Convert the first letter of each word to lowercase
* Convert the entire string to uppercase
* Convert the entire string to lowercase
* Invert the case of all letters

### 🔎 String Analysis

* Count capital letters
* Count small letters
* Count occurrences of a specific character
* Count vowels
* Print all vowels in a string

### 📝 Word Operations

* Print each word in a string
* Split a string into words
* Reverse the order of words
* Replace words with case-sensitive matching
* Replace words with case-insensitive matching
* Replace substrings using built-in C++ string functions

### ✂️ String Formatting

* Trim spaces from the left
* Trim spaces from the right
* Trim spaces from both sides
* Join strings using a custom delimiter

### ⚙️ C++ Features Practiced

This project also demonstrates the use of:

* Classes
* Encapsulation
* Static member functions
* Non-static member functions
* Function overloading
* Operator overloading
* Constructors
* `string`
* `vector`
* Iterators
* STL algorithms

## 🧱 Class Design

The main class in the project is:

```cpp
class clsString
```

It internally stores the string value using:

```cpp
string _Value;
```

The class provides two types of functions:

### Static Functions

These functions can work directly with a string without creating an object.

Example:

```cpp
string Result = clsString::UpperAllString("hello world");
```

### Non-Static Functions

These functions operate directly on the string stored inside the object.

Example:

```cpp
clsString Text("hello world");

Text.UpperAllString();

cout << Text.getValue();
```

## 🧪 Testing

The project includes a `main.cpp` file that demonstrates and tests the implemented functionality of the `clsString` class.

The test program covers:

* Creating string objects
* Assigning values
* Case conversion
* Character counting
* Vowel counting
* Word splitting
* Word reversing
* String trimming
* Joining strings
* Replacing words
* Replacing substrings
* Operator overloading
* String conversion

Example:

```cpp
clsString Text("Hello World From C++");

cout << Text.UpperAllString() << endl;
cout << Text.CountVowel() << endl;
```

The `main.cpp` file acts as a simple demonstration and testing environment for the class.

## 📂 Project Structure

```text
String-Library-CPP/
│
├── clsString.h
├── main.cpp
└── README.md
```

### `clsString.h`

Contains the complete implementation of the `clsString` class and all string utility functions.

### `main.cpp`

Contains examples and tests demonstrating how to use the class and its different functions.

### `README.md`

Contains the project documentation and usage information.

## 🚀 How To Use

Include the header file in your C++ project:

```cpp
#include "clsString.h"
```

Create an object:

```cpp
clsString Text("Hello World");
```

Then use the available functions:

```cpp
cout << Text.UpperAllString() << endl;
cout << Text.CountVowel() << endl;
cout << Text.ReverseWordsinString() << endl;
```

## 🎯 Learning Goals

The main goal of this project is to practice building a reusable C++ class while strengthening my understanding of:

* Object-Oriented Programming
* String manipulation
* STL
* Function overloading
* Operator overloading
* Code organization
* Reusable code design

## 👨‍💻 Author

**Tarek Mahmoud**

Computer Science & AI Student

Interested in:

* C++
* Object-Oriented Programming
* Data Structures & Algorithms
* Competitive Programming
* Problem Solving
* Software Development
