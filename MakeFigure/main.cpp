#include <iostream>
#include "Pattern.h"


int main() {
    Pattern* pattern = new Pattern(11, 25);
    cout << pattern->getBiggerPattern() << endl;
    return 0;
}
