#include <iostream>
using namespace std;
int main(){
    int n, b, hasil = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b;
        hasil += b;
    }
    cout << hasil;
    return 0;
}