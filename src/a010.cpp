#include <iostream>

using namespace std;

int main ()
{
	int green, blue, purple, GREEN;
	
	while (cin >> green) {
		blue = green * 2 - 5;
		GREEN = green + 3;
		purple = (blue - blue % 10) + (GREEN%10);
		cout << purple << endl;
	}



}
