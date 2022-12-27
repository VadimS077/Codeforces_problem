#include <iostream>
#include <vector>

int main() {
	int n = 0;
	std::cin >> n;

	std::vector <int> a;
	std::vector <int> b;

	int h = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> h;
		a.push_back(h);



	}for (int i = a.size() - 1; i >= 0; i--) {
		bool flag = true;

		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				flag = false;
				break;




			}

		}if (flag == true) {
			b.push_back(a[i]);

		}

	} std::cout << b.size() << std::endl;
	for (int i = b.size() - 1; i >= 0; i--) {
		std::cout << b[i] << " ";
	}



}