char function(char a, char b){
    char ret = a*2 + b*5;
    return ret;
}

int main(){
    char a = 'b';
    char b = 'c';
    char res = function(a,b);
    return res;
}