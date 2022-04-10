int main(){
    int a = 30;
    int b = 40;
   while (a*b > 15)
   {
	a=a-2;
    b = b-a;
   }
   return b;
}