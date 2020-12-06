#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int num, prec;
	while (cin >> num) {
		prec = log (num) +1;
		printf ("|____");
		if (prec >= 4)
			printf ("%4d", num);
		else {
			for (int i = 0; i < 4 - prec; i++)
				printf ("_");
			printf ("%d", num);
		}
		printf ("|\n");
	}


}
