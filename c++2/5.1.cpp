#include <iostream>
using namespace std;
bool isPrime (int);
int main() {
for(int i = 2; i<=21; i++){
if(isPrime(i)){
cout << i << " ";
cout << endl;}}}
bool isPrime(int n){
for(int i = 2; i<10; i++){
if(n%i==0){
return false;
}else{
return true;}}}
