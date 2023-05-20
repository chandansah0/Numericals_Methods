#include <iostream>
#include <math.h>
using namespace std;
float f(float x, float y) {
    return{x*x-y};
}
int main()
{
    float x0,y0,xn,k,k1,k2,k3,k4,h;
    int n;
    cout<<"Enter the initial x"<<endl;
    cin>>x0;
    cout<<"Enter the initial y"<<endl;
    cin>>y0;
    cout<<"Enter the final x"<<endl;
    cin>>xn;
    cout<<"Enter the no. of sub interval"<<endl;
    cin>>n;
        h=(xn-x0)/n;
    float x=x0;
    float y=y0;
    for(int i=1;i<=n;i++) {
        k1=(h*f(x,y));
        k2=(h*f(x+h/2,y+k1/2));
        k3=(h*f(x+h/2,y+k2/2));
        k4=h*f(x+h,y+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        x=x+h;
        y=y+k;
        cout<<"The value of x and y is\t"<<x<<"\t"<<y<<endl;

    }
    return 0;
}
