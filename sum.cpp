//
//  main.cpp
//  sum
//
//  Created by Nasiba Alimova on 01/11/22.
//

#include <iostream>
using namespace std;

int main (){
    
    int a, b, c;
    cin>> a >> b >> c;
    if(a+b==c || a+c == b || c+b==a){
        cout << "YES";
    }else{
        cout << "NO";
    }
    cout << endl;
    return 0;
    
}

