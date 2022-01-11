int findPosition(int N , int M , int K) {
        // If Circle contains just one item
        if(N == 1) return 1;
        
        // temp ~ total places to move
        // (We distribute items in same cycle starting from k)
        int temp = M + K - 1;
        
        // If the cycle is completed return size of circle
        if(temp%N == 0) {
            return N;
        }
        return temp%N;
    }