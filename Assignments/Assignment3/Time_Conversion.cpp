https://www.hackerrank.com/challenges/time-conversion/submissions/code/298796553

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    
    
    int h,m,ss;
    h = (s[0]-'0')*10 + (s[1]-'0');
    m = (s[3]-'0')*10 + (s[4]-'0');
    ss = (s[6]-'0')*10 + (s[7]-'0');
    
    if(h<12 && s[8]=='P')
    {
        h+=12;
    }
    
    if(h==12 && s[8]=='A')
    {
        h=0;
    }
    
    printf("%02d:%02d:%02d\n",h,m,ss);
    
}
