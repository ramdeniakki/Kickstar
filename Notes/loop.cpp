/*
     
     
     Conditional's && loops


  => if       --- to specify a block of code to be executed, if a specified condition is true
 =>  else     --- to specify a block of code to be executed, if the same condition is false
 =>  else     --- if to specify a new condition to test, if the first condition is false
 =>  switch   --- to specify many alternative blocks of code to be executed


*/

/*
   cin => used to take user input
*/




//  if statement

/*

#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"Enter the age: ";

   cin>>age;


    if(age<=18){
      cout<<"You are too young to ride the bike";
   }
   else{
      cout<<"You can ride the bike";
   }
}

*/


//  if else block statement

/*
#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter the Number :";
   cin>>num;
   if(num>0){
      cout<<"Number is Postive"<<endl;

   }
   else{
      if(num<0){
         cout<<"Number is Negative"<<endl;

      }
      else{
             cout<<"Number is Zero ";                                               
      }
     
   }
}

*/