#include <iostream>

int main()
{
    int n, i = 1;
    std::cin >> n;
    while (n >= i) {
        n -= i;
        i++;
    }
    i--;
    std::cout << i;
}