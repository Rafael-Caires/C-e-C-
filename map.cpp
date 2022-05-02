#include <iostream>
#include <map>
#include <string>
/*  conjunto não tem noção de ordem, conjunto não tem repetição

*/
using namespace std;

void Imprimir(map<string, int>&v){
    map<string,int>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
            }

}




int main(){
    string s;
    stringstream ss;
    getline(cin,s);
    ss << s;
    map<string, int> count;
    string palavra;
    map<string, int>::iterator ocorrencia;
    while (ss >> palavra)
    Imprimir(count);
    return 0;
}