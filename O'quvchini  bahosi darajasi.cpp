#include <iostream>
using namespace std;
int main(){
    int baho;
    cout << "O'quvchining bahosini kiriting: ";
    cin >> baho;

    if (baho == 5) {
        cout << "Zo'r";
    }else {
        if (baho == 4) {
            cout << "Yaxshi";
        }else {
            if (baho < 4 && baho >= 1) {
                cout << "Qoniqarli";
            }else {
                cout << "Bunday baho yo'q";
            }
        }
    }
}
