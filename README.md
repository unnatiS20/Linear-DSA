# Linear-DSA
Linear data structures are data structures in which elements are arranged sequentially, with each element connected to its previous and next element (e.g., arrays, linked lists, stacks, and queues).

## Array Intersection Algorithm
Step 1. Input: Two arrays arr1[] and arr2[] of size n1 and n2, respectively.

Step 2. Sort: Sort both arrays to make comparison easier.

Step 3. Use two pointers:

        a) Initialize two pointers i = 0 and j = 0 for the two arrays.

        b) Traverse both arrays simultaneously:

        c)If arr1[i] == arr2[j], it means the element is common to both arrays. Print or store it, then increment both i and j.

        d)If arr1[i] < arr2[j], increment i (move to the next element in arr1).

        e)If arr1[i] > arr2[j], increment j (move to the next element in arr2).

Step 4. End: Continue until either pointer reaches the end of the respective array.

Code: [ArrayIntersection.cpp](./Getting%20Started%20With%20Arrays/ArrayIntersection.cpp)

## Duplicate Algorithm

Step 1. Initialize ans to 0.

        This variable will hold the result of XOR operations.

Step 2. XOR all elements of the array:

        a) Loop through the array and XOR each element with ans.

        b) This operation will cancel out all elements that appear an even number of times.

Step 3. XOR all numbers from 1 to n-1:

        a) In another loop, XOR all integers from 1 to n-1 (where n is the size of the array).

        b) This step cancels out the non-duplicate elements from the XOR result in the previous step.

        c) Return ans:

The final value of ans will be the duplicate element, as all other elements will have been canceled out through XOR

Code: [Duplicates.cpp](./Getting%20Started%20With%20Arrays/Duplicates.cpp)

## Linear Search Algorithm

Procedure LinearSearch(array, target)
    Input: array (a list of elements), target (the element to find)
    Output: index (position of the target element in the array), or -1 if not found

    For i from 0 to length of array - 1
        If array[i] is equal to target
            Return i    // target found at index i
        End If
    End For

    Return -1         // target not found in the array
End Procedure


Code: [LinearSearch.cpp](./Getting%20Started%20With%20Arrays/LinearSearch.cpp)

## Maximum And Minimium In Array Pseudocode
1. Initialization:

        max = arr[0]

        min = arr[0]

2. Loop through the array:

        For i = 1 to n-1:

        If arr[i] > max, then max = arr[i]

        If arr[i] < min, then min = arr[i]

        Output:

        Return max and min

Code: [MaxAndMin.cpp](./Getting%20Started%20With%20Arrays/MaxAndMin.cpp)

## Pair sum Algorithm
1. Sort the Array:

        Sorting the array ensures that you can efficiently find pairs using the two-pointer technique.

2. Initialize Two Pointers:

        left starts at the beginning of the array.

        right starts at the end of the array.

3. Find Pairs Using Two Pointers:

        Calculate the sum of elements at left and right pointers.

        If the sum equals S, add the pair to the result list and move both pointers inward.

        If the sum is less than S, move the left pointer to the right to increase the sum.

        If the sum is greater than S, move the right pointer to the left to decrease the sum.

4. Return the Result:

        The result will contain all pairs that sum up to

        𝑆

        S, sorted by the first element and then by the second element if necessary.

Code: [PairSum.cpp](./Getting%20Started%20With%20Arrays/PairSum.cpp)

## Reverse Algorithm

1. Initialize Pointers:

        Set a pointer start to the beginning of the array (index 0).
        Set a pointer end to the end of the array (index N-1 where N is the size of the array).
2. Swap Elements:

        While start is less than end:
        Swap the elements at the start and end indices.
        Increment the start pointer by 1.
        Decrement the end pointer by 1.
3. End:

The array is reversed

Code: [Reverse.cpp](./Getting%20Started%20With%20Arrays/Reverse.cpp)

## Scope Algorithm

1. Define the update Function:

        Input: An integer array arr and its size n.
        Print: Message indicating entry into the function.
        Update: Set the first element of the array (arr[0]) to 120.
        Print: Print all elements of the array.
        Print: Message indicating return to the main function.
2. Define the main Function:

        Initialize: An integer array arr with values {1, 2, 3, 4, 5}.
        Call: The update function with the array and its size.
        Print: Message indicating printing in the main function.
        Print: All elements of the array after the update function call.

Code: [Scope.cpp](./Getting%20Started%20With%20Arrays/Scope.cpp)

## Sort012 Algorithm

1. Define the printArray Function:

        Input: An integer array arr and its size n.
        Print: Each element of the array followed by a space.
        Print: A newline after printing all elements.
2. Define the sortOne Function:

        Input: An integer array arr and its size n.
        Initialize: Two pointers, i to the start of the array (0) and j to the end of the array (n-1).
3. Sort:
        While i < j:
        Move the i pointer to the right while elements at i are 0 and i < j.
        Move the j pointer to the left while elements at j are 1 and i < j.
4. If elements at i are 1 and elements at j are 0 and i < j:
        Swap the elements at i and j.
        Increment the i pointer.
        Decrement the j pointer.
5. Define the main Function:

        Initialize: An integer array arr with values {1, 1, 0, 0, 0, 0, 1, 0}.
        Call: The sortOne function to sort the array.
        Call: The printArray function to print the sorted array.

Code: [Sort012.cpp](./Getting%20Started%20With%20Arrays/Sort012.cpp)

## Triplet Algorithm

1. Sort the Array: Sorting helps to use the two-pointer technique efficiently and also to avoid      duplicate triplets.

2. Iterate and Find Triplets:

3. Use a loop to fix one element.
        For the remaining elements, use two pointers (left and right) to find pairs that together with the fixed element sum to 
        𝐾
        K.
3. Skip duplicates to ensure all triplets are distinct.
4. Handle Output: Collect all unique triplets and print them. If no triplets are found, print -1.

Code: [Triplet.cpp](./Getting%20Started%20With%20Arrays/Triplet.cpp)

## Unique element in array Algorithm

1. Initialize:

result = 0
2. Process Each Element:

        For each element arr[i] in the array:
        Update result using the XOR operation: result = result ^ arr[i]
3. Final Result:

        After the loop completes, result contains the unique element that does not have a duplicate.

Code: [Unique.cpp](./Getting%20Started%20With%20Arrays/Unique.cpp)
