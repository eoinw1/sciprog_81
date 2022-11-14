#include<stdio.h>
#include<math.h>

int main(void){

        int N=12, i;
        float a=0, b_deg=60.0;
        float b_rad, area, mult_rad;

        //Covnert b_deg=pi/3 to radians
        b_rad=(M_PI * b_deg)/180.0;

        //Sum tan(a)+tan(b)
        area=tan(a)+tan(b_rad);
        //Calculating the area at 11 points by multiplying by 2 and adding them together
        for(i=5; i<60; i=i+5){
                area=area+2*tan((M_PI*i)/180.0);
};
        //multiply partial area by (b-a)/2N. Convert to radians first
        mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
        area=mult_rad*area;

        printf("Approximated=%f, Exact=%f\n", area, log(2.0));

        return 0;
}