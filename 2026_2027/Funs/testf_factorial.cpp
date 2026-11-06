#include <iostream>

using namespace std;

int factorial (int n){
    int res;

    if(n == 0){
        res = 1;
        return res;
    }
    
    if(n < 0){
        cout << "error" << endl;
        return 1;
    }

    return n * factorial(n - 1);

}

int main(){
    int n;

    cout << "ins numero" << endl;
    cin >> n;

    int res = factorial(n);
    cout << res <<endl;

    return 0;

}