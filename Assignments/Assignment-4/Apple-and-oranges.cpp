https://www.hackerrank.com/challenges/apple-and-orange/submissions/code/298868960



#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int count_apples = 0, count_oranges = 0;
    for (int i = 0; i < apples.size(); i++){
        if (((apples[i] + a) >= s) && ((apples[i] + a) <= t))
            count_apples ++;    
        }

    for (int i = 0; i < oranges.size(); i++){
        if (((oranges[i] + b) >= s) && ((oranges[i] + b) <= t))
            count_oranges ++;    
        }

    cout << count_apples << "\n" << count_oranges << endl;    
    }



int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    vector<int> apples(m);
    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    vector<int> oranges(n);

    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}
