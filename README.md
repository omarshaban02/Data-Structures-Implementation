# Data Structures and Map Problems Repository

This repository contains implementations of various data structures and solutions to map-related problems in C++. Each section corresponds to a different implementation or problem-solving approach.

## Deque Implementation

The `deque.h` file contains a class `My_Deque` that implements a Double-Ended Queue (Deque) using doubly linked list nodes.

### Methods Implemented:

- `My_Deque()`: Constructor to initialize an empty deque.
- `~My_Deque()`: Destructor to clear the deque.
- `begin()`: Returns the element at the front of the deque.
- `end()`: Returns the element at the end of the deque.
- `push_back(int element)`: Adds an element to the back of the deque.
- `push_front(int element)`: Adds an element to the front of the deque.
- `pop_back()`: Removes and returns the element from the back of the deque.
- `pop_front()`: Removes and returns the element from the front of the deque.
- `toVector()`: Converts the deque to a vector.
- `print()`: Prints all elements in the deque.
- `clear()`: Clears all elements in the deque.
- `get_size()`: Returns the current size of the deque.

## Dynamic Memory Allocation

The `da.h` file provides a class `My_DA` for dynamically resizing arrays.

### Methods Implemented:

- `My_DA()`: Default constructor initializes an empty array.
- `My_DA(int array[], int size)`: Constructor initializes with provided array and size.
- `get(int index)`: Returns the element at the specified index.
- `push(int element)`: Adds an element to the end of the array.
- `pop()`: Removes and returns the last element from the array.
- `insert(int index, int element)`: Inserts an element at the specified index.
- `remove(int index)`: Removes and returns the element at the specified index.
- `print()`: Prints all elements in the array.
- `clear()`: Clears all elements in the array.
- `find(int element)`: Finds and returns the index of the specified element.
- `get_size()`: Returns the current size of the array.
- `get_capacity()`: Returns the current capacity of the array.

## Map Problem 1

The `p1.h` file solves the problem of checking if a ransom note can be constructed from characters in a magazine.

### Function Implemented:

- `ransom_note(string ransomNote, string magazine)`: Returns true if the ransom note can be constructed using characters from the magazine; otherwise, false.

## Map Problem 2

The `map_problem2.cpp` file solves the problem of finding all possible words that can be formed from a scrambled word using a dictionary.

### Function Implemented:

- `word_amalgamation(vector<string> dictionary, string scrambled_word)`: Returns a set of words from the dictionary that can be formed using the characters of the scrambled word.
