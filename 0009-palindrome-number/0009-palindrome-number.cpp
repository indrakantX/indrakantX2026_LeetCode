class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int temp = x;
        int sign = (x<0)?-1:1;

        while(x!=0)
        {
            int digit = x%10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;
            rev = (rev*10)+digit;
            x = x/10;
        }
        rev=rev*sign;
        return (temp==rev);
        
    }
};