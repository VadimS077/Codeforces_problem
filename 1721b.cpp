#include <iostream>
#include <cmath>
int main() {
	int t = 0;
	std::cin >> t;
	while (t != 0) {
		int n, m, sx, sy, d;
		std::cin >> n >> m >> sx >> sy >> d;
		if ((sx - d > 1 && sy + d < m) || (sy - d > 1 && sx + d < n)) {
			std::cout << m - 1 + n - 1 << std::endl;
		}
		else {
			std::cout << -1 << std::endl;
		}
		t -= 1;

	}

}