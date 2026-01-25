#include <iostream>
using namespace std;

int main() {
    int num = 1;

    for (int i = 1; i <= 4; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // numbers per row
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
