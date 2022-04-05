char function(int a, char b){
    char ret = (a/3+2)*b;
    return ret;
}

int main(){
    char a = 'a';
    int b = 95;
    int res = function(a,b);
    return res;
}