#include <iostream>
using namespace std;

int main()
{
    int b,c;
    cout<<"masukan bilangan yang akan di faktorialkan:";
    cin>>b;
    c=b;
    cout<<"bilangan ="<<b<<endl;
    cout<<b<<"!=";
    for(int i=1;i<=b;i++){
        cout<<i;
        if(i==b){
            cout<<" =";
        }else{
        cout<<"*";
        }
    }
    return 0;
}
