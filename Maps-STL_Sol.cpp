#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q, type, Y;
    string X; 
    map<string, int> marks;
    cin >> Q;
	for(int i = 0; i < Q; i++) {
		cin >> type >> X;
        switch (type) {
            case 1:
                cin >> Y;
                marks[X] += Y;
                break;
            case 2:
                marks.erase(X);
                break;
            case 3:
                cout << marks[X] << endl;
                break;
        }
	}
    return 0;
}
