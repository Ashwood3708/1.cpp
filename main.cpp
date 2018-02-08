/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Abdul
 *
 * Created on February 5, 2018, 12:21 PM
 */

#include <iostream>
#include <stdlib.h>
#include<string>
using namespace std;

/*
 * 
 */


int gcd(int m, int n){
    if(n == 0){
        if(m>1)
            m = 0;
        return m;
    }
    return gcd(n,m%n);
}






int main(int argc, char** argv) {
    int x;
    cout << "Enter size of graph _";
    cin>>x;
    cout << endl;
    int a[x][x];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if(i==0 || j==0){
            a[i][j] = 0;
            }else{
            a[i][j] = gcd(i,j);
            }
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }



    



    return 0;
}

