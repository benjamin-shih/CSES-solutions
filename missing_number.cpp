#include <iostream>
using namespace std;

int main() {
    long long int n, s = 0; 
    cin >> n;
    for (int i = 0; i < n - 1; ++i){
        int a;
        std::cin >> a;
        s += a;
    }
    cout << n * (n + 1) / 2 - s;
    return 0;
}
