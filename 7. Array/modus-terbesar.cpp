#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n], arrpreq[1001] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arrpreq[arr[i]]++;
    }
    int max = -1, ans;
    for(int i = 1; i < 1001; i++){
        if(max <= arrpreq[i]){
            max = arrpreq[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}