int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else {
   }
   if(n == 1) {
      return 1;
   } else {
      int a = (fibbonacci(n-1) + fibbonacci(n-2));
      return a;
   }
}

int main() {
  int n,m;
  n = 3;
  m = fibbonacci(n);
  return m;
}