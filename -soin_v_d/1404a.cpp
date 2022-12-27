#include<iostream>
#include <algorithm>


int main() {


    int t = 0;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        bool ok = true;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < k; i++) {
            bool zero = false, one = false;
            for (int j = i; j < n; j += k) {
                if (s[j] == '0') {
                    zero = true;

                }
                if (s[j] == '1') {
                    one = true;
                }
            }
            if (zero && one) {
                ok = false;
                break;
            }
            if (zero) {
                cnt0++;
            }
            if (one) {
                cnt1++;
            }
        }
        if (std::max(cnt0, cnt1) > k / 2) {
            ok = false;
        }
        std::cout << (ok ? "YES" : "NO") << std::endl;

    }

}
