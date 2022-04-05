#include <stdio.h>

int test(int a){
    if(a==1){
        return 1;
    }else{
        return 2;
    }
}
int main() {
    char f;
    f = 'b';
    int x,c,a;
    x=6;
    c=test(1);
    return c;
}