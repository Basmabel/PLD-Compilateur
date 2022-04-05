int main(){
    int a = 1;
    int b = 2;
   while ((a + b) != 12)
   {
        a = a*2;
        b = a + b;
   }
   return a+b;