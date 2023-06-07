#include <iostream>
#include <string>

int main()
{
    int n;

    std::cin >> n;

    unsigned long long longC[286], o;
    longC[0] = 1;

    for (int i = 1; i < 286; i++)
    {
        longC[i] = 0;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int ii = 285; ii >= 0; ii--)
        {
            longC[ii] = longC[ii] * i;
            for (int iii = 0; iii < 286; iii++)
            {
                if (longC[iii] >= 1000000000 and iii < 285)
                {
                    longC[iii + 1] = longC[iii + 1] + (longC[iii] / 1000000000);
                    longC[iii] = longC[iii] % 1000000000;
                }
            }
        }
    }
    bool forN = false;
    for (int i = 285; i >= 0; i--)
    {
        if (longC[i] != 0)
        {
            std::string s = std::to_string(longC[i]);
            if (i < 284 && longC[i + 1] != 0)
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
            forN = true;
        }
        else if (forN == true)
        {
            std::cout << "000000000";
        }
    }
}