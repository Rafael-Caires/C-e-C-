#include <map>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{   string s;
    stringstream ss;
    getline(cin,s);
    ss << s;
    map<string, int> count;
    string palavra;
    map<string, int>::iterator ocorrencia;
    while (ss >> palavra)
    {
        map<string, int>::iterator itr = count.emplace(palavra, 0).first;
        ++itr->second;
        if (count.size() == 1 || itr->second > ocorrencia->second)
            ocorrencia = itr;
    }
    
    cout << ocorrencia->first << endl;

}