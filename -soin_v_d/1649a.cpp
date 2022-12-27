#include <iostream>
#include <vector>
int main() {
	int t = 0;


	std::cin >> t;

	for (int j = 0; j < t; j++) {
		std::vector <int> vec;
		int n = 0;
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			int a = 0;
			std::cin >> a;
			vec.push_back(a);
		}
		int k = 999;
		for (int j = 0; j < n; j++) {
			std::cout << vec[j];
		}
		int g = -1;
		int r = -1;
		for (int i = 0; i < n; i++) {

			if (g == -1 && vec[i] == 0) {
				r = i - 1;
			}
			if (vec[i] == 0) {
				g = i + 1;
			}
			k = g - r;
			std::cout << r << std::endl;




		}std::cout << k << std::endl;



	}
}