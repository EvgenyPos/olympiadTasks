#include <iostream>
#include <string>

int main()
{
    int a, b, c, d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::string s;
    for (int x = -100; x < 101; x++)
    {
        if (a * x * x * x + b * x * x + c * x + d == 0)
        {
            std::string o = std::to_string(x);
            s += o + " ";
        }
    }
    std::cout << s;
}