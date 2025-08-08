#include<iostream>
#include<string>
#include<math.h>

#define size 100

using namespace std;

int main() {
	int n = 0, m = 0;
	cin >> n >> m;

	char str[size][size];
	char num[size][size];

	//input data
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> str[i][j];
		}
	}
	
	//process data
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (str[i][j] != '*') {
				//up left corner
				if (i == 0 && j == 0) {
					if (str[i][j+1] == '?')
						sum++;
					if (str[i+1][j+1] == '?')
						sum++;
					if (str[i+1][j] == '?')
						sum++;

					num[0][0] = sum;
					sum = 0;
				}
				//down left corner
				else if (i == n - 1 && j == 0) {
					if (str[i-1][j] == '?')
						sum++;
					if (str[i-1][j+1] == '?')
						sum++;
					if (str[i][j+1] == '?')
						sum++;

					num[i][j] = sum;
					sum = 0;
				}
				//up left corner
				else if (i == 0 && j == m - 1) {
					if (str[i+1][j] == '?')
						sum++;
					if (str[i+1][j-1] == '?')
						sum++;
					if (str[i][j-1] == '?')
						sum++;

					num[i][j] = sum;
					sum = 0;
				}

				//down right corner
				else if (i == n - 1 && j == m - 1) {
					if (str[i-1][j] == '?')
						sum++;
					if (str[i][j-1] == '?')
						sum++;
					if (str[i-1][j-1] == '?')
						sum++;

					num[i][j] = sum;
					sum = 0;
				}
				else {
					if (str[i - 1][j - 1] == '?')
						sum++;
					if (str[i - 1][j] == '?')
						sum++;
					if (str[i - 1][j+1] == '?')
						sum++;
					if (str[i][j-1] == '?')
						sum++;
					if (str[i][j+1] == '?')
						sum++;
					if (str[i + 1][j - 1] == '?')
						sum++;
					if (str[i + 1][j] == '?')
						sum++;
					if (str[i + 1][j + 1] == '?')
						sum++;

					num[i][j] = sum;
				}
			}
			else
				num[i][j] = '*';

		}
	}

	//print result
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << num[i][j];
		}
		cout << endl;
	}

	return 0;
}
