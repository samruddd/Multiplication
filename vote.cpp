#include <iostream>
using namespace std;

int main(){
    string name;
    int aadhar_number;
    int age;
    string answer;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your Aadhar number";
    cin>>aadhar_number;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote\n";
    }else{
        cout<<"You are not eligible to vote\n";
    }
    cout<<"Have you casted your vote?";
    cin>>answer;
    if(answer=="YES"){
        cout<<"Thanks for voting\n";
    }else{
        cout<<"Please go and caste your vote\n";
    }
    return 0;
}
