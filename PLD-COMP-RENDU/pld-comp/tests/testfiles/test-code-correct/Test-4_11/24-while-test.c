int main(){
    int a = 1;
    int b = 2;
   while (a*b <= 15)
   {
	a++;
    b = a + b;
   }
   return b;
}