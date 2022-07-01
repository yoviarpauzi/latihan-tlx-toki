#include <iostream>
using namespace std;
int main(){
    int n, c, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(i == 0){
            a = b = c;
        }else if(c > a){
            a = c;
        }else if(c < b){
            b = c;
        }
    }
    printf("%i %i", a, b);
    return 0;
}