#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        int bil;
        cin >> bil;
        if(i == 0){
            a = bil;
            b = bil;
        }else if(a < bil){
            a = bil;
        }
        if(b > bil){
            b = bil;
        }
    }
    cout << a << " " << b;
    return 0;
}