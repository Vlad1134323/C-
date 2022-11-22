#include <iostream>
#include<ctime>
using namespace std;
int main() {
int counter=-1, N=10; 
int x[N];
srand(time(NULL));
for(int a=0;a<N;a++){
x[a] = rand()%10;}
cout << "Вхідний масив:" << endl;
for(int a=0;a<N;a++){
if(a==N-1){
cout << x[a] << endl;
}else{
cout << x[a] << ", ";}}
for(int a=0;a<N;a++){
if(x[a]==0){
counter = a;
break;}}
if(counter==-1){
cout << "Масив не містить нульових елементів " ;
}else{
cout << "Номер першого нульового елемента: " << counter+1;}}