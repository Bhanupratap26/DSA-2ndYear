https://leetcode.com/problems/jewels-and-stones/submissions/893150977/


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ns = stones.size();
        unordered_map<int,int>m;
        for(int i = 0; i<ns ; i++)
        {
            m[stones[i]]++;
        }
        int nj = jewels.size();
        int sum = 0;
        for(int j =0; j<nj ; j++)
        {
            for(auto p : m)
            {
                if(jewels[j] == p.first)
                {
                    sum = sum + p.second;
                }
            }
        }

        return sum;

        
    }
};
