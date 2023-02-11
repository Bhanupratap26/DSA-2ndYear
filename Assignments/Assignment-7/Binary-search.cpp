https://leetcode.com/problems/binary-search/submissions/867856377/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high =  nums.size()-1;
        while (low<=high)
        {
            int mid = (low+high)/2;
            cout<<"high: "<<high<<" low: "<<low<<" mid: "<<mid<<"\n";
            if(nums[mid]==target)
            {
                //cout<< target,"exists in nums and its index is",mid;
                return mid;
            }
            else if(target>nums[mid])
            {
                low = mid+1;
            }
            else{
                high = mid -1;
            }
            
        }
        return -1;
    }
};
