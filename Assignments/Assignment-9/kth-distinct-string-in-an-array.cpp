https://leetcode.com/problems/kth-distinct-string-in-an-array/submissions/889915325/


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>ans;
         unordered_map<string,int>count;

    
    for(int i = 0; i<arr.size(); i++)
    {
        count[arr[i]]++;
    }

    for(int i = 0 ; i<arr.size() ; i++)
    {
        if(count[arr[i]]==1)
        {
            cout<<"index -> "<<i <<"   value -> "<<count[arr[i]]<<endl;
           ans.push_back(arr[i]); 
        }
    }
    for(auto i:count){
        cout<<i.first;
    }
    if(k>ans.size())
    return"";
    else
    return ans[k-1];
  }
  
};
