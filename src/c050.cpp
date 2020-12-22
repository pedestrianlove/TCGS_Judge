#include <iostream>


using namespace std;

void print_pt (int x, int y) {
	cout << "(" << x;
	cout << "," << y << ")" << endl;
}

int main ()
{
	int num;
	while (cin >> num) {
		num --;
		if (num < 20)
			print_pt (num * 5, 0);
		else if (num < 40)
			print_pt (100, num%20 * 5);
		else if (num < 60)
			print_pt (100 - (num%20) * 5, 100);
		else if (num < 80)
			print_pt (0, 100 - (num%20) * 5);

	}


}
