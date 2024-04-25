# HexConverterCpp

## Overview
The HexConverterCpp repository contains a simple C++ program that demonstrates how to convert integer values to hexadecimal strings. The program defines a function called `to_hexa` that takes a vector of integers as input and returns a concatenated hexadecimal string.

## Features
- Conversion to Hexadecimal:
The to_hexa function converts each integer in the input vector to its hexadecimal representation.
It uses stream manipulators to ensure that each hexadecimal value is formatted with leading zeros (e.g., 0x01, 0x0A).

- Example Usage:
The program provides two examples:
1. Converting the vector {1, 2, 3, 4, 5, 6} to a hexadecimal string.
2. Converting the vector {0xBA, 0xAD, 0xF0, 0x0D} to a hexadecimal string.

## Requirements
- C++11 or higher due to the use of stream manipulators and other modern features

## Contributing
Contributions to enhance the HexConverterCpp program are welcome! Feel free to fork this repository, make improvements, and submit pull requests.

## Author
Written by mht83.
