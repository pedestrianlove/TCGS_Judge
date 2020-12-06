#include <iostream>

using namespace std;


int main ()
{
	int grade;
	while (cin >> grade) {
		if (grade >= 60)
			cout << "PASS" << endl;
		else
			cout << "FAIL" << endl;

	}

}
