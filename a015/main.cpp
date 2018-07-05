#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    while (cin >> rows){

        cin >> cols;

        int arr[rows][cols];
        for (int i = 0; i < rows ; i++){
            for (int j = 0; j < cols ; j++){
                arr[i][j] = 0;
            }
        }

        int temp = 0;
        for (int i = 0; i < rows ; i++){
            for (int j = 0; j < cols ; j++){
                cin >> temp;
                arr[i][j] = temp;
            }
        }
        //cout << arr[1][2] << " ";
        for (int i = 0; i < cols ; i++){
            for (int j = 0; j < rows ; j++){
                if (j == rows -1)
                    cout << arr[j][i] << endl;
                else
                    cout << arr[j][i] << " ";
            }
        }

    }

    return 0;
}