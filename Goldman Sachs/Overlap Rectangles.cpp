int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if (L1[0] == R1[0] || L1[1] == R1[1] || L2[0] == R2[0]
        || L2[1] == R2[1]) {
            // the line cannot have positive overlap
            return false;
        }
     
        // If one rectangle is on left side of other
        if (L1[0] >= R2[0] || L2[0] >= R1[0])
            return false;
     
        // If one rectangle is above other
        if (R1[1] >= L2[1] || R2[1]>= L1[1])
            return false;
     
        return true;
    };