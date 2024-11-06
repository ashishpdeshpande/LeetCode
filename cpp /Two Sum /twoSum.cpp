// Solution 1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    return {i,j}; 
                }
            }
        }
        return { };
    }
};


// Solution 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int , int> mpp;
        for(int i = 0; i < nums.size(); i++) {
            if(mpp.find(target - nums[i]) != mpp.end()) {
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};
