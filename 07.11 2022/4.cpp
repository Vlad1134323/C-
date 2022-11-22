#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int A, cbigger=0, N=100;
int array[N];
cout << "Число: ";
cin >> A;
srand(time(NULL));
for(int a=0;a<N;a++){
array[a] = rand()%100;}
for(int a=0;a<N;a++){
if(a==N-1){
cout << array[a] << endl;
}else{
cout << array[a] << ", ";}}
for(int a=0;a<N;a++){
if(array[a]>A){
cbigger++;}}
cout << "Кількість чисел які більше за " << A << " = " << cbigger;}