//
//  CodingDojang_466.cpp
//  DataStructure_prcts
//
//  Created by Pablo coco on 2015. 7. 16..
//  Copyright (c) 2015년 Pablo coco. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


int fac(int n){
    if (n == 0)
        return 1;
    return n * fac(n-1);
}

int ifTen(int m){
    int t = m;
    int count = 0;
    while(1){
        if(t % 10 != 0)
            break;
        else{
            t = t / 10;
            count++;
        }
    }
    return count;
}

int main(void){
    int k = fac(10);
    cout<<fac(10)<<endl;
    cout<<ifTen(k)<<endl;
    return 0;
}