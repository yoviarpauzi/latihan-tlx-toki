#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            cout << "*";
        }else{
            cout << i;
        }
        if(i != n){
            cout << " ";
        }else{
            printf("\n");
        }
    }
    return 0;
}