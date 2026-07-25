class Solution {
public:
    int maxProduct(int n) {
        int rem,max=0,a=0;
        while(n>0)
        {
            rem=n%10;
            if(rem*a>max)
            max=a*rem;
            if(rem>a)
            a=rem;
            n=n/10;
        }
        return max;
    }
};