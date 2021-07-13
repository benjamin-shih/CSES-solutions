#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.length(), best = 0, curr = 1;
    for(int i = 1; i < n; ++i){
        if(s[i] != s[i - 1]){
            best = std::max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = std::max(best, curr);
    std::cout << best;
    return 0;
}
