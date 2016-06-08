//
//  Header.h
//  leetcode_136
//
//  Created by 王青龙 on 6/8/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums){
        int result = 0;
        for (int i=0; i<nums.size(); ++i) {
            result ^= nums[i];
        }
        return result;
    }
};


#endif /* Header_h */
