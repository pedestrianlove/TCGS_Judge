#include <iostream>

using namespace std;

int* compute (price)


int main ()
{
	int price;
	int c_500, c_200;
	while (cin >> price) {
		c_500 = 0, c_200 = 0;
		while (price >= 200 && c_200 < 5) {
			c_200 ++;
			price -= 200;
		}
		while (price >= 500 && c_500 < 4){
			c_500 ++;
			price -= 500;
		}
		cout << c_500 << " " << c_200 << " " << price << endl;
	}


}
