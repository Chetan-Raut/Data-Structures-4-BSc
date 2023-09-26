#include <iostream.h>
#include <conio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    clrscr();

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    displayArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    displayArray(arr, n);

    getch();
    return 0;
}
//2nd Way

#include<iostream.h>
#include<conio.h>

class insertion
{
 private:
    int i, k;

 public:
    void insertion_sort(int *, int);
    void display(int *, int);
};

void insertion::insertion_sort(int l[], int n)
{
    l[0] = 0; // Note: Changed -0 to 0

    for (int i = 1; i <= n; i++)
    {
        int pointer = i - 1;
        int temp = l[i];

        while (temp < l[pointer])
        {
            l[pointer + 1] = l[pointer];
            pointer--;
        }

        l[pointer + 1] = temp;
        cout << "step=" << i;

        for (k = 1; k <= n; k++)
            cout << " " << l[k];

        cout << "\n";
    }
}

void insertion::display(int l[], int n)
{
    cout << "\nSorted list is as follows\n";

    for (i = 1; i <= n; i++)
        cout << " " << l[i];
}

void main()
{
    clrscr();

    insertion ins_sort;
    int number;
    int list[100];

    cout << "\nInput the number of elements in the list: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
        cin >> list[i];

    ins_sort.insertion_sort(list, number);
    ins_sort.display(list, number);

    getch();
}

//3rd way

#include<iostream.h>
#include<conio.h>
class insertion
{
 private: int i, k ;
 public: void insertion_sort(int *,int) ;
 void display(int *,int) ;
} ;
void insertion:: insertion_sort(int l[], int n)
{
 l[0]= -0 ;
 for( int i=1 ; i<=n;i++)
 {
  int pointer=i-1 ;
  int temp=l[i] ;
  while(temp<l[pointer])
  {
   l[pointer+1]=l[pointer] ;
   pointer--  ;
  }
   l[pointer+1]=temp ;
   cout<<"step="<<i ;
   for(k=1;k<=n;k++)
   cout<<" "<<l[k] ;
   cout<<"\n";
   }
  }
  void insertion::display(int l[], int n)
 {
  cout<<"\n Sorted list is as follows \n" ;
  for(i=1;i<=n;i++)
  cout<<" "<<l[i] ;
 }
 void main()
 {
  clrscr() ;
  insertion ins_sort ;
  int number ;
  int list[100] ;
  cout<<"\n Input the number of elements in the list:" ;
  cin>>number ;
  for(int i=1;i<=number;i++)
  cin>>list[i] ;
  ins_sort.insertion_sort(list,number) ;
  ins_sort.display(list,number) ;
  getch() ;
 }

