#include <iostream>
#include <fstream>

using namespace std;

int main(){

    int m, n;
    int **M = NULL;

    ifstream ifile("m23.txt");

    ifile >> m >> n;

    M = new int* [m];

    for(int i = 0; i<m; i++){
        
        M[i] = new int [n];
    }


    


    return 0;
}