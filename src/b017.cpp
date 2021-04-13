#include <iostream>

using namespace std;

int max (int a, int b) {
	if (a > b) return a;
	else return b;
}

int main ()
{
	string A, B; int* sum;
	while (cin >> A >> B) {
		int a_len = A.length ();
		int b_len = B.length ();
		int len = max (a_len, b_len);
		
		int i, carry = 0;
		sum = new int[len+1];
		for (i = 0;i < len+1; i++) {
			if (i < a_len && i < b_len)
				sum[i] = (A[a_len-i-1]-'0') + (B[b_len - i-1] - '0') + carry;
			else if (i < a_len)
				sum[i] = (A[a_len-i-1]-'0') + carry;
			else if (i < b_len)
				sum[i] = (B[b_len - i-1] - '0') + carry;
			else
				sum[i] = carry;
			carry = sum[i] / 10;
			sum[i] = sum[i] % 10;
		}


		// output
		if (sum[i] == 0) i--;
		if (sum[i] == 0) i--;
		for (; i>= 0; i--) {
			cout << sum[i];
		}
		cout << endl;


		delete[] (sum);
	}


}
