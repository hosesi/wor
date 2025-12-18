#include <iostream>
#include<cmath>
using namespace std;
int jamarr(int arr[], int n){
    int jam= 0;
    for(int i = 0; i< n; i++){
        jam+= arr[i];
    }
    return jam;
}


int bmm(int x,int y)
 {
    int temp=x, temp2=y;
    int result=1;
    int min=y;

    if(y>x) {min=x;}
    
    for (int i = 2; i <= min; i++)
    {
        int counter = 0;
        while (temp % i == 0 && temp2 % i == 0)
        {
            temp/=i;
            temp2/=i;
            counter++;
        }

        for (int j = 0; j < counter; j++)
            {result*=i;}
    }
    return result;
}

int kmm(int x, int y)
{
    return x*y/bmm(x,y);
}

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

int tafrigharr(int arr[], int n){
    int tafrigh = arr[0];
    for (int i = 1; i< n; i++){
        tafrigh -= arr[i];
    }
    return tafrigh;
}

int zarbarr(int arr[] , int n){
    int zarb = 1;
    for(int i = 0; i< n; i++){
        zarb*= arr[i];
    }
    return zarb;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}


int entekhab(int k , int n){
return factorial(n)/(factorial(n-k)*factorial(k));
}
int main(){
 cout<<"1.جمع"<<endl<<"2.تفریق"<<endl<<"3.ضرب"<<endl<<"4.حل معادله"<<endl<<"5.ب.م.م"<<endl<<"6.ک.م.م"<<endl<<"7.انتخاب n از k";
 int x,n,numbers[10000],y;
 double a,b,c;
 
 do{
    cout<<"لطفا عدد مناسب وارد کنید";
cin>>x;

 }while (x>8||x<1);
 if(x==1) cout<<jamarr(numbers,n);
 else if(x==2) cout<<tafrigharr(numbers,n);  
 else if(x==3) cout<<zarbarr(numbers,n);
 else if(x==4) {
    cout<<"لطفا درجه معادله را وارد کنید";
    do{
    cout<<"لطفا عدد مناسب وارد کنید";
cin>>y;

 }while (y!=2||y!=1);
if(y==1) {cout<<"لطفا ضرایب معادله را وارد کنید";
cin>>a>>b;
first_degree_equation(a,b);
}
else if(y==2){
    cout<<"لطفا ضرایب معادله را وارد کنید";
cin>>a>>b>>c;
second_degree_equation(a,b,c);
}
 }
else if(x==5) {cout<<"اعداد را وارد کنید";
cin>>a>>b;
cout<<bmm(a,b);}
else if(x==6) {cout<<"اعداد را وارد کنید";
cin>>a>>b;
cout<<kmm(a,b);}
else if(x==7) {cout<<"اعداد را وارد کنید";
cin>>a>>b;
cout<<entekhab(a,b);}
}