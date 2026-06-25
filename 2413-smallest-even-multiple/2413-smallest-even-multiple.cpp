class Solution {
public:
    int smallestEvenMultiple(int n) {
        
        // int i = 1;
        // while(n > 0)
        // {
        //     if(i % n == 0 && i % 2 == 0)
        //     {
        //         return i;
        //         break;
        //     }
        //     i++;
        // }

        if(n % 2 == 0)
        {
            return n;
        }
        else
        {
            return 2 * n;
        }
        return -1;
    }
};