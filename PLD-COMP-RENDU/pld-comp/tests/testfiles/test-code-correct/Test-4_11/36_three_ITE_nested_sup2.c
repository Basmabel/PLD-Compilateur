int main (){
    int a,b,c,d;
    a = 2;
    b = 0;
    if(a>1){
        b=1;
        /*a=2, b=1*/
        if(a>0){
            b=2;
        }else {
            b=0;
            /*a=2 b=2*/
            if (c=a+2*5-2+b/1>11)
            {
                b=b+2;
                /* a=2 b=2 c=12  */
            }else {
                a=a+2;
            }

            a=10;
            /* a=10 b=2 c=12  */  
        }
    }else {
        b=b+3;
    }
    /* a=10 b=2 c=12 -> a+b+c = 24 */ 
    return a+b+c;
}