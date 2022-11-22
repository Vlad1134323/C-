#include <iostream>
using namespace std;
int main() {
int N=5, n1, n2;
int array[5] = { 5, 4, 6, 7, 0};
cout << "До:"<<endl;
for(int a=0; a<N; a++){
if (a==N-1){
cout << array[a] << endl; 
}else{
cout << array[a] << ", ";    }}
int max = array[0];
for (int a = 0; a < N; a++) {
if (array[a] > max) {
max = a;
n1 = array[a];}}
int min = array[0];
for (int a = 0; a < N; a++) {
if (array[a] < min) {
min = a;
n2 = array[a];}}
array[min] = n1;
array[max] = n2;
cout << "Після:"<<endl;
for(int a=0; a<N; a++){
if (a==N-1){
cout << array[a] << endl; 
}else{
cout << array[a] << ", ";}}}