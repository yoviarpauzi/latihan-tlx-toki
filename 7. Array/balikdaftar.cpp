#include <iostream>
using namespace std;
int main(){
    int a[100];
    int n = 0;
    while(scanf("%i", &a[n]) != EOF){
        n++;
    }
    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << endl;
    }
    return 0;    
}