//
//  main.cpp
//  fib
//
//  Created by Nasiba Alimova on 01/11/22.
//

#include <iostream>
using namespace std;

int main (){
    
    int num, num1=1, num2=1, next= 0;
    cin>> num;
    if ((num == 1) || (num == 2)) next = 1;
    for (int i=2;  i<num;  i++){
        
        next = num1+num2;
        num1 = num2;
        num2 = next;
    }
    cout << next << endl;
    return 0;
    
}
