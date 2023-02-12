https://leetcode.com/problems/number-of-good-pairs/


class Solution {
public:
int fact(int n)
{
    long f = 1;
    for(int a =1 ; a<=n; a++)
    {
       f = f*a;
    }
    return f;
   
}

    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        long sum = 0;
        unordered_map<int,int>m;
        for(int i =0 ; i<n;i++)
        {
            m[nums[i]]++;
        } 
        for(auto p : m)
        {
            if(p.second > 1)
            {
                cout<<"p.second -> "<<p.second<<endl;
                //int x = fact(p.second);
                cout<<"fact(x) -> "<<fact(p.second)<<endl;
                int comb = fact(p.second)/(2*fact(p.second-2));
                cout<<"comb -> "<<comb<<endl;
                sum = sum + comb;
                cout<<"sum -> "<<sum<<endl;
            }
        }
        return sum;
        
    }
};
