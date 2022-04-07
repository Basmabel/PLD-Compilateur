int main(){
    int res = 0;
    while(res<60){
        res = res + 5;
        if(res>35){
            return res;
        }else {
            return 1;
        }
    }
    return res;
}