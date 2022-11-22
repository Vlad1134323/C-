#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int N=12; int temp;
int x[N]; int y[N];
srand(time(NULL));
cout << "Масив:"<<endl;
for(int a=0; a<N; a++){
x[a] = rand()%10;
if (a==N-1){
cout << x[a]<< endl; 
}else{
cout << x[a]<< ", ";}}
for(int a=0; a<N; a++){
y[a] =x[a];}
for(int a=0; a<N; a++){
for(int b=0; b<N; b++){
if(y[b]>y[b+1]){
temp=y[b];
y[b]=y[b+1];
y[b+1]=temp;}}}
for(int a=0; a<N; a++){
for(int b=0; b<N; b++){
if(x[b]<x[b+1]){
temp=x[b+1];
x[b+1]=x[b];
x[b]=temp;}}}
cout << "Масив за зростанням:"<<endl;
for(int a=0; a<N; a++){
if (a==11){
cout << y[a]<< endl;
break;
}else{
cout << y[a]<< ", ";}}
cout << "Масив за спаданням:"<<endl;
for(int a=0; a<N; a++){
if (a==11){
cout << x[a]<< endl;
break;
}else{
cout << x[a]<< ", ";}}}