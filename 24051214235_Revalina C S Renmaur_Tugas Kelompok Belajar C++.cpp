#include <iostream>
using namespace std;

 int main() {
  
  string nama;
  int umur;
  char jenis_kelamin;
  
  cout << "Siapakah namanya siapa ?" << endl;
  cout << "Jawab: ";
  getline(cin,nama);
  
  cout <<"Berapa umurmu" << endl;
  cout << "Jawab: ";
  cin >> umur;
  
  cout <<"Jenis kelamin [L/P]: ";
  cin >> jenis_kelamin;
  
  cout <<"Salam Kenal, " << nama  << " Sekarang engkau berusia " ;
  cout << umur << " dan kau berjenis kelamin " << jenis_kelamin;
  
  return 0;
  
}
