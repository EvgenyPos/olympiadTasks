#include <iostream>
#include <sstream>
#include <string>

unsigned int as[2][12];
bool forAs[12];

void strToWereLongInt(std::string s, int q)
{
    int ii = 0;
    for (int i = 0; i < 12; i++)
    {
        as[q][i] = 0;
        forAs[i] = false;
    }
    while (s[ii] != '\0')
    {
        ii++;
    }
    int i = ii - 1, step = 0, n = 0;
    int del = 1;
    while (i >= 0)
    {
        std::stringstream strm;
        strm << s[i];
        int num = std::stoi(strm.str());
        as[q][n] += num * del;
        forAs[n] = true;
        del = del * 10;
        i--;
        step++;
        if (step > 8)
        {
            step = 0;
            n++;
            del = 1;
        }
    }
}

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    strToWereLongInt(s1, 0);
    strToWereLongInt(s2, 1);
    for (int i = 0; i < 12; i++)
    {
        as[0][i] = as[0][i] + as[1][i];
        if ((as[0][i] > 999999999) && (i > 0))
        {
            as[0][i - 1] = as[0][i - 1] + (as[0][i] / 1000000000);
            as[0][i] = as[0][i] % 1000000000;
        }
    }

    for (int i = 33; i >= 0; i--)
    {
        if (as[0][i] != 0)
        {
            std::string s = std::to_string(as[0][i]);
            if (i < 32 && as[0][i - 1] != 0)
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