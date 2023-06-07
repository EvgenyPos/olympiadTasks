#include <iostream>

int n[10];

void sum(int c[3]) {
	for (int i = 0; i < 3; i++) {
		int forC;
		for (int a = 0; a < 2; a++) {
			if (a == 0) {
				forC = c[i] / 10;
			}
			else {
				forC = c[i] % 10;
			}
			if (forC == 0) {
				n[0]++;
			}
			else if (forC == 1) {
				n[1]++;
			}
			else if (forC == 2) {
				n[2]++;
			}
			else if (forC == 3) {
				n[3]++;
			}
			else if (forC == 4) {
				n[4]++;
			}
			else if (forC == 5) {
				n[5]++;
			}
			else if (forC == 6) {
				n[6]++;
			}
			else if (forC == 7) {
				n[7]++;
			}
			else if (forC == 8) {
				n[8]++;
			}
			else {
				n[9]++;
			}
			if (a > 1) {
				a = 0;
				break;
			}
		}
		
	}
}

int main()
{
	std::string s1, s2;

	std::cin >> s1;
	std::cin >> s2;

	int c1[3] = {((s1[0] - '0') * 10) + (s1[1] - '0'), ((s1[3] - '0') * 10) + (s1[4] - '0'), ((s1[6] - '0') * 10) + (s1[7] - '0')};
	int c2[3] = {((s2[0] - '0') * 10) + (s2[1] - '0'), ((s2[3] - '0') * 10) + (s2[4] - '0'), ((s2[6] - '0') * 10) + (s2[7] - '0')};
	int c[3];
		
	c[0] = c1[0]; c[1] = c1[1]; c[2] = c1[2];

	sum(c);

	while (true) {
		if (c[0] == c2[0] && c[1] == c2[1] && c[2] == c2[2]) {
			break;
		}
		c[2]++;
		if (c[2] > 59) {
			c[2] = 0;
			c[1]++;
			if (c[1] > 59) {
				c[1] = 0;
				c[0]++;
			}
		}
		sum(c);
	}
	for (int i = 0; i < 10; i++) {
		std::cout << n[i] << "\n";
	}

}