#include <msp430.h> 
#include <stdio.h>



int main()
{
  WDTCTL = WDTPW+WDTHOLD;                   // Stop WDT (DO NOT CHANGE)
  Integer();

  return 0;
}






int Integer(){

    int n, c, k, a;
    unsigned int arr[15];

    n = 100;
    printf("Enter an integer in decimal number system\n");
    scanf("%d", &n);

    printf("%d in binary number system is:\n", n);

    for (c = 15; c >= 0; c--)
    {
      int i = 0;
      k = n >> c;

      if (k & 1){
        printf("1");
        arr[i]= 1;
      }
      else {
        printf("0");
        arr[i]= 0;
      }
      i++;
      printf("%d", arr[i]);
    }
    arr[0] = 12;
    printf("\n");





//
//    int ToString = 368;
//    char str[12];
//    sprintf(str, "%d", ToString );
}
