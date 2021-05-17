class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum; //vector of sums
        int total = 0;  //cumulative sum
        for(int i=0; i<nums.size(); i++) {
           total += nums[i];
           sum.push_back(total);
        }
        return sum;
    }
};