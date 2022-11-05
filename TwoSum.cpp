class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a =0, b=0;
        int n= nums.size();
        for(int i=0; i<n;i++){
            for(int j=i+1; j<n;j++){
                if(nums[i]+nums[j]==target){
                    a =i;
                    b=j;
                }
            }
        }
        vector<int> res;
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};