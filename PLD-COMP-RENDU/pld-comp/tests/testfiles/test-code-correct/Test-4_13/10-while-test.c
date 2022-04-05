int main(){
    int a = 5;
    while(a>60){
        a = a*2;
        if(a==5){
            a = a + 1;
            while(a<30){
                a = a + 3;
            }
        }else{
            a = a + 2;
            while(a<20){
                a = a + 2;
            }
        }
    }
    return a;
}