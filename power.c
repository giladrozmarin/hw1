#include "myMath.h"
#define EXP 2.71828182845904523536028

double Exp (int x){
    return Pow(EXP, x);
}

//y = exponent
double Pow(double x,int y){
  double ans=1;
  if(y>-1)
      for ( int i = 0; i < y; i++)
      {
          ans=mul(ans,x);
 
      }
  else 
     for ( int i = 0; i < y; i++)
      {
          ans=mul(ans,(div(1,x)));
       
      
      }

return ans;
}



