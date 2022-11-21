/*Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.*/
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b,int c,int d);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    return max(max(a,b),max(c,d));
   /* if(a>b&&a>c&&a>d){
        cout<<a;
    }
    else if(b>a&&b>a&&b>c){
        cout<<b;
    }
    else if(c>a&&c>b&&c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    return 0;*/
}
