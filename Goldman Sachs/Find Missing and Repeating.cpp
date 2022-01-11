int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int *ans[2];
        
        long long s1 = arr[n-1]; // Last Element
        long long s2 = n;        // Size of an array
        
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                ans[0]=arr[i];
            }
            
            s1 = s1 + arr[i];   //Add current element
            s2 = s2 + i + 1;    //Add index + 1
        }
        
        ans[1] = s2 - (s1 -ans[0]);
        
        return ans;
    }