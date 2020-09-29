#include <iostream>

using namespace std;

int main() {
    string tipo;
    getline(cin,tipo);
    if (tipo == "int")
    {
        cout<<sizeof(int);
    }
    else
    {
        if(tipo == "char")
        {
            cout<<sizeof(char);
        }    
        else
        {
            if(tipo == "short")
            {
                cout<<sizeof(short);
            }
            else
            {
                if(tipo == "float")
                {
                    cout<<sizeof(float);
                }
                else
                {
                    if(tipo == "double")
                    {
                        cout<<sizeof(double);
                    }
                    else
                    {
                        if(tipo == "long")
                        {
                            cout<<sizeof(long);
                        }
                    }
                    
                }
                
            }
            
        }
    }
    return 0;
}