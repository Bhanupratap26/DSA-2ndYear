https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/889277188/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int low = 0,high = nums.size() - 1;
        int s = 0 , e = nums.size()-1;

    int first = -1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        
        cout<<"mid ->"<< mid<<"nums[mid] is = "<<nums[mid]<<" target="<<target<<endl;
        if(nums[mid] == target)
        {
            //cout<<"i am in "<< nums[mid]<<" == "<<"target-> "<< target<<"mid"<< mid;
            first = mid;
            
            high = mid-1;      
        }
      

        else if(target>nums[mid])
        {
            low = mid +1;
        }

        else 
        {
            high = mid - 1;
        }
    }
     ans.push_back(first);
     cout<<"first -> "<< first<<endl;

     cout<<"****************"<<endl;
    
     int last = -1;

    while(s<=e)
    {
        int midd = s + (e - s)/2;
        cout<<"midd -> "<< midd<<"  nums[midd] is = "<<nums[midd]<<"  target="<<target<<endl;
        if(nums[midd] == target)
        {
            last = midd;
            cout<<"last -> "<< last<<endl;
            s = midd+1;      
        }

        else if(target>nums[midd])
        {
            s = midd +1;
        }

        else 
        {
            e = midd - 1;
        }
        
    }
     ans.push_back(last);

/*int n = ans.size();
for(int k =0 ; k<n;k++)
{
    cout<<ans[i]<<endl;
}*/
return ans;
        
    }
};
