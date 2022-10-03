#include <iostream>
#include <algorithm>


int main() {
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	int ud = -999999999;
	int maud = -999999999;
	for (int i = 1; i <= n; i++) {
		int f = 0;
		int t = 0;

		std::cin >> f >> t;
		if (t > k) {
			ud = f - (t - k);
			maud = std::max(ud, maud);
		}if (t <= k) {
			ud = f;
			maud = std::max(ud, maud);

		}



	} std::cout << maud;

}