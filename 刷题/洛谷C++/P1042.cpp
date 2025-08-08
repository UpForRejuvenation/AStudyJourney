#include<iostream>
#include<string>
#include<cmath>

using namespace std;

char str[65535];
int count = 0;

void show(int sc) {
	int pre = 0;
	int tail = 0;
	for (int i = 0; i < ::count; i++) {
		if (str[i] == 'W')
			pre++;
		else
			tail++;

		if ((pre >= sc || tail >= sc) && (abs(pre - tail) >= 2)) {
			cout<<pre<<":"<<tail<<endl;
			pre = 0;
			tail = 0;
		}
	}
	
	cout << pre << ":" << tail << endl;
}

int main() {

	char s;
	int i = 0;
	while (cin >> s, s == 'W' || s == 'L') {
		str[i++] = s;
		::count++;//::Scope qualifier :: to access the global variable
	}

	show(11);
	cout << endl;
	show(21);

	return 0;
}
