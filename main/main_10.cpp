//
// Created by 金琪 on 2021/7/22.
//
#include <iostream>
#include "../solve/sln10.h"

using namespace std;

int main() {
    string s("bccbbabcaccacbcacaa");
    string p(".*b.*c*.*.*.c*a*.c");
    bool ret = Solution().isMatch(s, p);
    cout << ret << endl;
    return 0;
}

