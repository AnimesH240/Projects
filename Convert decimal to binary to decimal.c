#include <stdio.h>

void main()

{

   int convert;
   int c, n, p=1, f=0, i=1, j, d, l, h, k, b=0,decimal;
   printf("1. For Binary to Decimal:\n");
   printf("2. For Decimal to Binary:\n");
   printf("Enter Your Choice:");
   scanf("%d",&convert);

   switch (convert)

   {

     case 1:
     printf("Input a binary number :");
     scanf("%d",&n);
     c=n;

     for (j=n;j>0;j=j/10)

     {

       d = j % 10;
       if(i==1)
         p=p*1;
       else
         p=p*2;
       f=f+(d*p);
       i++;

     }

     printf("The equivalent decimal number is %d \n",f);
     break;


     case 2:
     printf("Input a Decimal Number : ");
     scanf("%d",&l);
     decimal=l;
     h=1;

     for(k=l;k>0;k=k/2)

     {

        b=b+(l%2)*h;
        h=h*10;
        l=l/2;

     }

      printf("The equivalent binary number is %d \n",b);
      break;

   }

}
