#include <iostream>
#include <set>
using namespace std;
void push_num_2set (int i, int j, int number);

set<int> set_row[9], set_col[9], set_block[3][3];

void push_num_2set (int i, int j, int number){
    set_row[i].insert(number);
    set_col[j].insert(number);
    set_block[i/3][j/3].insert(number);

}
int main() {

    int temp;

    int arr[9][9];

    // initialize to 0
    for (int i = 0; i < 9 ; i++){
        for (int j = 0; j < 9 ; j++){
            arr[i][j] = 0;
            set_row[i].clear();
            set_col[i].clear();
            set_block[i/3][j/3].clear();
        }
    }

    while (cin >> arr[0][0] >> arr[0][1] >> arr[0][2]
               >> arr[0][3] >> arr[0][4] >> arr[0][5]
               >> arr[0][6] >> arr[0][7] >> arr[0][8]){


        // input the rest part
        for (int i = 1; i < 9 ; i++){
            for (int j = 0; j < 9 ; j++){
                cin >> temp;
                arr[i][j] = temp;
            }
        }

        // push into the set
        for (int i = 0; i < 9 ; i++){
            for (int j = 0; j < 9 ; j++){
                push_num_2set(i, j, arr[i][j]);
            }
        }

        // check the set_row and the set_col
        // if the count()==0, means that there is/are one of the number(1-9) that doesn't exist
        int error_flag = 0;
        for (int i = 0; i < 9 ; i++){
            for (int j = 1; j <= 9; j++) {
                if (set_row[i].count(j) == 0) {
                    error_flag++;
                }
                if (set_col[i].count(j) == 0) {
                    error_flag++;
                }
            }
        }

        for (int i = 0; i < 3 ; i++){
            for (int j = 0; j < 3; j++) {
                for ( int k = 1; k <= 9; k++)
                if (set_block[i][j].count(k) == 0) {
                    error_flag++;
                }
            }
        }
        if (error_flag != 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;

        // initialize to 0
        for (int i = 0; i < 9 ; i++){
            for (int j = 0; j < 9 ; j++){
                arr[i][j] = 0;
                set_row[i].clear();
                set_col[i].clear();
                set_block[i/3][j/3].clear();
            }
        }


    }

    return 0;
}