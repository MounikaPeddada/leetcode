class Solution {
public:
    int i=0;
    void reverseString(vector<char>& s) {
        int n=s.size();
        char temp;
        if(i>=n/2)
        return;
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
        i++;
        reverseString(s);
    }
};