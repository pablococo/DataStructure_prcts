////
////  SelfNumber.cpp
////  DataStructure_prcts
////
////  Created by Pablo coco on 2015. 7. 9..
////  Copyright (c) 2015년 Pablo coco. All rights reserved.
////
//
//#include <iostream>
//
//using namespace std;
//
//static const int N = 5000;
//
//int d(int n)
//{
//    int res = n;
//    while (n != 0) {
//        res += n % 10;
//        n /= 10;
//    }
//    return res;
//}
//
//int main()
//{
//    bool isSelfNo[N + 1];
//    for (int i = 0; i <= N; i++) isSelfNo[i] = true;
//    int sumOfSelfNo = 0;
//    int n = 1;
//    while (n <= N)
//    {
//        if (isSelfNo[n]) sumOfSelfNo += n;
//        int _d = d(n);
//        if (_d <= N) isSelfNo[_d] = false;
//        n++;
//    }
//    cout << sumOfSelfNo << endl;
//}