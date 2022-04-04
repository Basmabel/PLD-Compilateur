int main (){
    int a,b;
    a = 5;
    b = 0;
    if(a){
        b=b+2;
    }else {
        b=b+3;
    }
    /*expected result : b=2*/
    return b;
}
