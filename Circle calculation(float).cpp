/*
輸入圓半徑(r),當r >= 0時,計算圓的面積和周長(float)
*/
#include <iostream>
using namespace std;
 
int main()
{
    float r, area,perimeter;
    printf("please input a radius: \n");
    scanf("%f", &r);
    printf("The radius is %f \n", r);
    if (r >= 0.0){
        area=3.14159*r*r;
        printf("The area of the circle is %lf \n", area);
        perimeter=3.14159*r*2;
        printf("The perimeter of the circle is %lf \n", perimeter);
    }else {
        printf("A radius should be greater than 0! \n");
    }
    cout<<"Finished!";
    return 0;
}
