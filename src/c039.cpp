#include <iostream>

using namespace std;

int main ()
{
	int con, imp;
	while (cin >> con >> imp) {
		switch (con / 10) {
			case 10:
				cout << 5 << " ";
				break;
			case 9:
				cout << 5 << " ";
				break;
			case 8:
				cout << 4 << " ";
				break;
			case 7:
				cout << 4 << " ";
				break;
			case 6:
				cout << 3 << " ";
				break;
			case 5:
				cout << 3 << " ";
				break;
			case 4:
				cout << 2 << " ";
				break;
			case 3:
				cout << 2 << " ";
				break;
			default:
				cout << 1 << " ";
				break;
		}
		if (imp / 50 == 7 || imp / 50 == 8)
			cout << 5 << endl;
		else if (imp / 50 == 6 || imp / 50 == 5)
			cout << 4 << endl;
		else if (imp / 50 == 4 || imp / 50 == 3)
			cout << 3 << endl;
		else if (imp / 50 == 2 || imp / 50 == 1)
			cout << 2 << endl;
		else
			cout << 1 << endl;

	}
	


}
