class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag = 0;
        vector<int> returns;
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = 0; j < nums.size(); j++) {
                if(i == j) continue;
                if(nums[i] + nums[j] == target) {
                    returns.push_back(i);
                    returns.push_back(j);
                    flag++;
                    break;
                }
            }
            if(flag != 0) break;
        }
        return returns;
    }
};