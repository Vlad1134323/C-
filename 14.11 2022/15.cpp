#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
int m=3, n=3, dsum=0;
int array[m][n];
srand(time(NULL));
for(int a=0;a<m;a++){
for(int b=0;b<n;b++){
array[a][j]= rand()%10;}}
for(int a=0;a<m;a++){
for(int b=0;b<n;b++){
cout << array[a][b];
if(b==n-1){
cout << array[a][b] << endl;
}else{
cout << array[a][b] << ", ";}}}
int a=0, b=0;
while(a<m && b<n){
dsum+=array[a][b];
a++; b++;}
a=m-1, b=0;
while(a>=0 && b<n){
dsum+=array[a][b];
a--; b++;}
cout << "Cума діагоналей масиву = " << dsum << endl;}