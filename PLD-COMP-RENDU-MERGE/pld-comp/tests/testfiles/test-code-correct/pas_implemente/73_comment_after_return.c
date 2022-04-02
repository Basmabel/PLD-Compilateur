int main() {
    int a, b;
    b=5;
    a=b+5;
    return a+b;
    //some useless stuff after the return
    b=6;
    // expected result : TEST OK 
    // but the compiler doesn't accept anything after the retrun statement :( 
}
