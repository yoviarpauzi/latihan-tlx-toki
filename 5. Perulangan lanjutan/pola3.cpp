#include <iostream>
using namespace std;
int main(){
    int n, a = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(a <= 9){
                cout << a;
            }else{
                a = 0;
                cout << a;
            }
            a++;
        }
        cout << endl;
    }
    return 0;
}