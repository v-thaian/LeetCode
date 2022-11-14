class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<= 0) return false;
        else{
            double x = log(n)/log(3);
            int x_temp = round(x);
            if(pow(3,x_temp)==n) return true;
            return false;
        }
    }
};