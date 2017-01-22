//
//  main.cpp
//  Assignment 4
//
//  Created by Aman Lohia on 2014-05-25.
//  Copyright (c) 2014 Aman Lohia. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of inputs: ";
    cin >> n;
    double maxvol=0;
    for(int k=0;k<n;k++)
    {
        double l, b;
        double volmax=0;
        
        do{
        cout << "\nPlease input valid length of the sheet: ";
        cin >> l;
        cout << "Please input valid breath of the sheet: ";
        cin >> b;
        cout<<endl;
        if(b<0 || l<0)
            cout<<"INVALID ENTRY\n";}
        while(b<0 || l<0);
        
        double smaller=0;
        
        if(b>l)
            smaller=l;
        else
            smaller=b;
        
        for(double i=0.001; i<smaller/2;i+=0.001)
        {
            double vol=(l-2*i)*(b-2*i)*i;
            if(vol>volmax)
            volmax=vol;
        }
            
        cout<<"The largest possible volume for this box is ";
        cout<<fixed<<setprecision(2)<<volmax<<endl;
        
        if(volmax>maxvol)
            maxvol=volmax;
        
    }
    
    cout << "\nLargest volume amongst all the boxes is "<<maxvol<<endl;
    return 0;

}
