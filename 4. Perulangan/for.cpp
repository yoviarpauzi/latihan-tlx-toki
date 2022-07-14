#include <iostream>
using namespace std;
int main(){
    int n, a = 0;
    cin >> n;
    int b[n];
    for(int i = 0; i < n ; i++){
        cin >> b[i];
        a += b[i];
    }
    cout << a;
    return 0;
}