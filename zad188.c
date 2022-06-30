/*  Program treba izracunat polinom pomocu hornerove metode.  */

#include <stdio.h>

int main()
{
     float a[100],suma=0,x;
     int n,i;

     printf("Unesi stupanj polinoma X : ");
     scanf("%d",&n);
     printf("\nUnesi koeficijent polinoma X : \n");
     for(i=n;i>=0;i--)
     {
            printf("\nUnesi koeficijent od [ X^%d ] : ",i);
            scanf("%f",&a[i]);
     }

     printf("\nUnesi vrijednost od X : ");
     scanf("%f",&x);

     for(i=n;i>0;i--)
     {
        suma=(suma+a[i])*x;
     }

     suma=suma+a[0];

     printf("\nVrijednost polinoma je = [ %f ]\n",suma);

     return 0;
}
