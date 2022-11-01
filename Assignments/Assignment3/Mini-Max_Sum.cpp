https://www.hackerrank.com/challenges/mini-max-sum/submissions/code/298749994

#include <bits/stdc++.h>

using namespace std;


void miniMaxSum(vector<int> arr) {
    int i,j;
    int long max=0;
    int long min = 0;
    
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
       if(arr[j]<arr[j+1])
       {
           swap(arr[j],arr[j+1]);
       }
       }
   }
   
 
 for(i=0;i<4;i++)
 {
     max=max+arr[i];
 }
 
 for(i=1;i<5;i++)
 {
     min=min+arr[i];
 }
cout<<min<<" ";
cout<<max;

}

int main()
{
 
 int i,a;
 vector<int>arr;
 for(i=0;i<5;i++)
 {
     cin>>a;
     arr.push_back(a);
 }   
   
   miniMaxSum(arr);
}
