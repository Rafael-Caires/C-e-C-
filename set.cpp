#include <iostream>
#include <set>
#include <string>
/*  conjunto não tem noção de ordem, conjunto não tem repetição

*/
using namespace std;

void Imprimir(set<string>&v){
    set<string>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

}




int main(){
    set<string> s;
    string nome;
    while(cin>>nome){
    s.insert(nome);
    }
    Imprimir(s);
    return 0;
}