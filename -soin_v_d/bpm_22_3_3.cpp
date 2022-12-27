#include<iostream>
#include<string>



int main() {
	std::string s;
	std::cin >> s;
	int k = 0;
	int h = 0;
	for (int i = 0; i < size(s)-2; i++) {
		if (s[i] != '.') {
			if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2] && s[i+1]!='.' && s[i+2]!='.') {
				h = 1;
				std::cout << "YES";
				break;

			}
		}
	}if (h == 0) {
		std::cout << "NO";
	}
	
	
	
}
