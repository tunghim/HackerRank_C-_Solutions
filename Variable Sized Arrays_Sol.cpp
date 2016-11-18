#include <iostream>
using namespace std;

int main() {
    int n, q, i, j;
    scanf("%d %d", &n, &q);
    int** seq = new int* [n];
    for(int a = 0; a < n; a++) {
        int k;
        scanf("%d", &k);
        seq[a] = new int [k];
        for(int b = 0; b < k; b++) {
            scanf("%d", &seq[a][b]);
        }
    }
    for(int a = 0; a < q; a++) {
        scanf("%d %d", &i, &j);
        printf("%d\n", seq[i][j]);
    }
	return 0;
}
