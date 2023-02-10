https://www.hackerrank.com/challenges/breaking-best-and-worst-records/submissions/code/299360777


#include <iostream>

using namespace std;

int main()
{
   int n,i,score,big;
   int c=0;
   int d=0;
   cin>>n;
    
    int games[n];
    
    for(i=0;i<n;i++)
    {
        cin>>games[i];
    }
    
   score=games[0];
   big=games[0];
    for(i=0;i<(n-1);i++)
    {
        if(big<games[i+1])
        {
            big=games[i+1];
            c++;
        }
    }    
 
 for(i=0;i<(n-1);i++)
    {
        if(score>games[i+1])
        {
            score=games[i+1];
            d++;
        }
    }
 cout<<c<<" ";
 cout<<d;

    return 0;
}
