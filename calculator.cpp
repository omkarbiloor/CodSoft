#include <iostream>
using namespace std;
int main(){
    char replay;
    do{
    int n=0,a=0,b=0;
    cout<<" Choose the option\n 1.Addition\n 2.Substraction\n 3.Division\n 4.Multiplication\n";
    cout<<"Enter Operation which you want to perform:"<<endl; 
    cin>>n;
    switch(n) {
        case 1:
        cout<<"Enter Two Numbers "<<endl;
        cin>>a>>b;
            cout << a+b << endl;
            break;
        case 2:
        cout<<"Enter Two Numbers "<<endl;
        cin>>a>>b;
            cout<<"Substraction of number"<<a-b<<endl;
            break;
            case 3:
            cout<<"Enter Two Numbers "<<endl;
            cin>>a>>b;
                if (b == 0){
                    cout << "Error! Division by zero is not allowed." << endl;}
                else{
                    cout <<"Division of Number is"<< a/b << endl;
                }
            break;
        case 4:
        cout<<"Enter Two Numbers "<<endl;
        cin>>a>>b;
            cout<<a*b<<endl;
            break;
        default :cout<<"Invalid Choice!"<<endl;
    }
        cout << "Do you want to continue (Y/N)?" << endl;
        cin >> replay;
        cout << endl;
        if (replay != 'Y' && replay != 'N')
        {
            cout << "Invalid Input" << endl;
        }
        }while(replay=='Y');
    return 0;
}