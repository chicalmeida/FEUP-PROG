#include <iostream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <climits>
#include <cmath>
#include <limits>

bool isPrime(int n){
    for(int i=2; i<sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}
using namespace std;

int main() {
    //1.1 ASCII value of a character
    char a;
    cin>>a;
    cout<<int(a);
    return 0;

    //1.2
    double a, b, c;
    double m, ma, mb, mc;
    cout<<"A ? ";
    cin>> a;
    cout<<"\nB ? ";
    cin>> b;
    cout<<"\nC ? ";
    cin>>c;
    m=(a+b+c)/3;
    ma=m-a;
    mb=m-b;
    mc=m-c;
    cout << "mean = "<<setprecision(5)<<m<<endl;
    cout << "A-mean = "<<setprecision(5)<<ma<<endl;
    cout << "B-mean = "<<setprecision(5)<<mb<<endl;
    cout << "C-mean = "<<setprecision(5)<<mc<<endl;

    //1.3
    double m, pi=3.14159, p, r;
    cout<<"p(kg/m^3) ?\t";
    cin >> p;
    cout << "\nr(m) ?\t";
    cin >> r;
    m=(pi*p*pow(r,3))*(4.0/3.0);
    cout << "\nm(kg) = "<<m<<endl;

    //1.4
    double a, b, c, d, e, f,x, y;
    cout << "a?";
    cin>>a;
    cout<<"\nb?";
    cin>>b;
    cout<<"\nc?";
    cin>>c;
    cout<<"\nd?";
    cin>>d;
    cout<<"\ne?";
    cin>>e;
    cout<<"\nf?";
    cin>>f;
    x = (c*e - b*f) / (a*e - b*d);
    y = (a*f - c*d) / (a*e - b*d);
    cout << "x= "<<x<<"\t y= "<<y;

    //1.5 a)
    int h, h1, h2, m, m1, m2, s, s1, s2;
    cin>>h1;
    cin>>m1;
    cin>>s1;
    cout<< endl;
    cin>>h2;
    cin>>m2;
    cin>>s2;
    h=h1+h2;
    m=m1+m2;
    s=s1+s2;
    cout<<"Time1 (hours minutes seconds)\t"<< h1<<" "<<m1<<" "<<s1<<endl;
    cout<<"Time2 (hours minutes seconds)\t"<< h2<<" "<<m2<<" "<<s2<<endl;
    if(s>60){
        m++;
        s%=60;
    }
    if(m>60){
        h++;
        m%=60;
    }
    if(h>=24){
        h%=24;
        cout<<"Time1 + Time2 = 1 dia "<<h<<" horas "<<m<<" minutos "<<s<<" segundos";
    }
    else{
        cout<<"Time1 + Time2 = "<<h<<" horas "<<m<<" minutos "<<s<<" segundos";
    }

    //1.5 b)
    string t1, t2;
    int h, h1, h2, m, m1, m2, s, s1, s2;
    cout << "Time1 (hours:minutes:seconds) ? ";
    cin >> t1;
    cout<<"\nTime2 (hours:minutes:seconds) ? ";
    cin >> t2;
    h1 = stoi(t1.substr(0,2));
    h2 = stoi(t2.substr(0,2));
    m1 = stoi(t1.substr(3,2));
    m2 = stoi(t2.substr(3,2));
    s1 = stoi(t1.substr(6,2));
    s2 = stoi(t2.substr(6,2));

    h=h1+h2;
    m=m1+m2;
    s=s1+s2;

    if(s>60){
        m++;
        s%=60;
    }
    if(m>60){
        h++;
        m%=60;
    }
    if(h>=24){
        h%=24;
        cout<<"Time1 + Time2 = 1 dia "<<h<<" horas "<<m<<" minutos "<<s<<" segundos";
    }
    else{
        cout<<"Time1 + Time2 = "<<h<<" horas "<<m<<" minutos "<<s<<" segundos";
    }

    //1.6 -> errado, provavelmente nas expressoes para calcular os lados
    double l1, l2, l3, x1, x2, x3, y1, y2, y3, s, a;
    cout << "Ponto 1: \n";
    cout << "x: ";
    cin >> x1;
    cout<<"\ny: ";
    cin>>y1;
    cout << "\nPonto 2: \n";
    cout << "x: ";
    cin >> x2;
    cout<<"\ny: ";
    cin>>y2;
    cout << "\nPonto 3: \n";
    cout << "x: ";
    cin >> x3;
    cout<<"\ny: ";
    cin>>y3;
    l1 = pow((pow(x2-x1,2)+pow(y2-y1,2)),1/2);
    l2 = pow((pow(x3-x1,2)+pow(y3-y1,2)),1/2);
    l3 = pow((pow(x2-x3,2)+pow(y2-y3,2)),1/2);
    s = (l1+l2+l3)/2;
    a = pow(s*(s-l1)*(s-l2)*(s-l3),1/2);
    cout<<"\nLado 1: "<<l1<<endl;
    cout<<"Lado 2: "<<l2<<endl;
    cout<<"Lado 3: "<<l3<<endl;
    cout<<"Area: "<<a;
}