https://leetcode.com/problems/keep-multiplying-found-values-by-two/



class Solution {
public:
    bool found(vector<int>& nums, int original)
    {
        int m;
        int n = nums.size();
        for(int i =0 ; i<n ;i++)
        {
               if(nums[i] == original)
        {
            m = 1;
            break;
        }
        else
        {
            m = 0;
        }
    }
    return m;
    }
     
    
    int findFinalValue(vector<int>& nums, int original) {
        
        if(found(nums,original) == true)
        {
           
            cout<<"original -> "<<original;
            while(found(nums,original)==true)
            {
                 cout<<" true";
                original = original*2;
                cout<<"   original*2 -> "<<original<<endl;
                cout<<"new turn "<<endl;
            }
        }
       
        return original;
    }
};
