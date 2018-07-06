#include <iostream>
using namespace std;
int main() {
    string a;
    // int b[9] = {0};
    while (cin >> a){
        int b[9] = {0};
        for (int i = 0; i < a.length() ; i++){
            switch (a[i+1]){
                case '1':
                    b[i] = 1;
                    break;
                case '2':
                    b[i] = 2;
                    break;
                case '3':
                    b[i] = 3;
                    break;
                case '4':
                    b[i] = 4;
                    break;
                case '5':
                    b[i] = 5;
                    break;
                case '6':
                    b[i] = 6;
                    break;
                case '7':
                    b[i] = 7;
                    break;
                case '8':
                    b[i] = 8;
                    break;
                case '9':
                    b[i] = 9;
                    break;
                default:
                    break;

            }

        }
        int ans = 0;
        switch (a[0]){
            case 'A':
                ans = 1 + 0 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'B':
                ans = 1 + 1 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'C':
                ans = 1 + 2 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'D':
                ans = 1 + 3 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'E':
                ans = 1 + 4 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'F':
                ans = 1 + 5 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'G':
                ans = 1 + 6 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'H':
                ans = 1 + 7 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'I':
                ans = 3 + 4 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'J':
                ans = 1 + 8 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'K':
                ans = 1 + 9 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'L':
                ans = 2 + 0 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'M':
                ans = 2 + 1 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'N':
                ans = 2 + 2 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'O':
                ans = 3 + 5 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'P':
                ans = 2 + 3 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'Q':
                ans = 2 + 4 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'R':
                ans = 2 + 5 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'S':
                ans = 2 + 6 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'T':
                ans = 2 + 7 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'U':
                ans = 2 + 8 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'V':
                ans = 2 + 9 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'W':
                ans = 3 + 2 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'X':
                ans = 3 + 0 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'Y':
                ans = 3 + 1 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            case 'Z':
                ans = 3 + 3 * 9 + b[0]*8 + b[1]*7+ b[2]*6+ b[3]*5+ b[4]*4+ b[5]*3+ b[6]*2+ b[7]*1+ b[8];
                break;
            default:
                break;
        }

        if (ans % 10 == 0)
            cout << "real" << endl;
        else
            cout << "fake" << endl;
        a = "";
    }
    return 0;
}