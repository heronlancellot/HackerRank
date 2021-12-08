#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i;
    int *n = (int *) malloc(sizeof(int) * i);
    int *x = (int *) malloc(sizeof(int) * i);
    scanf("%d", &i);

    
    for(int cont = 0; cont < i; cont ++){
        scanf("%d", &n[cont]);
    }
    for(int cont = 0; cont < i; cont ++){
        x[cont] = n[i-cont-1];
        printf("%d ", x[cont]);
    }


    return 0;
}
