#include <iostream>
#include <string>
using namespace std;
int main(){
    string QUITMESSAGE = "quit";
    string userName;
    string message;
    cout<<"Please enter your name: "<<endl;
    cin>>userName;
    cout<<"Welcome to TerminalChat "<< userName << "! Message 'quit' to exit"<<endl;
    while(message != QUITMESSAGE){
        cout<<userName << ": ";
        cin>>message;
        cout<<"Otheruser: " << message <<endl;
    }
    return 0;
}