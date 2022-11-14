class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        double x =0;
        x = log(n) / log(2);
        int x_temp = round(x);
        if (pow(2, x_temp)==n) return true;
        return false; 
    }
};