#include <climits>
class Solution {
public:
    int reverse(int x) {

      int rem,dig=0;
      while(x!=0)
      {
        rem=x%10;
        
        if (dig > INT_MAX/10 || (dig == INT_MAX/10 && rem > 7))
          return 0;

        if (dig < INT_MIN/10 || (dig == INT_MIN/10 && rem < -8))
         return 0;
         dig=dig*10+rem;
         x=x/10;
      }
      return dig;

    }
};