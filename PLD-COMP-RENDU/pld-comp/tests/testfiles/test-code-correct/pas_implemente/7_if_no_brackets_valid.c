int main (){
    int a,b;
    a =1;
    if(a) a=2; 
    else 
    b=3;
    b=4;

    /*expected result : a=2; b=4; a+b=6
    if no brackets -> the statement takes only one line */
    return a+b;
}
