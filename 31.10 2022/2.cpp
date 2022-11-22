#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int N=10;
int max=0;
int x[N];
srand(time(NULL));
for(int a=0; a<N; a++){
x[a] = rand()%20-10;
if (a==N-1){
cout << x[a]<< endl; 
}else{
cout << x[a]<< ", ";}}
for(int a=0; a<N; a++){
if(x[a]>max){
max = x[a];}}
for(int a=0; a<N; a++){
if(x[a]==max){
max = a;}}
for(int a=0; a<max; a++){
if(x[a]<0){
x[a]=0;}}
for(int a=0; a<N; a++){
if (a==N-1){
cout << x[a]<< endl; 
}else{
cout << x[a]<< ", ";}}}