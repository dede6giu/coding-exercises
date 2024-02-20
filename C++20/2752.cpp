#include <iostream>
using namespace std;

int main() {
    const char var[50] = {"AMO FAZER EXERCICIO NO URI"};

    cout << "<";
    printf("%s",var);
    cout << ">" << "\n";

    cout << "<";
    printf("%30s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%.20s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%-20s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%-30s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%.30s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%30.20s", var);
    cout << ">" << "\n";
    
    cout << "<";
    printf("%-30.20s", var);
    cout << ">" << "\n";
    
    return 0;
}