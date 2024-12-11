# Sorting Algorithms

This project covers various sorting algorithms implemented in C. The goal is to understand and implement different sorting techniques and analyze their performance.

## Table of Contents
- [Sorting Algorithms](#sorting-algorithms)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Sorting Algorithms](#sorting-algorithms-1)
    - [Bubble Sort](#bubble-sort)
    - [Insertion Sort](#insertion-sort)
    - [Selection Sort](#selection-sort)
    - [Quick Sort](#quick-sort)
  - [Files](#files)
  - [Usage](#usage)
  - [Author](#author)

## Introduction
Sorting algorithms are fundamental in computer science. They are used to arrange data in a particular order, which is essential for optimizing the performance of other algorithms that require sorted data.

## Sorting Algorithms

### Bubble Sort
Bubble Sort is a simple comparison-based algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

### Insertion Sort
Insertion Sort builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

### Selection Sort
Selection Sort divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list.

### Quick Sort
Quick Sort is an efficient, comparison-based, divide-and-conquer sorting algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.


## Files
- `bubble_sort.c`: Implementation of the Bubble Sort algorithm.
- `insertion_sort.c`: Implementation of the Insertion Sort algorithm.
- `selection_sort.c`: Implementation of the Selection Sort algorithm.
- `quick_sort.c`: Implementation of the Quick Sort algorithm.
- `README.md`: This file.

## Usage
1. Clone the repository:
    ```sh
    git clone https://github.com/username/holbertonschool-sorting_algorithms.git
    ```
2. Compile the files:
    ```sh
    gcc -Wall -Wextra -Werror -pedantic *.c -o sorting_algorithms
    ```
3. Run the executable:
    ```sh
    ./sorting_algorithms
    ```

## Author
- Jonas(https://github.com/Jonas-Jungling)
- Hervé(https://github.com/Krosenvag)
