#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int m=4, n=7, min=100, index;
int array[m][n];
srand(time(NULL));
for(int a=0;a<m;a++){
for(int b=0;b<n;b++){
array[a][b]= rand()%10;}}
for(int a=0;a<m;a++){
for(int b=0;b<n;b++){
cout << array[a][b];
if(b==n-1){
cout << array[a][b] << endl;
}else{
cout << array[a][b] << ", ";}}}
for(int a=0;a<m;a++){
for(int b=0;b<n;b++){
if(array[a][b]<min){
min = array[a][b];
index = a*n+b+1;}}}
cout << "Мінімальний елемент = " << min << " знаходиться під номером: "<< index << endl;
}