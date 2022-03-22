#include <iostream>
using namespace std;



string usrName()
{
    string name;
    cout << "What is your name?: ";
    cin >> name;
    return name;
}

int main()
{
    string usrNames;
    usrNames = usrName();
    int x;
    cout << "Please enter a number, " << usrNames << ": ";
    cin >> x;
    cout << "You entered: " << x << "\n\n";

    if(x == 69 || x == 420){
        cout << "Nice\n\n";
    }else{
        cout << "Not nice\n\n";
    }
}