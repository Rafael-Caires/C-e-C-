#include <iostream>
#include <string>

using namespace std;
int main(){
    string palavra;
    string vogais = "aeiou";
    int totalA = 0;
    int totalE = 0;
    int totalI = 0;
    int totalO = 0;
    int totalU = 0;
cout << "Digite uma palavra: ";
cin >> palavra;

for( int i = 0; i < vogais.size(); i++){
    for(int k=0; k< palavra.size(); k++) {
        if(vogais[i] == palavra[k]){
           if (palavra[k] == 'a'){
               totalA++;}
             if (palavra[k] == 'e'){
               totalE++;}
               if (palavra[k] == 'i'){
               totalI++;}
               if (palavra[k] == 'o'){
               totalO++;}
               if (palavra[k] == 'u'){
               totalU++;}}}}
               
if (totalA != 0)
{cout << " a " << totalA << endl;}
if (totalE != 0)
{cout << " e " << totalE << endl;}
if (totalI != 0)
{cout << " i " << totalI << endl;}
if (totalO != 0)
{cout << " o " << totalO << endl;}
if (totalU != 0)
{cout << " u " << totalU << endl;}

    return 0;
}