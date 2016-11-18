#include <iostream>
#include <string>
using namespace std;

int main() {
    /* In the first line print two space-separated integers, representing the length of  and  respectively. 
In the second line print the string produced by concatenating  and  (). 
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.*/
    string a, b;
    cin >> a >> b;
    cout << a.size() << ' ' << b.size() << endl;
    cout << a + b << endl;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << ' ' << b;
    return 0;
}
