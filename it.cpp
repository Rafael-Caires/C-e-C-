#include <iostream>
#include <list>

using namespace std;

void imprimir (list<string> &v){
    list<string>::iterator it;
    for (it=v.begin(); it != v.end();it++){
        cout << *it;
    }
}   

int main(){
    list <string> q;
    q.push_back("a");
    q.push_back("b");
    q.push_back("c");
    cout << q.front()<< q.back() << endl;
    imprimir(q);
    
    return 0;
}