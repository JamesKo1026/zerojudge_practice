#include <iostream>
using namespace std;
int main() {
    int a;
    int count1 = 0; // count for #power
    int count2 = 1; // count for #number
    int flag = 0;
    while (cin >> a){
        for(int i = 2; i <= a; i++ ){
            if (a % i == 0) {
                while ((a % i == 0) && (a != 1)) {
                    count1++;
                    a /= i;
                }

                // prime number
                if (count1 == 1 && count2 == 1){
                    cout << i;
                    count2++;
                }
                else if (count1 == 1 && count2 > 1){
                    cout << " * " << i;
                    count2++;

                }

                // non-prime number
                else if (count1 > 1 && count2 == 1){
                    cout << i << "^" << count1;
                    count2++;
                }

                else if (count1 > 1 && count2 > 1){
                    cout << " * " << i << "^" << count1;
                    count2++;
                }

                count1 = 0;
            }
        }
        count2 = 1;
        cout << "\n";
    }
    return 0;
}