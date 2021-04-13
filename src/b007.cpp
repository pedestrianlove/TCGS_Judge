#include <iostream>

using namespace std;

void rev  (){
	char tmp;
	if (cin >> tmp) {
		rev ();
		cout << tmp;
	}
}

int main ()
{
	rev ();
	cout << endl;



}
