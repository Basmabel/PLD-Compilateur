int function(int c){
    if (c<7){
        return c;
    }else{
        return c+1;
    }
    return 0;
}

int main(){
    int a = 6;
    int b = 2;
    int c = a*2 + 5;
    int res = function(c);
    return c;
}