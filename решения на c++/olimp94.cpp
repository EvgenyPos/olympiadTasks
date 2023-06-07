#include <iostream>

int main()
{
    int n, m, k, i;
    std::cin >> n;
    std::cin >> m;
    std::cin >> k;
    if (n > k || m == n)
    {
        i = 0;
        while (true)
        {
            m -= n;
            i++;
            if (m < 1)
            {
                break;
            }
            else
            {
                m += k;
            }
        }
        std::cout << i;
    }
    else
    {
        std::cout << "NO";
    }
}