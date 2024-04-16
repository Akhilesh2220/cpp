#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"=====CALCULATOR=====";
    A:
    cout<<"\n\nEnter 2 numbers\n";
    cin>>num1>>num2;
    cout<<"Use\n+ for addition\n- for substraction\n* for multiplication\n/ for subtraction\n";
    cin>>op;
    switch(op){
        case '+': cout<<"Sum is "<<num1+num2<<endl;
        break;
        case '-': cout<<"Result is "<<num1-num2<<endl;
        break;
        case '*': cout<<"Product is "<<num1*num2<<endl;
        break;
        case '/': if(num2==0){
            cout<<"Denominator cant be 0\n";
        }
        else{
            cout<<"Result is "<<num1/num2<<endl;
        }
        break;
        default:cout<<"Invalid Operator"<<endl;

    }
    cout<<"Do you want to use it again?(y/n)"<<endl;
    char input;
    cin>>input;
    if(input=='y'){
        goto A;
    }
}
