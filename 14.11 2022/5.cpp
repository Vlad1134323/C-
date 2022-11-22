#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int m=3, n=4, max=0, index;
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
if(array[a][b]>max){
max = array[a][b];
index = a*n+b+1;}}}
cout << "Mаксимальний елемент знаходиться під номером: "<< index << endl << "та має значення"<< max ;
}