#include <iostream>
#include <cmath>

using namespace std;

double Sqrt(double, double);

int main(){

    double x = 2, err = 1e-3;

    cout<<Sqrt(x, err)<<endl;

    return 0;
}

double Sqrt(double x, double e){

    double min, max, y;

    if(x >= 1){

        min = 1;
        max = x;
    } else {

        min = x;
        max = 1;
    }

do{

    y = (min + max)/2;

    if(pow(y, 2) > x) max = y; 
    
    else min =y;

} while(fabs(pow(y, 2) - x) > e);

return y;

}