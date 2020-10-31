#include <iostream>

int gcd_fast(int a, int b) {
  int current_gcd = 1,temp,l=b,s=a;
  if(a>=b){
     l = a;
     s =b;
  }

  if(s==1)  // 1 is always a GCD of other number where(l>b)
    return 1;
  while(s>0)
  {
    temp =s;   //Euclidean algorithm.
    s= l%s;
    l=temp;
  }

  return l;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
