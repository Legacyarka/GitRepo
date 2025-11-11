#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the num: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        for (int j = i; j>0; j--){
            cout << " ";
        }
        for(int j = n; j>i; j--){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}