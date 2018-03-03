#include <stdio.h>
int main()
{
  int lowerlimit=-20;// lower limit in cels
  int upperlimit=300; // upper limit
  int step=20; // for showing steps [4 byte]
  int  cels=0;// incijalizacija [4 byte]
// C=5/9(F-32) = > F=9/5*(c+32)

   printf("Fahre       Celsius \n ");
  for (int i=lowerlimit; i<=upperlimit; i+=step)
  {
    cels=5*(i-32)/9;
     printf(" %4d C => F  %4d \n ", i,cels);
  
  }
  printf("Fahre      Celsius \n");
  int i=lowerlimit ;
  while(i<=upperlimit)
  {
    
    cels=5*(i-32)/9;
    printf("%4d => %4d \n ", i,cels);
    i+=step;
  }
 return 0;
 }

