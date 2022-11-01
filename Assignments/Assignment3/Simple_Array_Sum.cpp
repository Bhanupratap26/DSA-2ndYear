https://www.hackerrank.com/challenges/simple-array-sum/submissions/code/294306153

#include <bits/stdc++.h>

using namespace std;
int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for (int i = 0; i < ar.size(); i++){
        sum += ar[i];
    }
    return sum;

}

int main()
{
   int n, a;
   cin >> n;
   vector<int> arr;
   for (int i = 0; i < n; i++){
       cin >> a;
       arr.push_back(a);    
   }
   
   cout << simpleArraySum(arr); 
   
   
    return 0;
}
