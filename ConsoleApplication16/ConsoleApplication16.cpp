#include <stdio.h>
#include <conio.h>
 unsigned long long int factor(int n) {
 if (n <= 1) return 1;
 return n*factor(n-1);
                            }
int main() 
 {int n=1,k;
 printf("Input k(!) = ");
 scanf("%i",&k);
 while (n<=k)
 { 
   printf("%llu\n",factor(n));
 n++;
 }
 getch();
 return 0; 
 }
 
