int minSubArrayLen(int target, vector<int>& arr) {
        int i = 0;
        int j = 0;
        int n = arr.size();
        int ans = INT_MAX;
        int wsum = 0;
        
        while(j<n) {
            wsum = wsum + arr[j];
            j++;
            while(wsum >= target) {
                ans = min(ans, j - i);
                wsum = wsum - arr[i];
                i++;
            }
        }
        return ans == INT_MAX ? 0: ans;
    }