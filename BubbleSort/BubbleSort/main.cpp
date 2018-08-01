//
//  main.cpp
//  BubbleSort
//
//  Created by kidd on 2018/8/1.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    bool flag;// 表示本趟冒泡是否发生交换的标志
    for (int i = 0; i < n-1; i++) {
        flag = false;
        for (int j = n-1; j>i; j--) {
            if (arr[j-1] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                flag = true;
            }
        }
        if (flag == false) { // 本趟遍历后没有发生交换，说明表已经有序
            return;
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello,BubbleSort!\n";
    
    int a[] = {8,7,2,1,3,5,4,6};
    BubbleSort(a,8);
    for (int i = 0; i < 8; i++) {
        cout<< a[i] << " ";
    }
    return 0;
}
