int main(){
    int a = 1;
    int b = 2;
   while ((a + b) <= 20)
   {
	a++;
    b = a + b;
   }
   return a;
}