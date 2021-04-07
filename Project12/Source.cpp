#include <iostream>

using namespace std;


class Student {
	string name;
	string surname;
	int age;

public:
	void show() {
		cout << name << endl;
		cout << surname << endl;
		cout << age << endl;
	}
};