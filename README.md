# C++ Module 06 Overview

## Introduction

C++ Module 06 is part of the 42 school's curriculum designed to deepen your understanding of C++ programming, focusing on different types of casting in C++. This module emphasizes the importance of proper type conversion and introduces advanced casting techniques.

## Compilation

```
make
```
Or, if there is no Makefile:
```
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```
Run the program:
```
./exec_name(check Makefile)
```
## Topics Covered

### 1. **Static Casting and Scalar Type Conversion**
   - **Static Casting**: Learn how to perform explicit type conversions between compatible types using static casting.
   - **Scalar Type Conversion**: Understand the conversion between fundamental data types (e.g., int to float) and the implications of such conversions.

### 2. **Serialization and Reinterpret Casting**
   - **Serialization**: Explore techniques to convert complex data structures into a format suitable for storage or transmission.
   - **Reinterpret Casting**: Gain insights into low-level type conversions that treat the bit pattern of a variable as another type, and understand the associated risks.

### 3. **Dynamic Casting and Runtime Type Identification**
   - **Dynamic Casting**: Utilize `dynamic_cast` to safely convert pointers or references to base or derived classes, ensuring type safety at runtime.
   - **Runtime Type Identification (RTTI)**: Learn how C++ supports the identification of object types during program execution, enabling features like polymorphism and type-safe casting.

## Usage

Execute the compiled program to test advanced C++ concepts such as:

- Inheritance and polymorphism
- Type safety with static and dynamic casting
- Serialization and reinterpret casting for complex data handling
- Runtime type identification (RTTI) for dynamic object type checking
