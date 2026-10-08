#include <iostream>
using namespace std;

int main() {
    string width = " ";
    string head = "/\\";
    string bottom = "--";
    string extend;
    cout << head << endl;
    for (int n = 0; n <= 20 ; n++){
        extend = "/"+ width + "\\";
        cout << extend <<endl;
        width += " ";
        bottom += "-";
    }
    cout << bottom;
}