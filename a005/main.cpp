#include <iostream>
using namespace std;
int main() {
    int items;
    int a, b, c, d;
    cin >> items;
    for(int i=0; i<items; i++){
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        if((b-a)==(c-b))
            cout << a << " " << b << " " << c << " " << d << " " << d+(d-c) << endl;
        else
            cout << a << " " << b << " " << c << " " << d << " " << d*(d/c) << endl;
    }


    return 0;
}