#include <iostream>

using namespace std;

int counter;

int fib (int n) {
	counter++;
	if (n <= 1) return n;
	else
		return fib (n-1) + fib (n-2);
}

int main ()
{
	int n;
	cin >> n;

	cout << fib (n) << " ";
	if (counter == 0)
		cout << endl << counter << endl;
	else
		cout << counter << endl;

}
