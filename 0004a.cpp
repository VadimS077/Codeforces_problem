#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (0 == n % 2 && n > 2) {
        cout << "YES";

    }
    else {
        cout << "NO";
    }
}