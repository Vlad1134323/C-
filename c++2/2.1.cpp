#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int matrix[10][10] = {};
int Counter = 0;
srand(time(NULL));
for(int i=0; i<10; i++){
for(int j=0; j<10; j++){
*(*(matrix + i) + j) = rand()%100+1;}}
for(int i=0; i<10; i++){
for(int j=0; j<10; j++){
cout.width(6);
cout << matrix[i][j];
if (j==9){
cout << "\n";}}}
cout << "\n";
cout << "Елементи головної діагоналі:\n";
for(int i=0; i<10; i++){
cout << *(*(matrix + i) + i) << ", ";}
cout << "\n";
cout << "Елементи побічної діагоналі:\n";
for(int i=9, j=0; i>=0; i--){
cout << *(*(matrix + i) + j) << ", ";j++;}
cout << "\n";
cout << "Кількість парних елементів масиву: ";
for(int i=0; i<10; i++){
for(int j=0; j<10; j++){
if(*(*(matrix + i) + j) % 2 == 0){
Counter++;}}}
cout << Counter << "\n";
Counter = 0;
cout << "Кількість непарних елементів масиву: ";
for(int i=0; i<10; i++){
for(int j=0; j<10; j++){
if(*(*(matrix + i) + j) % 2 == 1){
Counter++;}}}
cout << Counter << "\n";}