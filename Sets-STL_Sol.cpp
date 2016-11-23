#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q, y, x;
    set<int> st;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> y >> x;
        switch (y) {
            case 1:
                st.insert(x);
                break;
            case 2:
                st.erase(x);
                break;
            case 3:
                set<int>::iterator itr = st.find(x);
                cout << (itr != st.end() ? "Yes" : "No") << endl;
                break;
        }
    }  
    return 0;
}
