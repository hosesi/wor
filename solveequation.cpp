#include<iostream>
#include<cmath>
using namespace std;
void first_degree_equation(double a, double b){
    if(a==0){
        if(b==0) cout<<"Infinite solutions"<<endl;
        else cout<<"No Answer"<<endl;
    }
    else cout<<-(b/a)<<endl;
}
void second_degree_equation(double a,double b, double c){
double delta=pow(b,2)-4*a*c;
if(delta<0) cout<<"No Answer"<<endl; 
else if(delta==0) cout<<-(b/(2*a))<<endl;
else if(delta>0) cout<<(-b+sqrt(delta))/(2*a)<<" "<<(-b-sqrt(delta))/(2*a)<<endl;
}