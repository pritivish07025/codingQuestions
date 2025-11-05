//Check if a number is positive, negative, or zero.

 // yaha bhi nested loop ka concept use hoga

 #include <iostream>
 using namespace std ;
 int main(){
     int n;
     cout <<"Enter a number :"<< endl;
     cin >> n;
     if(n>0){
cout<<"It is a positive number "<<endl;
     }
     else if (n<0){
cout << "It is a negative number"<<endl;
     }
     else {
cout <<"Its equal to zero";
     }

     return 0;
 }