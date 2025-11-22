#include <iostream>
using namespace std;
int main(){
    
    char str[];
    cout<<"enter number"<<endl;
    cin.getline(str,100);
    for(char ch:str){
        cout<<ch<<"";
    }
  cout<<endl;
    return 0;

}