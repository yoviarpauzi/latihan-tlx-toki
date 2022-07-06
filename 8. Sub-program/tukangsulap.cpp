#include <cstdio>
using namespace std;
int N, Q, ar[2][1001];
void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    scanf("%i", &N);
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            scanf("%i", &ar[i][j]);
        }
    }
    scanf("%i", &Q);
    for(int i = 0; i < Q; i++){
        char buff1[5], buff2[5];
        int x, y;
        scanf("%s %i %s %i", buff1, &x, buff2, &y);
        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        swap(ar[p][x], ar[q][y]);
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            printf("%i ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}