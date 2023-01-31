https://www.hackerrank.com/challenges/staircase/submissions/code/295162147


#include<iostream>

using namespace std;

int main()
{
    int n,i,j,s,x;
    cin>>n;
    
   
    for(i=0;i<n;i++)
  {
    for(s=0;s<n-i-1;s++)
    {
        cout<<" ";
    }    
        for(x=0;x<=i;x++)
        {
            cout<<"#";
        }
        
        cout<<endl;
       }
       
       
  

}
