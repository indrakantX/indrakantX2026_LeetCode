class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == divisor)
        {
            return 1;
        }

        if(dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }

        bool sign = true;

        if(dividend >= 0 && divisor < 0)
        {
            sign = false;
        }
        else if(dividend < 0 && divisor > 0)
        {
            sign = false;
        }

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long quotient = 0;

        while(n >= d)
        {
            int cnt = 0;

            while(n >= (d << (cnt + 1)))
            {
                cnt++;
            }

            quotient += (1LL << cnt);
            n -= (d << cnt);
        }

        if(sign)
        {
            if(quotient > INT_MAX)
            {
                return INT_MAX;
            }

            return (int)quotient;
        }
        else
        {
            if(quotient == 2147483648LL)
            {
                return INT_MIN;
            }

            return (int)(-quotient);
        }
    }
};