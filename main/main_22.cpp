//
// Created by 金琪 on 2021/7/27.
//

#include "../solve/sln22.h"
#include <iostream>

using namespace std;

int main() {
    auto ret = Solution().generateParenthesis_2(3);
    for (auto &str : ret) {
        cout << str << endl;
    }
}
