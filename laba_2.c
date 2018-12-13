#include <stdio.h>
#include <math.h>
#define EPS 0.000001

int main()
{   
    double a = 1, s = 0, exp(double x);
    int i = 0;
    
    double q,r,t;
    
    while (a > EPS) 
    {   
        //a = pow(-1, i)*
        //a=exp(i) * pow(100, - pow(i, 2));
        q = exp(i); 
        r = - pow(i, 2);
        t = pow(100, r);
        a = q * t;
        
        printf("%1.4f\t %1.4f\t %1.16f\t %1.16f\n",q, r, t, a);
       
         s += a;
        
        i++;
    }
    printf("%1.9g\n", s);
 
return 1;  
}   
