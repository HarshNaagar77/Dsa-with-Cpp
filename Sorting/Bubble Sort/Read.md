# Bubble Sort Algorithm

## Overview

Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted. Bubble Sort is known for its simplicity but is not suitable for large datasets due to its O(n^2) time complexity.

## How It Works

1. **Initial Pass**: Start from the beginning of the array.
2. **Compare Adjacent Elements**: Compare the current element with the next element.
3. **Swap if Needed**: If the current element is greater than the next element, swap them.
4. **Repeat**: Continue this process for each pair of adjacent elements.
5. **End of Pass**: After each pass, the largest unsorted element will have "bubbled" up to its correct position.
6. **Terminate**: Repeat the process until no swaps are needed, indicating that the list is sorted.

## Example

Here's a step-by-step example of Bubble Sort on an array of integers:

### Initial Array


### Pass 1

- Compare 64 and 34, swap -> [34, 64, 25, 12, 22, 11, 90]
- Compare 64 and 25, swap -> [34, 25, 64, 12, 22, 11, 90]
- Compare 64 and 12, swap -> [34, 25, 12, 64, 22, 11, 90]
- Compare 64 and 22, swap -> [34, 25, 12, 22, 64, 11, 90]
- Compare 64 and 11, swap -> [34, 25, 12, 22, 11, 64, 90]
- Compare 64 and 90, no swap

### Pass 2

- Compare 34 and 25, swap -> [25, 34, 12, 22, 11, 64, 90]
- Compare 34 and 12, swap -> [25, 12, 34, 22, 11, 64, 90]
- Compare 34 and 22, swap -> [25, 12, 22, 34, 11, 64, 90]
- Compare 34 and 11, swap -> [25, 12, 22, 11, 34, 64, 90]
- Compare 34 and 64, no swap
- Compare 64 and 90, no swap

### Pass 3 and Beyond

Continue this process until no more swaps are needed.

### Important
- It first sort out the biggest value of the array at the last position.
- Then sort out the second biggest value of the array at the second last position.

- i = 0 loop repeats for i < n - 1 times
- j = 0 loop repeats for j < n - i -1 times

