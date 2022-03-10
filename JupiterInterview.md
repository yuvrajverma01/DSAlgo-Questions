@param n    - Length of the array
<br>
@param curr - To store the current sum in each iteration
<br>
@param mini - To store the minimum value in each iteration
<br>
@param j - First Pointer (starting from i+1)
<br>
@param k - Second Pointer (starting from n-1 ~ end of the array)
<br>

```cpp

/*

The part  where I was getting stuck at was confused wether
the ith pointer was getting incremented or not?
The two pointer approach is being implemented on jth and kth pointer.

Storing sum of each iteration in curr,
Then compute curr - target to find the difference.
Keep storing the minimum value in mini variable.

Time Complexity would be O(n^2) here [for loop iteration and two pointer iteration]


nums = [-4, -2, 3 , 7, 8, 9, 4, -5]
        i   j                   k
            ---------------------
                 two pointer
             (only after sorting)
*/

int solve(vector<int>& nums, int target) {

    int n = nums.size();
    int curr = 0;
    int mini = INT_MAX;
    
    sort(nums.begin(), nums.end());

    for(int i =0; i<n;i++) {
	int j = i+1
        int k = n-1;

        // Two Pointer Approach being Implemented
	while(j<k)
	{
	     int curr = nums[i]+nums[j]+nums[k];
             int diff = abs(target-curr);
	     mini = min(mini, diff);
	     // This would result in difference being 0
	     if(curr == target) {
                 return diff;
             } else if (curr<target) {
                 j++;   // Increase the left pointer as curr is less
             } else {
                 k--;   // Decrease the right pointer as value is high
             }
	}
     }

     return mini;
}

```
