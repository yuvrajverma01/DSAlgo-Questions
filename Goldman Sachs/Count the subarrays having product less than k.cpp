int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        int count = 0;
        int i = 0;
        int j = 0;
        
        //Use two pinter technique for sliding window
        
        while(j<n) {
            prod = prod*a[j];
            
            while(prod>=k && i<=j) {
                prod = prod/a[i];
                i++;                       //Increasing left bound
            }
            
            count = count + (j - i + 1);
            j++;                           //Increasing right bound
        }
        return count;
    }