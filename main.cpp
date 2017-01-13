#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

#include "obj.h"
#include "read.h"
#include "ast.h"

using namespace std;

int main() {
    string src = "(+ 3 5)";
    unsigned long p = 0;
    Obj o = read(p, src);  
    cout << o.toString() << endl;

    AST *ast = objToAst(o);
    cout << ast->toString() << endl;

    string in = "";
    while(true) {
        getline(cin, in);
        if(in == "exit") break;
        unsigned long p = 0;
        cout << read(p, in).toString() << endl;
    }
}