#include <iostream>
bool gg(int n)
{

    int a = n / 1000;
    int d = n % 10;
    int c = (n % 100) / 10;
    int b = (n / 100) % 10;
    if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))
    {
        return true;
    }
    else {
        return false;
    }

}
int main()
{
    int n = 0;
    std::cin >> n;
    for (int i = n + 1; i < 10000; i++)
    {
        if (gg(i))
        {
            std::cout << i;
            break;
        }
    }

}