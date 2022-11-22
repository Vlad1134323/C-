#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int m=5, n=7;
int counter[m];
int array[m][n];
srand(time(NULL));
for(int a=0;a<m;a++){
counter[a] = 0;}
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
counter[a]+=array[a][b];}}
for(int a=0;a<m;a++){
cout << "сума елементів У " << a+1 << " рядку = " << counter[a] << endl;}}