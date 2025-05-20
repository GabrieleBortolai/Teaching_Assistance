#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int FileReader(ifstream &);

int main(int argc, char **argv){

    ifstream ifile;

    cout<<argc;

    // string nome = argv[1];

    ifile.open("dati.txt");

    int n = FileReader(ifile);
    cout<<n<<endl;

    return 0;
}

int FileReader(ifstream &ifile){

    int n;

    ifile >> n;

    return n;
}