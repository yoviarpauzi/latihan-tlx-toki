#include <iostream>
using namespace std;
int main(){
    int a, b = 0;
    while(scanf("%i", &a) != EOF){
        b += a;
    }
    cout << b;
    return 0;
}