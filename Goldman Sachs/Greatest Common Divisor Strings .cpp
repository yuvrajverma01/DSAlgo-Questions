string gcdOfStrings(string str1, string str2) {
        
        // Assign n, m to length of strings
        int n = str1.length();
        int m = str2.length();
        
        // if ~ sum of both strings have to be equal to divise GCD
        // else if ~ both strings are equal, return any
        // else if ~ n>m then search str2 in str1 and delete it
        // else ~    m>n then search str1 in str2 and delete it

        if(str1 + str2 != str2 + str1) {
            return "";
        } else if (str1 == str2) {
            return str1;
        } else if (n > m) {
            return gcdOfStrings(str1.substr(m), str2);
        } else {
            return gcdOfStrings(str2.substr(n), str1);
        }
    }