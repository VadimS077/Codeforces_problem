#include <iostream>



int main() {
	int t=0;
	std :: cin >> t;
	for (int i = 0; i < t; i++) {
		int n, k, r, c;
		std :: cin >> n >> k >> r >> c;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (((r + c) - (i + j)) % k == 0) {
					std ::cout << "X";
				}
				else {
					std::cout << ".";
				}
			}
			std::cout << std::endl;
		}
	}
	
}
