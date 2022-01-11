string decodedString(string s){
        stack<string> stch;
        stack<int> st;
        string ans = "";
        int num = 0;
        int prefix = 0;
        string prefixstr;
        
        for(int i=0; i<s.length(); i++) {
            if(isalpha(s[i])) ans = ans + s[i];
            if(isdigit(s[i])) num = num*10 + (s[i] - '0');
            
            if(s[i] == '[') {
                stch.push(ans);
                st.push(num);
                num = 0;
                ans = "";
            }
            if(s[i] == ']') {
                prefix = st.top();
                st.pop();
                prefixstr = stch.top();
                stch.pop();
                while(prefix--) {
                    prefixstr = prefixstr + ans;
                }
                ans = prefixstr;
            }
        }
        return ans;
    }