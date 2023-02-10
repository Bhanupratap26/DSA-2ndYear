https://www.hackerrank.com/challenges/kangaroo/submissions/code/312307288


#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2){
    if ((x1 < x2) && (v1 > v2)){
    for (int i = 1; i < 10000; i++){
        if ((x1 + (i*v1)) == (x2 + (i*v2)))
            return "YES";
         
            
    }}
    return "NO";
}
    

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";
    return 0;
}
