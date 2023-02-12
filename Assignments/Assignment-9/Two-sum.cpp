https://leetcode.com/problems/two-sum/submissions/866371671/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n,i,j;
        n = nums.size();
        vector<int>v;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                }
                       
            }
        }
       return v;
        
    }
};
