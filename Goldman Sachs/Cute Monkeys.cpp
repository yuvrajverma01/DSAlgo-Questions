string encode(string s)
{     
    string ans = "";
    int n = s.length();
    for(int i=0; i<n; i++) {
        int count = 1;
        while(i<n-1 && s[i] == s[i+1]) {
            count++;
            i++;
        }
        ans = ans + s[i];
        char ch = '0' + count;
        ans = ans + ch;
    }
    return ans;
}