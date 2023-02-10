https://www.hackerrank.com/challenges/grading/submissions/code/298823187

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,i,b;
    
    
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]<40)
        {
            if(a[i]>=38){a[i]=40;}
        }
        
        
        
        else if(a[i]%5!=0)
            {
                b=a[i]%5;
              
                if(b==3||b==4){
               a[i]= (a[i]+(5-b));
                }
            }
        
    }
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
}

