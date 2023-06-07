#include <iostream>
int main()
{
    int arr[100][100] = { 0 }, n = 1, c, a = 1;
    unsigned short int x, y;
    bool flag = true;
    for (int py = 0; py < 100; py++) {
        for (int px = 0; px < 100; px++) {
            arr[py][px] = 1;
        }
    }
    std::cin >> c;
    for (int y = 0; y < c; y++) {
        for (int x = 0; x < c; x++) {
            arr[y][x] = 0;
        }
    }
    x = 0;
    y = 0;
    arr[0][0] = 1;
    while (a < (c * c)) {
        if (n == 1) {
            flag = true;
            while (flag == true) {
                a++;
                x++;
                arr[y][x] = a;
                if (x == 99) {
                    flag = false;
                }
                else if (arr[y][x + 1] != 0) {
                    flag = false;
                }
            }
            n++;
        }
        else if (n == 2) {
            flag = true;
            while (flag == true) {
                a++;
                y++;
                arr[y][x] = a;
                if (y == 99) {
                    flag = false;
                }
                else if (arr[y + 1][x] != 0) {
                    flag = false;
                }
            }
            n++;
        }
        else if (n == 3) {
            flag = true;
            while (flag == true) {
                a++;
                x--;
                arr[y][x] = a;
                if (x == 0) {
                    flag = false;
                }
                else if (arr[y][x - 1] != 0) {
                    flag = false;
                }
            }
            n++;
        }
        else if (n == 4) {
            flag = true;
            while (flag == true) {
                a++;
                y--;
                arr[y][x] = a;
                if (y == 0) {
                    flag = false;
                }
                else if (arr[y - 1][x] != 0) {
                    flag = false;
                }
            }
            n++;
        }
        else {
            n = 1;
        }
    }
    for (int py = 0; py < c; py++) {
        for (int px = 0; px < c; px++) {
            std::cout << arr[py][px] << " ";
        }
        std::cout << "\n";
    }
}