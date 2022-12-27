#include<iostream>
#include<vector>


int perev(int ch) {

}
int main()
{
	std::vector <int> a;
	std::vector <int> b;
	int ch=0;
	 
	
	while (std::cin>>ch) {
		


		if (ch <= 9) {
			a.push_back(ch);
		}
		else {
			int c = perev(ch);
			a.push_back(c);







		}

	}




	for (int i = size(a); i > 0; i++) {
		b.push_back(a[i]);

	}
	for (int i = 0; i < size(b); i++) {
		std::cout <<b[i] << " ";
	}

}
