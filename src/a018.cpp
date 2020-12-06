#include <iostream>

using namespace std;

int main ()
{
	int time;
	int target_start, target_end;
	int hour, min;
	while (cin >> hour >> min) {
		time = hour * 60 + min;
		target_start = 14 * 60 + 20;
		target_end = 16 * 60 + 40;
		if (time >= target_start && time <= target_end)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}


}
