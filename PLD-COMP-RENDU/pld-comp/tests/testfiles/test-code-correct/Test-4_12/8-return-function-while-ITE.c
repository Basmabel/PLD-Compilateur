int function(int a, char b){
    int res = a + b;
    if(res > 6){
        return res;
    }else{
        return res*2;
    }
    return 0;
}

int main(){
    int a = 5;
    char b = 7;
    int res = function(a,b);
    while(res<60){
        res = res + 5;
        if(res>35){
            return res;
        } else {
            return 1;
        }
    }
    return 0;
}