#include <iostream>

using namespace std;

long long fact_d[64];
long long fact (int n) {
	if (n == 1) return n;
	if (fact_d[n] != 0) return fact_d[n];
	else {
		fact_d[n] = n* fact (n-1);
		return fact_d[n];
	}
}


int main ()
{
	int m, n;
	while (cin >> m >> n) {
		long long product = 1;
		for (int i = m+n; i > m; i--) product *= i;
		cout << product / fact (n) << endl;
	}
}
