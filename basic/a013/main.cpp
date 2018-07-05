#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1;
    int str1_num[20] = {0};
    string str2;
    int str2_num[20] = {0};
    // char I, V, X, L, C, D, M;

    while (cin >> str1){
        if(str1 == "#")
            break;

        cin >> str2;

        int str1_num[20] = {0};

        int str2_num[20] = {0};

        for (int i = 0; i < str1.length() ; i++){
            if (str1[i] == 'I')
                str1_num[i] = 1;
            else if (str1[i] == 'V')
                str1_num[i] = 5;
            else if (str1[i] == 'X')
                str1_num[i] = 10;
            else if (str1[i] == 'L')
                str1_num[i] = 50;
            else if (str1[i] == 'C')
                str1_num[i] = 100;
            else if (str1[i] == 'D')
                str1_num[i] = 500;
            else if (str1[i] == 'M')
                str1_num[i] = 1000;
        }

        int str1_sum = 0;
        for (int i = 0; i < str1.length() ; i++){
            if (str1_num[i] < str1_num[i+1]){
                str1_sum += (str1_num[i+1] - str1_num[i]);
                i++;
            }
            else
                str1_sum += str1_num[i];
        }

        for (int i = 0; i < str2.length() ; i++){
            if (str2[i] == 'I')
                str2_num[i] = 1;
            else if (str2[i] == 'V')
                str2_num[i] = 5;
            else if (str2[i] == 'X')
                str2_num[i] = 10;
            else if (str2[i] == 'L')
                str2_num[i] = 50;
            else if (str2[i] == 'C')
                str2_num[i] = 100;
            else if (str2[i] == 'D')
                str2_num[i] = 500;
            else if (str2[i] == 'M')
                str2_num[i] = 1000;
        }

        int str2_sum = 0;
        for (int i = 0; i < str2.length() ; i++){
            if (str2_num[i] < str2_num[i+1]){
                str2_sum += (str2_num[i+1] - str2_num[i]);
                i++;
            }
            else
                str2_sum += str2_num[i];
        }

        int number_arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9 , 5 ,4, 1};
        string char_arr[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans = "";

        int num_ans = abs(str1_sum - str2_sum);

        // start to transform the numerical to roman
        int index = 0;

        if (num_ans == 0)
            cout << "ZERO" << endl;
        else{
            while (num_ans > 0){
                    while (num_ans >= number_arr[index]){
                        num_ans -= number_arr[index];
                        ans += char_arr[index];
                }
                index++;
            }
            cout << ans << endl;
        }

    }
    return 0;
}