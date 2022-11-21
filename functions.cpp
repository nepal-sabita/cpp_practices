/*Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.


*/
#include <iostream>

void update(int *a,int *b) {
    int n=*a;
    *a=*a+*b;
    *b=n-*b;
    if(*b<=1){
        *b=abs(*b);
    }
    
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
