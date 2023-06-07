#include <iostream>

int len(std::string s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	int a[3] = { 1, 0, 0 };
    std::string s;
    std::cin >> s;
	int l = len(s);
	for (int i = 0; i < l; i++)
	{
		char c = s[i];
		if (c == 'A') {
			int left = a[1], centr = a[0];
			a[0] = left;
			a[1] = centr;
		}
		else if (c == 'B')
		{
			int right = a[1], centr = a[2];
			a[2] = right;
			a[1] = centr;
		}
		else if (c == 'C')
		{
			int right = a[0], left = a[2];
			a[2] = right;
			a[0] = left;
		}
	}
	for (int i = 0 ; i<3; i++){
		if (a[i] == 1)
		{
			std::cout << (i + 1);
		}
	}
	return 0;
}