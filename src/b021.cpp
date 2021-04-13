#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
	public:
	int id;
	int total, math;
	Student () {
		int chi, eng, Math, phy, chem;
		cin >> id >> chi >> eng >> Math >> phy >> chem;
		math = Math;
		total = chi + eng + Math + phy + chem;
	}
};

bool cmp (Student A, Student B) {
	if (A.total != B.total) 
		return A.total > B.total;
	else
		return A.math > B.math;
		
}

int main ()
{
	int n;
	vector<Student> stu_list;
	while (cin >> n) {
		// input
		for (int i = 0; i < n; i++) {
			Student tmp = Student ();
			stu_list.push_back (tmp);
		}

		// process
		sort (stu_list.begin (), stu_list.end (), cmp);

		// output
		for (vector<Student>::iterator i = stu_list.begin (); i != stu_list.end (); ++i) {
			cout << i -> id << endl;
		}
	}	



}
