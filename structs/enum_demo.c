// Enum demo
// Date : 25-APR-2023

#include <stdio.h>

enum weekday {
   MON, TUE, WED, THU, FRI
};

enum paymode {
   CASH, CARD, UPI, NEFT
};
void main()
{
   enum weekday week;
   enum paymode pmode;

     week = TUE;
     week = FRI;

     printf("%d ", week);

     pmode  = UPI;
     if(pmode == UPI)
         printf("GooglePay or PhonePE");
}
