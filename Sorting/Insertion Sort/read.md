# Insertion Sort

## Overview

Insertion Sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, it has the advantage of being simple to implement and understanding its basic operations can help in learning the fundamentals of sorting.

## How It Works

Insertion Sort works by iterating through the list of elements to be sorted. For each element, it is compared with the elements before it, and inserted into its correct position. This is done by shifting all elements larger than the current element to the right.

## Algorithm

1. Start from the second element (index 1) of the array.
2. Compare the current element with the elements before it.
3. Shift all elements larger than the current element to the right.
4. Insert the current element into its correct position.
5. Repeat steps 2-4 for all elements.

## Time Complexity

- **Best Case:** \(O(n)\) when the array is already sorted.
- **Average Case:** \(O(n^2)\).
- **Worst Case:** \(O(n^2)\) when the array is sorted in reverse order.

## Space Complexity

- **Space Complexity:** \(O(1)\) as it sorts the array in place.

