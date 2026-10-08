#include <iostream>


using namespace std;

int main(){

    int a, b, c;
    double media = 0;

    cout<<"inserire tre numeri"<<endl;
    cin>>a>>b>>c;

    media = (a + b + c)/3;
    cout<<"La media vale: "<<media<<" La mediana vale: "<<b<<endl;

    return 0;
}
