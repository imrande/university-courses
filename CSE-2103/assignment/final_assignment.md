# Final exam Assignment

```py
# 1. Write a PseudoCode for Linear search?

LinearSearch(array, n, key)
Begin
    for i = 0 to n-1 by 1 do
        if array[i] == key then
            return i
        endif
    endfor
    return -1
End
```

```py
# 2. Write a Pseudocode for Binary search?

BinarySearch(array, n, key)
Begin
    lower = 0
    higher = n - 1
    while (lower <= higher) do
        mid = (lower + higher) / 2
        if array[mid] == key
            return mid
        else if key > array[mid]
            lower = mid + 1
        else
            upper = mid - 1
        endfor
    endWhile
End
```

```js
// 3. Write a Pseudocode for Bubble sort algorithm?

bubbleSort(array)
Begin
    for i < 0 to indexOfLastUnsortedElement
        flag initialized 0
        for j < 0 to indexOfLastUnsortedElement - 1 -i
            if leftElement > rightElement
                swap leftElement and rightElement
                increment flag by 1
            endif
        
        if flag becomes 0
            break loop
        endfor
    endfor
End     
```

```cpp
// 4. Write a Pseudocode for Merge sort algorithm?

mergeSort(m)
    var list, left, right
    if length(m) <= 1
        return m
    else
        middle = length(m) / 2
        for each x in m up to middle
            add x to left
        for each x in m after middle
            add x to right
        left = mergeSort(left)
        right = mergeSort(right)
        result = merge(left, right)
        return result

merge(left, right)
    var list result
    while length(left) > 0 and length(right) > 0
        if first(left) <= first(right)
            append first(left) to result
            left = rest(left)
        else
            append first(right) to result
            right = rest(right)
        if length(left) > 0
            append left to result
        if length(right) > 0
            append right to result
        return result
```

```py
# 5. Write a Pseudocode for Linked List?


```

```cpp
// 6. Write a Pseudocode for Postfix Expression?

Begin
    for each_char in postfixExpression
        if ch is an operator then
            a := pop first element from stack
            b := pop second element from stack
            res := b ⨀ a
            push res into the stack
        else if ch is an operand, then
            add ch into the stack
    return element of stack top
End
```
