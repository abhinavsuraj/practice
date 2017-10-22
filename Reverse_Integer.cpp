//Code to reverse an integer
class Solution {
public:
    int reverse(int x) {
        int flag = 1; // confirm the sign
        long long result = 0; // result
        if(x < 0) // judge positive and negative and do the appropriate treatment
        {
            flag = -1;
            x = -1 * x;
        }
        while(x) // evaluates
         {
            result = result * 10 + (x % 10);
            x = x / 10;
        }
        result = result * flag; // add the sign
        // Note that the number of int type after the reverse may be large
        return (result < INT_MIN || result > INT_MAX ) ? 0 : result; // handling overflow this way
    }
};
