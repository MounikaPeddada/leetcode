class Solution {
public:
    bool isPalindrome(int x) {
        int rem,org=x;
        long long dig=0;
        if(x<0||(x%10==0 && x!=0))
        return false;
        else
        {
            while(x>0)
            {
                rem=x%10;
                dig=dig*10+rem;
                x=x/10;
            }
        }
        if(dig==org)
        return true;
        else 
        return false;
        
    }
};