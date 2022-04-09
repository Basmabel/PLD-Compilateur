char functionfirst(int a){
    return a*a*4;
}

char functionsecond(int a){
    return a*2 + 5;
}

int main(){
    int a = 4;
    int b = 7;
    char c = functionfirst(a);
    char d = functionsecond(b);
    return c + d;

}