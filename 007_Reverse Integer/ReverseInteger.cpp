class Solution {
public:
    int reverse(long x) {
        int p = 1;
        long res = 0;
        long int_MAX = pow(2,31) - 1;
        long int_MIN = - pow(2,31);

    if(x < 0)
    {
        p = -1;
        x *= -1;
    }
    else
    {
        p = 1;
        x *= 1;
    }
    while(x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    if(p * res > int_MAX || p * res < int_MIN)
        return 0;
    else
        return p * res;
    }
};
