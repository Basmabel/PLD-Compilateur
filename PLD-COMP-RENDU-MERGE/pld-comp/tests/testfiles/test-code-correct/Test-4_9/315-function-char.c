char function(int a){
    int t = a*2+3;
    char ret = t;
    return ret;
}

int main(){
    int a = 6;
    char res = function(a) + 98;
    return 3*res+4;
}