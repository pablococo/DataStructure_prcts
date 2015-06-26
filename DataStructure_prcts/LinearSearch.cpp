//
//  LinearSearch.cpp
//  DataStructure_prcts
//
//  Created by Pablo coco on 2015. 6. 26..
//  Copyright (c) 2015년 Pablo coco. All rights reserved.
//

#include <iostream>
using namespace std;

int LinearSearch(int ar[], int len, int target){
    int first = 0;
    int last = len - 1;
    for (int i = first; i < last; i++) {
        if (ar[i] == target) {
            return i;
        }
    }

    return -1;
}

int main(void){
    int ar[] = {1, 3, 5, 6, 7, 8, 10, 11, 12, 13};
    int idx;
    
    idx = LinearSearch(ar, sizeof(ar)/sizeof(int), 4);
    if (idx == -1)
        cout<<"탐색 실패"<<endl;
    else
        cout<<"저장된 인덱스 "<<3<<"의 위치: "<<idx<<endl;
    return 0;
}
