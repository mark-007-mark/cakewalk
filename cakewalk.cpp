#include <iostream>
using namespace std;
int main() {
    int a,b,s;
    cin>>a>>b;
    if((a>=1 && a<=9) && (b>=1 && b<=9)){
        s=a*b;
        cout<<s<<endl;
    }else{
     cout<<-1<<endl;
    }
}








