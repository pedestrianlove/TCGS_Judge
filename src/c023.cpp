#include <iostream>

using namespace std;

int dist (int x, int y) {
	return x * x + y * y;
}


int main ()
{
	int counter = 0;
	int a, b, distance;
	cin >> a;
	cin >> a >> b;
	int max_dist = dist (a, b);
	int max_idx = ++counter;
	while (cin >> a >> b) {
		counter ++;
		distance = dist (a, b);
		if (max_dist < distance) {
			max_idx = counter;
			max_dist = distance;
		}
	}


	// output
	cout << max_idx << ' ' << max_dist << endl;


}
