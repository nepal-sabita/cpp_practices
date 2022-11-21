#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b ;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    printf("%d\n",*&a);
    printf("%ld\n",*&b);
    printf("%c\n",*&c);
    printf("%0.3f\n",*&d);
    printf("%0.9lf",*&e);
    
    return 0;
}

