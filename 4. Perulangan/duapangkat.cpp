#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n != 1){
        if(n % 2 != 1){
            n /= 2;
        }else{
            break;
        }
    }
    if(n == 1){
        cout << "ya";
    }else{
        cout << "bukan";
    }
    return 0;
}