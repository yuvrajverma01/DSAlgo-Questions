string printMinNumberForPattern(string s){
        
        stack<int> st;
        string ans = "";
        int n = 1;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'D') {
                st.push(n);
                n++;
            } else {
                st.push(n);
                n++;
                
                // Append Stack elements into empty string and clear stack
                
                while(!st.empty()) {
                    char ch = st.top() + '0';
                    ans = ans + ch;
                    st.pop();
                }
            }
        }
        
        st.push(n);
        n++;
        
        // Append Stack elements into empty string and clear stack
        
        while(!st.empty()) {
            char ch = st.top() + '0';
            ans = ans + ch;
            st.pop();
        }
        
        return ans;
    }