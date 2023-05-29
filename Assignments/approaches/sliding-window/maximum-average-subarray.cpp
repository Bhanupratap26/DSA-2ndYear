
https://leetcode.com/problems/maximum-average-subarray-i/submissions/959324311/


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0,j=0;
        double ans = INT_MIN;
      double sum;

      while(j<n)
      {
          sum+=nums[j];

          if(j-i+1<k)
          {
              j++;
          }

          else if(j-i+1 == k)
          {
              ans = max(sum,ans);
              sum-=nums[i];
              i++;
              j++;
          }
      }

      return ans/k;
     
    }
};
