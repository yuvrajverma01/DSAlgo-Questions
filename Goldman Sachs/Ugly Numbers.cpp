long long getNthUglyNo(int n) {
	    long long arr[n+1];
	    arr[1] = 1;
	    long long p2 = 1;                //Pointer for 2
	    long long p3 = 1;                //Pointer for 3
	    long long p5 = 1;                //Pointer for 5
	    
	    for(int i=2; i<=n; i++) {
	        long long f2 = 2*arr[p2];    //Factor for 2
	        long long f3 = 3*arr[p3];    //Factor for 3
	        long long f5 = 5*arr[p5];    //Factor for 5
	        
	        long long min = f2<f3?f2:f3; // Find minimum amongs factors of 2, 3 and 5
	        min = min<f5?min:f5;
	        arr[i] = min;
	        
	       // Increment min - factors -> Pointer
	        
	        if(min == f2) p2++;
	        if(min == f3) p3++;
	        if(min == f5) p5++;
	    }
	    return arr[n];
	}