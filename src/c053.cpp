#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	// variable
	int* data;
	int data_size;

	// input
	cin >> data_size;
	data = new int[data_size];
	for (int j = 0; j < data_size; j++)
		cin >> data[j];

	// sort
	sort (data, data + data_size);

	// output
	cout << data[data_size / 2] << endl;


	delete (data);



}
