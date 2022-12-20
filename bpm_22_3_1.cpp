#include<iostream>
#include<iomanip>
#include<algorithm>

double fact(int n) {
    if (n < 0) {
        return 0;
    } if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
int main() {
	double a=0.1;
    double b = 1;
    double step = 0.05;
    double sx = 0;
    double s = 0;


	
    double eps = 0.0001;
    std::cout << "x" << "       " << "s"<<std::endl;
        for(double x = a; x <= b;x+=step) {
            sx = 1;
            s = 0;


            for (int i = 0; i < 10000; i++) {
                if (std::abs(sx) >= eps) {
                    sx = (std::pow(2 * x, i)) / (fact(i));
                    s += sx;


                }
                else {
                    break;
                }
                

            }std::cout << std::fixed << std::setprecision(4);
            std::cout << x << "   " << s << std::endl;




	}
    
  
	

}
