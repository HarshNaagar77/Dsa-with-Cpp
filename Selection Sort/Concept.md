# Selection Sort Algorithm

## Overview

Selection Sort is a simple and intuitive sorting algorithm. It works by repeatedly selecting the smallest (or largest, depending on the order) element from the unsorted portion of the array and moving it to the end of the sorted portion. It is known for its simplicity but is inefficient on large lists compared to more advanced algorithms like quicksort, mergesort, or heapsort.

## Algorithm Description

1. **Start** with the first element of the array as the current minimum.
2. **Iterate** through the array to find the smallest element in the unsorted portion.
3. **Swap** the smallest element found with the first unsorted element.
4. **Repeat** the process for the remaining unsorted portion of the array until the entire array is sorted.


## Complexity

- **Time Complexity:**
  - Best: O(n^2)
  - Average: O(n^2)
  - Worst: O(n^2)
- **Space Complexity:** O(1) (In-place sorting)

## Example

Given an array `[64, 25, 12, 22, 11]`, Selection Sort will sort it as follows:

1. Find the minimum element (11) and swap it with the first element.
   - Array: `[11, 25, 12, 22, 64]`
2. Find the minimum element in the remaining unsorted portion (12) and swap it with the second element.
   - Array: `[11, 12, 25, 22, 64]`
3. Continue this process until the entire array is sorted.
   - Final sorted array: `[11, 12, 22, 25, 64]`


