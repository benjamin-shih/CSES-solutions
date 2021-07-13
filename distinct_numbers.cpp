#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long int d;
    map<int, int> m;
    cin >> d;
    for (int i = 0; i < d; ++i){
        int a;
        cin >> a ;
        if (m.find(a) == m.end()){
            m.insert({a, 1});
        }
    }
    cout << m.size();
    return 0;
}
