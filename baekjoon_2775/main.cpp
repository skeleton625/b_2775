#include <iostream>
using namespace std;

unsigned long long cache[15][15] = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 } };
int l, n, t;

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> l >> n;
		if (cache[l][n-1] == 0)
			for (int j = 1; j <= l; j++) {
				cache[j][1] = 1;
				for (int k = 2; k <= n; k++) cache[j][k] = cache[j][k - 1] + cache[j - 1][k];
			}
		cout << cache[l][n] << endl;
	}
	return 0;
}

/*
#include<cstdio>
int t, a, b,i,j,d[15];
int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d %d", &a, &b);
		for (i = 1; i <= b; i++)d[i] = i;
		for (i = 0; i < a; i++){
			for (j = 1; j <= b; j++){
				d[j] += d[j - 1];
			}
		}
		printf("%d\n", d[b]);
	}
}
*/