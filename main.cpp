#include <iostream>
using namespace std;

void readData ( int[], int[], int );
void printArray ( int[], int );
double average ( int[], int );
void addonto ( int[], int[], int[], int );

int main()
{
    cout<< " HW#6 Anton Teren " << endl << endl;

  int first[50]; int second[50]; int bigFirst[50]; int bigSecond[50];
  double avg1=0, avg2=0, avgb1=0, avgb2=0;

 readData(first, second, 12);

 cout <<endl << " First array is: ";
  printArray(first, 12);
 cout <<endl<< " Second array is: ";
  printArray(second, 12);

 cout<<endl;

    avg1 = average(first, 12);
 cout <<" The average of the first array is: " << avg1 <<endl;
    avg2 = average(second, 12);
 cout<<" The average of the second array is: " << avg2 <<endl;

 cout <<endl<<endl;

    addonto(first, second, bigFirst, 24);
    addonto(second, first, bigSecond, 24);

 cout << " First combined array is : " ;
    printArray(bigFirst, 24);
 cout <<endl << " Second combined array is : " ;
    printArray(bigSecond, 24);

 cout<<endl;

    avgb1 = average ( bigFirst, 24);
    cout << " The average of the first combined array is: " << avgb1 <<endl;
    avgb2 = average ( bigSecond, 24);
    cout << " The average of the second combined array is: " << avgb2 <<endl;

    return 0;
}


 void readData ( int numb1[], int numb2[], int n) {
    int i, j;
  cout<< "Please enter first array values"<< endl;
    for ( i=0; i<n; i++ ){
        cin>> numb1[i];}

  cout<< "Please enter second array values"<< endl;
    for ( j=0; j<n; j++ ){
        cin>> numb2[j]; }
}

 void printArray ( int numb[], int q ) {
    int i;
    for (i=0; i<q; i++){
        if ( i%5 == 0 )
    cout<<endl;
    else
    cout <<"\t";
    cout<<numb[i] ; }
    cout<<endl;
}

double average ( int x[], int y){
    int i;
    double sum=0, avg=0;
    for (i=0; i<y; i++) {
        sum = sum + x[i]; }
        avg = sum / y ;
        return (avg);
}

void addonto ( int r[], int s[], int t[], int m ) {
   int i, j;
  j = m/2;
  for (i=0; i<j; i++)
        t[i] = r[i];
  for (i=0; i<j; i++)
        t[i+j] = s[i];
}
