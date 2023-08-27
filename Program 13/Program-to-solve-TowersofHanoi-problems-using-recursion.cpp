#include <iostream.h>
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
}
