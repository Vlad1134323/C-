#include <iostream>
using namespace std;
int main() {
int smax, N=10;
int x[10] = {5, 8, 9, 6, 3, 2, 4, 0, 1, 7};
for(int a=0;a<N;a++){
if(a==N-1){
cout << x[a] << endl;
}else{
cout << x[a] << ", ";}}
int max = x[0];
for(int a=0;a<N;a++){
if(x[a]>max){
smax=max;
max=x[a];}}
cout << "Друге за величиною чило у масиві = " << smax;}