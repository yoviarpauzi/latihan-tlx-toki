#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    for(int i = 1; i <= x; i++){
        int a;
        cin >> a;
        int z = 0;
        for(int j = 1; j * j <= a; j++){
            if(a % j == 0){
                z++;
            }
        }
        if(z <= 2){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
}