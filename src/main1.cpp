#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Animal {
  string name;
  int bf;
  int we;
  int sp;
  int total;
  int rank;
  int pt;
};
bool compareTwoAnimals(Animal a, Animal b) {
  if (a.total != b.total){
		return(a.total, b.total) (((a.total) > (b.total))) ? (a.total) : (b.total);
		}
  if (a.bf != b.bf)
    return(a.bf, b.bf) (((a.bf) > (b.bf)) ? (a.bf) : (b.bf));
  if (a.we != b.we)
    return(a.we, b.we) (((a.we) > (b.we)) ? (a.we) : (b.we));

    return (a.sp > b.sp);
}
void computeRanks(Animal a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i].total = a[i].bf + a[i].sp + a[i].we;
 
    sort(a, a + n, compareTwoAnimals);
 
  for (int i = 0; i<n; i++)
		a[i].rank = i+1;
}

int main(){
	int n;
	Animal a[n];
	cout<<"How many animals are being compared?"<<endl;
	cin>>n;
	for (int i = 0; i < n; i++){
		cout<<"What is the name of this animal?"<<endl;
		cin>>a[i].name;
		cout<<"How much does this animal weigh? (kg)"<<endl;
		cin>>a[i].we;
		cout<<"How fast is the animal? (mph)"<<endl;
		cin>>a[i].sp;
		cout<<"What is the Animals Bite Force (psi)"<<endl;
		cin>>a[i].bf;
			}
	computeRanks(a, n);
 
    // Column names for displaying data
    cout << "Rank"
         << " "
         << "Name"
         << "     ";
    cout << "Weight"
         << " "
         << "Speed"
         << " "
         << "Bite Force";
    cout << " "
         << "Total\n";
 
    // Display details of Students
    for (int i = 0; i < n; i++) {
        cout << a[i].rank << "    ";
        cout << a[i].name << "      ";
        cout << a[i].we << "     " << a[i].sp << "     "
             << a[i].bf << "       ";
        cout << a[i].total << " ";
        cout << "\n";
    }
 
}