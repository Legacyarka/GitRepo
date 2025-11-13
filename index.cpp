#include <iostream>
using namespace std;



int sumofdig(int num){
    int digitsum = 0;
    while (num != 0){
        int rem = num%10;
        num /= 10;
        digitsum += rem;
    }
    return digitsum;
}

int main(){

    
    cout << sumofdig(145) << endl;
    return 0;
}