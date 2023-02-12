https://leetcode.com/problems/sum-of-unique-elements/submissions/893144303/



class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int,int>m;

       int  n = nums.size();
       
        for(int i =0 ; i<n ; i++)
        {
            m[nums[i]]++;
        }
        int x = m.size();
        int sum = 0;
       for (auto p : m)
       {
           if(p.second == 1)
           {
               sum = sum + p.first;
           }
       }

        return sum;
         
    }
};
