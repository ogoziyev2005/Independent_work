//
// Created by ООО on 16/09/2024.
//

#include <iostream>
 using namespace std;

 int main (){
   int age ;
   cout <<"Please enter your age here: ";
   cin>>age;
   if(age<0 || age>125)
     {
     cout<<"Ha Ha Ha You are lying - you CANNOT be that age."<<endl;
     }
     else
       {
       cout << "Great! Thanks for providing your age ! "<<endl;
       }
       return 0;
 }
