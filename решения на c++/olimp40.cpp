#include <iostream>
#include <string>

int main()
{
    int n;

    std::cin >> n;

    unsigned int longC[34], o;
    longC[0] = 1;

    for (int i = 1; i < 34; i++)
    {
        longC[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int ii = 33; ii >= 0; ii--)
        {
            longC[ii] = longC[ii] * 2;
            for (int iii = 0; iii < 34; iii++)
            {
                if (longC[iii] >= 1000000000 and iii < 33)
                {
                    longC[iii + 1] = longC[iii + 1] + (longC[iii] / 1000000000);
                    longC[iii] = longC[iii] % 1000000000;
                }
            }
        }
    }
    for (int i = 33; i >= 0; i--)
    {
        if (longC[i] != 0)
        {
            std::string s = std::to_string(longC[i]);
            if (i < 32 && longC[i + 1] != 0)
            {
                int count = 0;
                while (s[count] != '\0')
                {
                    count++;
                }
                count = 9 - count;
                while (count != 0)
                {
                    count--;
                    std::cout << "0";
                }
            }
            std::cout << s;
        }
    }
}