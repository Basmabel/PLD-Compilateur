int main(){
    int a = 1;
    int b = 2;
   while ((a + b) < 20)
   {
	a=a+1;
    b = a + b;
   }
   return a;
}