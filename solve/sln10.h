//
// Created by 金琪 on 2021/7/22.
//
#pragma once
#include <string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        return isMatch(s, p, 0, 0, s.size(), p.size());
    }

    bool isMatch(string s, string p, int index1, int index2, int size1, int size2) {
        if (index1 == size1 && index2 == size2)
            return true;
        // heap-buf-overflow...可能是这里错了?
        if (index2 < size2 - 1 && p[index2 + 1] == '*') {
            if (isMatch(s, p, index1, index2 + 2, size1, size2))
                return true;
            while ((s[index1] == p[index2] || p[index2] == '.' ) && index1 < size1) {
                if (isMatch(s, p, index1 + 1, index2 + 2, size1, size2))
                    return true;
                index1++;
            }
        }
        else if (s[index1] == p[index2] || p[index2] == '.')
            return isMatch(s, p, index1 + 1, index2 + 1, size1, size2);
        return false;
    }
};