// We check stable unstable in case of repeated elements in an array.
// Array - 3 5* 1 2 5** (5 is repeated)
// Stable sort or algorithm - 1 2 3 5* 5** (relative position of 5 is same as in array)
// Stable sort or algorithm - 1 2 3 5** 5* (relative position of 5 is not same as in array)

// Bubble sort is a stable algorithm
// Selection sort is an unstable algorithm , for prove use 5* 5** 2 3 1
// Insertion sort is a stable algorithm 
// Merge sort is a stable algorithm
// Quick sort is an unstable algorithm , for prove use 2 1 8 5 5* 6 3 4