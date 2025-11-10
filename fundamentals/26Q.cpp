// check grading system

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks " <<endl;
    cin>> marks;
    if(marks>90){
        cout<<" grade A+"<<endl;
    }
    else if(marks<90 && marks> 80){
        cout<< "grade A"<<endl;

    }
     else if(marks <80){
         cout<<"grade B"<<endl;
    }
    return 0;

}