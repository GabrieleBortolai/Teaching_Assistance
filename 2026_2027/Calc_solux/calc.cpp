#include <iostream>
// #include <cstdlib>

using namespace std;


int main(){

    char c, op;
    int cifra;
    bool prima=true;
    bool decimale=false;
    double acc=0, num=0, disp=0, fattore=0.1;



    while(true){

        cin >> c;
        
        if((c >= '0') && (c <= '9')){
            cifra = c - '0';
            
            if(decimale){
                num=num+cifra*fattore;
                fattore=fattore/10;
            }
            else{
                num=10*num+cifra;
            }
            disp=num;
        }
        

        else if(c=='.' && !decimale){
            decimale=true;
            disp=num;
        }

        else if(c=='+' || c=='-' || c=='/' || c=='*' || c=='='){
            if(prima){
                acc=num;       
            }

            else{
                switch(op){
                    case '+': acc=acc+num;
                        break;
                    case '-': acc=acc-num;
                        break;
                    case '*': acc=acc*num;
                        break;
                    case '/': 
                    if(num==0){
                        cout<<"Impossibili dividere per zero!\n";
                        return 1;
                    }
                    acc=acc/num;
                    break;
                }
                
            }
            disp=acc;
            
            if(c=='='){
                prima=true;
                num=acc;
            }
            
            else{
                fattore=0.1;
                decimale=false;
                num=0;
                op=c;
                prima=false;
            }
        }

        else if(c=='c' || c=='C'){
            acc=0;
            num=0;
            disp=0;
            fattore=0.1;
            decimale=false;
            prima=true;
        }

        else if((c == 'q') || (c == 'Q')){
            cout << "Stop !\n";
            return 1;
        }
        cout << "display: "<<disp<<endl;
    }

    return 0;
}