#include <stdio.h>

int calcul(int a, int b){
    return a + b;
}

int main(){
    int a = 2;
    int b = 2;
    printf("%d\n",calcul(a,b));
    return 0;
}