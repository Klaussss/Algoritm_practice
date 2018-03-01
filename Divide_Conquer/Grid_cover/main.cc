#include<cstdio>
#include<cmath>

using namespace std;

#define SIGN(x) (x>=0?1:-1)

int divide_conquer(int ain, int bin, int n)
/*
@input: a : first number for multiplication
@input: b : second number for multiplication
@input: n : number of bites 
*/
{
  int sign = SIGN(ain)*SIGN(bin);
  int a = abs(ain);
  int b = abs(bin);
  if (a==0||b==0) return 0; // termination condition
  if (n==1) return sign*a*b; // termination condition
  else{
    int base = pow(10,n/2);
    int A = a/base;
    int B = a%base;
    int C = b/base;
    int D = b%base;
    int AC = divide_conquer(A, C, n/2);
    int BD = divide_conquer(B, D, n/2);
    int ABCD = divide_conquer((A-B),(D-C),n/2)+AC+BD;
    return (AC*pow(10,n)+ABCD*pow(10,n/2)+BD);
  }
}

int main()
{
  int a, b, n;
  scanf("%d%d%d",&a,&b,&n);
  printf("%d*%d=%d\n",a,b,divide_conquer(a,b,n));
}

