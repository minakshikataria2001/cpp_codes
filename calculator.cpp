#include<iostream>
using namespace std;

void dividation(int &,int);
void multiplication(int &,int);
void addition(int &,int);
void subtraction(int &,int);

int main(){

    int num1,num2,oper;
    cout<<"We are creating our calculator in c++ \n";
    cout<<"Enter Your first value to calculate numbers: \n";
    cin>>num1;

    do{

        cout<<"1.Addition \n"<<"2.Subtraction \n"<<"3.Dividation \n"<<"4.Multiplication \n"<<"5.Exit \n";
        cout<<"Choose a number to do calculation: \n";
        cin>>oper;

        switch(oper){

            case 1: cout<<"Enter your second Number: \n";
                    cin>>num2;
                    cout<<"Your addition result is: ";
                    addition(num1,num2);
                    cout<<num1;
                    cout<<endl;
                    break;

             case 2: cout<<"Enter your second Number: \n";
                    cin>>num2;
                    cout<<"Your subtraction result is: "<<endl;
                    subtraction(num1,num2);
                    cout<<endl;
                    break;
             case 3: cout<<"Enter your second Number: "<<endl;
                    cin>>num2;
                    cout<<"Your dividation result is: \n";
                    dividation(num1,num2);
                    cout<<endl;
                    break;
             case 4: cout<<"Enter your second Number: \n";
                    cin>>num2;
                    cout<<"Your multiplication result is: ";
                    multiplication(num1,num2);
                    cout<<endl;
                    break;
             case 5: cout<<"Thanks To use our calculator \n";


        }




    }while(oper<5);



    return 0;
}

void dividation(int &a,int b){
    a=a/b;
}

void multiplication(int &a,int b){
    a=a*b;
}

void addition(int &a,int b){
    a=a+b;
}

void subtraction(int &a,int b){
    a=a-b;
}