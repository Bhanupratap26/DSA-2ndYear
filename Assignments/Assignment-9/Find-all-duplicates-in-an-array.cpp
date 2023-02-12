https://leetcode.com/problems/find-all-duplicates-in-an-array/


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i =0 ; i<n; i++)
        {
            m[nums[i]]++;
        }    
        for(auto p : m)
        {
            if(p.second == 2)
            {
                ans.push_back(p.first);

            }
        }    
        return ans;
    }
};
