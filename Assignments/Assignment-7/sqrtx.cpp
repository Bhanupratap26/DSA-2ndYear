https://leetcode.com/problems/sqrtx/



class Solution {
public:
    int mySqrt(int x) {
        long long s=0,e=x,ans;
        while(s<=e)
        {
            long long mid = (s+e)/2;
            if(mid*mid<=x)
            {
                ans = mid;
                s = mid + 1;
            }

            else
            {
                e = mid-1;
            }
        }
        return ans;
  }
};
