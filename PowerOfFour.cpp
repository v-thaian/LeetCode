class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        else{
            double x = ( (1 *log(n))/log(4));
            int x_temp = round(x);
            if(pow(4, x_temp)==n) return true;
            return false;
        }
    }
};