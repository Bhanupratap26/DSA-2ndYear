class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(),nums.end());
       
        for(int i =0;i<n;i++)
        {
            if(nums[i] ==nums[i+1])
            {
                return true;
            }
          
        }
        return false;
    }
};
