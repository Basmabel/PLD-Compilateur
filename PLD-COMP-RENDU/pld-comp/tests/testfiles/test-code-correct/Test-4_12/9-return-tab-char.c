int main(){
    char tab[10];
    tab[0] = 5;
    tab[1] = 'c';
    tab[2] = 'b';
    int res;
    int n = 0;
    while(n<3){
        res = res + tab[n];
        n = n + 1;
        if(res>10){
            return n
        }
    }
}