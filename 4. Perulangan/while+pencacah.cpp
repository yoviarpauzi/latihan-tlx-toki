#include <iostream>
using namespace std;
int main(){
    int a, hasil = 0;
    while(scanf("%i", &a) != EOF){
        hasil += a;
    }
    cout << hasil;
    return 0;
}