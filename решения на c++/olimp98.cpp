#include <iostream>

int main()
{
    int a[32000], n, min, max, s1 = 0, s2 = 0;
    bool flag = false;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    min = 0;
    max = n - 1;
    while (true) {
        if (a[min] != 0 && a[max] != 0) {
            if (a[min] < a[max]) {
                if (flag == false) {
                    s1 = s1 + a[max];
                }
                else {
                    s2 = s2 + a[max];
                }
                a[max] = 0;
                max--;
            }
            else {
                if (flag == false) {
                    s1 = s1 + a[min];
                }
                else {
                    s2 = s2 + a[min];
                }
                a[min] = 0;
                min++;
            }
            flag = !flag;
        }
        else {
            break;
        }
    }
    std::cout << s1 << ":" << s2;
}