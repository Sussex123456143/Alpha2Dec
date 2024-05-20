#include <iostream>
#include "Alpha2Dec.h"

using namespace std;

int main(){
    cout << chartoInt('A') << endl;
    cout << chartoInt('Z') << endl;
    cout << stringtoInt("ABCD") << endl;
    cout << stringtoInt("WXYZ");
    return 0;
}