<!-- 

[]()

 -->


# Algorithms

### Searching

1. [Linear Search]()
2. [Binary Search]()
3. [Depth First Search DFS]()
4. [Breadth First Search]()

### Sorting

1. [Linear Sort]()
2. [Heap Sort]()
3. [Merge Sort]()
4. [Selection Sort]()
5. [Quick Sort]()
6. [Counting Sort]()

### Arrays

1. [Kadane's Algorithm]()
2. [Dutch National Flag Algorithm]()
3. [Sliding Window Algorithm]()
4. [Two Pointer Algorithm]()
5. [Floyd's Cycle's Detection Algo]()
6. [KMP ALgo]()
7. [Quick Select Algo]()
8. [Boyer Moore Majority Vote Algo]()

### Graphs

1. [Kruskal's Algorithm]()
2. [Dijkstra's Algorithm]()
3. [Bellman Ford Algo]()
4. [Floyd Warshall Algo]()
5. [Topologcial Sort Algo]()
6. [Flood Fill Algo]()
7. [Lee Algo]()

### Strings

1. [Rabin-Karp Algo]()
2. [Knuth-Morris Pratt's Algo]()

---

# DSAlgo Questions

1. [Print Anagrams Together](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/&sa=D&source=editors&ust=1641407388534000&usg=AOvVaw1GlbDzewxfWuzvmegJcgfL)
    1. Create a main_map `map<map<char, int>, vector<string>>` to store frequencies of similar string
    2. Iterate through the given list of strings
        1. Store frequencies of characters in map<char, int> freq_map
        2. Iterate through main_map and .find(freq_map) in it
            1. If `it == main_map.end()` then push string to a temporary list of strings and `main_map.insert({freq_map, temp})`
            2. Else push string into main_map
    3. Append main_map.second in list of list of strings

2. [Count the subarrays having product less than k](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/&sa=D&source=editors&ust=1641407388535000&usg=AOvVaw1qgfi5CEHaNJWvpJM0hFcp)
    1. Create two pointers i and j
    2. Create a variable `prod` to store prod = prod*arr[j]
    3. Run a loop while(j<n) 
        1. Increment prod to prod = prod*arr[j]
        2. If the prod >= k and i<=j
            1. Decrement prod by prod/arr[i]
            2. Make i++
        3. Store count = count + (j-i+1)
        4. Make j++
    
3. [Overlapping Rectangles](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/&sa=D&source=editors&ust=1641407388535000&usg=AOvVaw1vvI0q9Zkk7Rcfah-38zud)
    1. Check if one rectangle is above another or not
    2. Check if one rectangle is on either side of each other
    3. Else return true
    
4. [Cute Monkeys](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/run-length-encoding/1/&sa=D&source=editors&ust=1641407388536000&usg=AOvVaw0nbtW_UaU7fsMgmAqflUt8)
    1. Iterate through string and create a counter = 1
        1. If s[i+1] == s[i] and i < s.len() - 1, then increment count++ and i++
        2. Append s[i] and count in an empty string
    
5. [Nth Ugly Number](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/&sa=D&source=editors&ust=1641407388536000&usg=AOvVaw2TjrPxk-clJB5uuFmyYYEt)
    1. Create a an arr of size n+1 i.e. arr[n+1]
    2. Initialize arr[1] = 1
    3. Create three pointers p2, p3, p5 and intitalize with 1
    4. Iterate through i=2 to i<=n
        1. Create three factors like f2 = 2*arr[p2]
        2. Find min of three factors and arr[i] = min
        3. Increment the particular pointer if min == f_
    
6. [Greatest Common Divisor of Strings](https://www.google.com/url?q=https://leetcode.com/problems/greatest-common-divisor-of-strings/&sa=D&source=editors&ust=1641407388537000&usg=AOvVaw25wf6JnitZvYwAqUZm54Gv)
    1. Assign n, m to str1.len() and str2.len() respectively
    2. If str1 + str2 is not equal to str2 + str1 ~ return false
    3. If both strings are equal ~ return str1
    4. If n > m ~ recurse and return fun(str1.substr(m), str2)
    5. If m > n ~ recurse and return fun(str2.substr(n), str1)
    
7. [Find the Kid which gets the damaged toy](https://www.google.com/url?q=https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/&sa=D&source=editors&ust=1641407388545000&usg=AOvVaw2rd5ic7Uxu0UQsktRX91jK)
    1. If n == 1 ~ return 1
    2. Create a temporary variable and store temp = m + k - 1
    3. If temp%n == 0 ~ circle is completed and return size of circle
    4. Otherwise return temp%n
    
8. [Number Following a Pattern](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1&sa=D&source=editors&ust=1641407388546000&usg=AOvVaw3WXYx3xOB3HwDJgirMmD4M)
    1. Create a variable `n` and initialize with n = 1
    2. Iterate through string
        1. If str[i] == 'D' ~ Push n into stack and increment n++
        2. Else             ~ Push n into stack and increment n++
            1. Iterate till !st.empty() and append character into empty string and pop from stack
    3. Push n into stack and increment n++
    4. Iterate till !st.empty() and append character into empty string and pop from stack
    
9. [Find max 10 numbers in a list having 10M entries](https://stackoverflow.com/questions/19227698/write-a-program-to-find-100-largest-numbers-out-of-an-array-of-1-billion-numbers)
    1. Either use maxHeap
    2. Use Quick Select Sort
    
10. [Find Missing and Repeating](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/&sa=D&source=editors&ust=1641407388547000&usg=AOvVaw2Qu_qokz5hrIlCbQD4p5ew)
    1. Store last element in a
    2. Store length of string in b
    3. Iterate through arr till n-1
        1. If arr[i] == arr[i+1] ~ return duplicate
        2. Make a = a + arr[i]
        3. Make b = b + i + 1
    4. Return Missing element which is b - (a - duplicate)
    
11. [Find total number of Squares in a N*N chessboard](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1&sa=D&source=editors&ust=1641407388548000&usg=AOvVaw0_MxnIQlYnq_x5C_PktEw9)
    1. For a grid of size n*n the total number of squares formed are: `n(n+1)(2n+1)/6`
    2. Iterate through i=0 to i<=N and keep adding sum + i*i
    
12. [Decode The String](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/decode-the-string2444/1&sa=D&source=editors&ust=1641407388548000&usg=AOvVaw317fTRfolT65YpNaGwHkfz)
    1. Create two stacks (1 int and 1 string), a prefix and num integer and prefix_str and ans string;
    2. Iterate through the given string
        1. If s[i] == ALPHABET ~ then append it in ans
        2. If s[i] == DIGIT ~ then num = num*10 + (s[i] - '0') i.e. multiply by 10 and convert it to int
        3. If s[i] == '[' ~ Push ans to string stack and Push num to int stack and make clear num and ans
        4. If s[i] == ']'
            1. Put prefix = st.top()         ~ int
            2. Pop the stack                 ~ int
            3. Put prefix_str = stch.top()   ~ string
            4. Pop the stack                 ~ string
            5. While prefix--, add ans to prefix_str
            6. ans = prefix_str
    
13. [Minimum Size Subarray Sum](https://www.google.com/url?q=https://leetcode.com/problems/minimum-size-subarray-sum/&sa=D&source=editors&ust=1641407388549000&usg=AOvVaw0GHl7T9y425WVZWKkHqm22)
    1. Create two pointers i and j and initialize a variable `ans = INT_MAX` 
    2. Iterate through array while j<n
        1. Keep on adding arr[j] to sum
        2. Apply a while(sum >= target) ~ find min of (ans and j - i), reduce arr[i] in sum and increment i++
    3. Return 0 if ans = INT_MAX, otherwise ans

14. [Array Pair Sum Divisibility Problem](https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1&sa=D&source=editors&ust=1641407388549000&usg=AOvVaw18filLQbRm6JNfymeAf8ZA)
    1. Store frequencies of remainder in a hashmap
    2. Check condition if map[0]%2 is ODD ~ odd frequencies won't make a pair
    3. Iterate through map and check for if(rem != 0 && rem_freq[k - rem] != freq) ~ odd frequencies won't make a pair
    
