int main(){

    //Fail comme i>4, b[i] a la meme addresse que i. b[i]=8 => i=8 donc return b[8] a la place de b[6]

    int b[4];
    int i=6;
    b[i]=8;
    return b[i];
}


