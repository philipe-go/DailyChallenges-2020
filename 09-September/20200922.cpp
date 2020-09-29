//Counting Bits

unsigned int countBits(unsigned long long n){
unsigned int amount = 0;
 while(n>0)
  {
   amount += n%2==1? 1 : 0;
   n=n/2;
  }
  return amount;
}