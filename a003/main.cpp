#include <iostream>
using namespace std;
int main() {
    int a, b;
    int result;
    while(cin >> a){
        cin >> b;
        result = (a*2+b) % 3;
        if(result == 0)
            cout << "普通" << endl;
        else if(result == 1)
            cout << "吉" << endl;
        else
            cout << "大吉" << endl;
    }
    return 0;
}