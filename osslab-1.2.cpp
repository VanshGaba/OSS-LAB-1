#include<iostream>
using namespace std;

void voting_eligibility(int age){
if(age<18){
    cout<<"You are not eligible to vote";}

else if(age>18){
    cout<<"Abki baar Modi sarkaar!!";
    }
}


int main()
{
    int age;
    cout<<"Check your voting eligibility: \n";
    cout<<"Enter your age: ";
    cin>>age;
    voting_eligibility(age);
}
