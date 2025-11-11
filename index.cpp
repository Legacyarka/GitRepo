#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the num: ";
    cin >> n;
    // for(int i = 0; i<n; i++){
    //     for (int j = 0; j<i; j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j<(n-i); j++){
    //         cout << (i+1);
    //     }
    //     cout << endl;
    // }

    // pyramid pattern

    for(int i = 0; i<n; i++){
        int num = 1;
        int z = 1;
        for(int j = 0; j<(n-i-1); j++){
            cout << " ";
        }
        for(int j = 0; j<(i+1); j++){
            cout << num;
            num++;
        }
        for(int j = i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}