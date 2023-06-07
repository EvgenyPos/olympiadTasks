#include <iostream>
#include <string>
#include <sstream>
int sizeNum, sizeArr;
unsigned int* c;
int len(std::string s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return i;
}
int charToInt(char a) {
	std::stringstream strm;
	strm << a;
	return std::stoi(strm.str());
}
void creatArray(std::string s)
{
	int l = len(s);
	sizeNum = l;
	sizeArr = ceil((double)sizeNum / (double)9);
	c = new unsigned int[sizeArr];
}
void zeroArray()
{
	for (int i = 0; i < sizeArr; i++)
	{
		c[i] = 0;
	}
}
void formingArrNum(std::string s)
{
	for (int ii = 0; (ii * 9) < sizeNum; ii++)
	{
		int del = 1;
		for (int i = 0; i < 9 && (i + (ii * 9)) < sizeNum; i++, del = del * 10)
		{
			c[ii] += charToInt(s[sizeNum - i - (ii * 9) - 1]) * del;
		}
	}
}
void printArr()
{
	std::cout << c[sizeArr - 1];
	for (int i = sizeArr - 2; i >= 0; i--)
	{
		std::string s = std::to_string(c[i]);
		int l = len(s);
		if (l != 9)
		{
			for (l; l < 9; l++)
			{
				std::cout << "0";
			}
		}
		std::cout << c[i] << '\n';
	}
}
void delS(int b)
{
	int ost = 0;
	unsigned int q = 0;
	for (int i = sizeArr - 1; i >= 0; i--)
	{
		q = (c[i] + (ost * 1000000000)) / b;
		ost = c[i] % b;
		c[i] = q;
	}
}
void printEndNum()
{
	std::cout << (c[0] % 10);
}

int main()
{
    int a, b, k;
    std::cin >> a >> b >> k;
	std::string s = std::to_string(a);
	for (int i = 0; i < k; i++) {
		s += "0";
	}
	creatArray(s);
	zeroArray();
	formingArrNum(s);
	delS(b);
	printArr();
	printEndNum();
}