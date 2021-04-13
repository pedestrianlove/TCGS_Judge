#include <iostream>

using namespace std;

long long fib_d[100] = {0};

long long fib (int n) {
	if (n == 0 || n == 1) return n;
	if (fib_d[n] != 0) return fib_d[n];
	else {
		fib_d[n] = fib (n-1) + fib (n-2);
		return fib_d[n];
	}
}


int main ()
{
	int n;

	long long result; 
	while (cin >> n) {
		result = fib (n+1);
		cout << result << " " << fib (result % n + 1) << endl;
	}


}
