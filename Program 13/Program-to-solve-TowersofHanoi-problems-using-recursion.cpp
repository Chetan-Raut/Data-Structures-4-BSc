#include<iostream.h>
#include<conio.h>
class tower
{
public:
void Hanoi(int n,char,char,char);
};
void tower::Hanoi(int n,chara,charb,char c)
{
if(n==1)
{
cout<<”\n move disk 1 from peg”<<”\ta”<<”\tto peg”<<”\tc”;
return;
}
hanoi(n-1,‘a’,’b’,’c’);
cout<<”\n move disk”<<n<<”from peg”<<”\ta”<<”to peg”<<”\tc”;
hanoi(n-1,’c’,’b’,’a’);
}
Void main()
{
int n;
clrscr();

tower t;
cout<<”enter no of disk=”;
cin>>n;
t.hanoi(n,’a’,’c’,’b’);
getch();
}

/*
#include <conio.h>

void towers(int n, char frompeg, char topeg, char auxpeg) {
    if (n == 1) {
        cout << "Move disk 1 from " << frompeg << " to " << topeg << endl;
        return;
    }
    towers(n - 1, frompeg, auxpeg, topeg);
    cout << "Move disk " << n << " from " << frompeg << " to " << topeg << endl;
    towers(n - 1, auxpeg, topeg, frompeg);
}

int main() {
    clrscr(); // Clear the screen

    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towers(numDisks, 'A', 'C', 'B');

    getch(); // Wait for a key press before exiting
    return 0;
}*/
