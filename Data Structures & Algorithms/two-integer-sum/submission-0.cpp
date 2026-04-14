class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2);

        for(int i = 0; i<nums.size(); i++){
            int need = target - nums[i];

            if(mp.count(need)){
                ans[0] = mp[need];
                ans[1] = i;
                return ans;
            }

            mp[nums[i]] = i;
        }

        return {};
        
    }
};
