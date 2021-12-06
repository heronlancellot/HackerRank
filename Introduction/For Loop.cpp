#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b, n;
    scanf("%d", &a);
    scanf("%d", &b);
    for(a; a <= b; a ++){
        n = a + 1;
        if(a <= 9){
            if(a == 1) printf("one\n");
            if(a == 2) printf("two\n");
            if(a == 3) printf("three\n");
            if(a == 4) printf("four\n");
            if(a == 5) printf("five\n");
            if(a == 6) printf("six\n");
            if(a == 7) printf("seven\n");
            if(a == 8) printf("eight\n");   
            if(a == 9) printf("nine\n");
        }else if(a > 9){
            if(a % 2 == 0){
                printf("even\n");
            }if(a % 2 != 0){
                printf("odd\n");
            }
        }
    }
    
    return 0;
}
