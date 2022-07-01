#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    bool p;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        p = true;
        if(b < 2){
            p = false;
        }else if(b % 2 == 0 && b != 2){
            p = false;
        }else if(b % 2 == 1){
            for(int j = 2; j * j <= b; j++){
                if(b % j == 0){
                    p = false;
                }
            }
        }
        if(p == true){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
    return 0;
}