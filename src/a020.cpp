#include <iostream>

using namespace std;

int max (int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main ()
{
	int num1, num2;
	int prize_1, prize_2, prize_3;
	while (cin >> num1 >> num2) {
		prize_1 = 0, prize_2 = 0, prize_3 = 0;
		if (num1 % 2 == 1) prize_1 = 100;
		if (num2 == 2 || num2 == 5 ||  num2 == 8) prize_2 = 200;
		if (num1 == num2) prize_3 = 50;
		cout << prize_1 + prize_2 + prize_3 << endl;
	}

}
