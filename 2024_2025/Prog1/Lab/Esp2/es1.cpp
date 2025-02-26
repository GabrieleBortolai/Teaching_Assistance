#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a,b,c;
    int min = 0, mid = 0, max = 0;

    cout<<"Inserire tre numeri"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a <= b && a <= c) {
        min = a;
        if (b <= c) {
            mid = b;
            max = c;
        } 
        
        else {
            mid = c;
            max = b;
        }
    } 
    
    else if (b <= a && b <= c) {
        min = b;
        if (a <= c) {
            mid = a;
            max = c;
        } 
        
        else {
            mid = c;
            max = a;
        }
    } 
    
    else {
        min = c;
        if (a <= b) {
            mid = a;
            max = b;
        } 
        
        else {
            mid = b;
            max = a;
        }
    }

    cout<<"I numei ordinati sono: "<<min<<" "<<mid<<" "<<max<<endl;

    return 0;
}