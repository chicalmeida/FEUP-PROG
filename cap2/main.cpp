#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <climits>
#include <cmath>
#include <limits>

using namespace std;

bool isPrime(int n){
    for(int i=2; i<sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}

int main() {
    //2.1
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
    if(isinf(x) || isinf(y)){
        cout << "Impossible system"<<endl;
    }
    else if(x != x || y != y){
        cout<< "Inconsistent system"<<endl;
    }
    else{
        cout<<"x= "<<x<<endl<<" y= "<<y<<endl;
    }

    //2.2a
    double max = -99999999999999999, min = 99999999999999999;
    double n;
    cout<<"Enter three numbers: "<< endl;
    for(int i = 1; i<=3; i++){
        cin>>n;
        if(n>max){
            max = n;
        }
        else if(n<min){
            min = n;
        }
    }
    cout << "Max: "<<max<<endl<<"Min: "<<min<<endl;

    //2.2b
    float a, b, c;
    float max, middle, min;
    cout << "Write three numbers: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        max = a;
        if (b > c) {
            min = c;
            middle = b;
        } else {
            min = b;
            middle = c;
        }
    }
    else if (b > a && b > c) {
        max = b;
        if (a > c) {
            min = c;
            middle = a;
        } else {
            min = a;
            middle = c;
        }
    }
    else if (c > b && c > a) {
        max = c;
        if (b > a) {
            min = a;
            middle = b;
        } else {
            min = b;
            middle = a;
        }
    }
    cout << max << " > " << middle << " > " << min;

    //2.2c
    double max = 0, min = 99999;
    double n, mid;
    bool valid = true;  // help with negative number validating
    cout << "Enter 3 numbers: " << endl;
    for (int i = 1; i <= 3; i++) {
        cin >> n;
        while (!cin) {
            cin.clear();
            cin.ignore(9999, '\n');
            cout << "Invalid input! Try again." << endl;
            cin >> n;
        }
        if (n < 0) {
            valid = false;
            break;
        }
        if (n > max) {
            max = n;
        }
        else if (n < min) {
            min = n;
        }
        else {
            mid = n;
        }
    }
    if (mid + min >= max && valid) {
        cout << "Possible" << endl;
    }
    else if (valid) {
        cout << "Not possible" << endl;
    }
    else {
        cout << "Invalid input (negative number)" << endl;
    }

    //2.3
    int a, b;
    cout<<"Insert an integer:"<<endl;
    cin>>a;
    cout<<"insert another integer: "<<endl;
    cin>>b;
    if(a+b>INT_MAX){
        cout<<"sum overflow"<<endl;
    }
    else if(a+b<INT_MIN){
        cout<<"sum underflow"<<endl;
    }
    else{
        cout<<a+b;
    }

    //2.4
    double weight;
    double cost = 0;
    int count = 0;
    cout<<"insert weigth(grams): "<<endl;
    cin >> weight;
    if (weight<=500){
        cost = 5;
    }
    else if(weight>=501 && weight<=1000){
        count = (weight-500)/100;
        cost = 5 +1.5*count;
    }
    else if(weight>1000){
        count = (weight-1000)/250;
        cost = 12.5+5*count;
    }
    cout<<"The final cost is: "<<cost<<endl;

    //2.5
    double a,b,c;
    cout<<"Solution of Ax^2 + Bx + C = 0"<<endl;
    cout<<"Insert the coefficients (A B C): ";
    cin>>a>>b>>c;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta == 0)
        cout << "The equation has 2 equal real roots: " << -b / (2 * a) << endl;
    else if (delta > 0)
        cout << "The equation has 2 different real roots: " << (-b + sqrt(delta)) / (2 * a) << " and " << (-b - sqrt(delta)) / (2 * a) << endl;
    else
        cout << "The equation has 2 complex roots: " << -b / (2 * a) << " + " << sqrt(-delta) / (2 * a) << "i and " << -b / (2 * a)
             << " - " << sqrt(-delta) / (2 * a) << "i" << endl;

    //2.6
    double n, q, j;
    double total;
    cout<<"Insert the amount of the first deposit: ";
    cin>>q; cout<<endl;
    cout<<"How long have you created the account?(In years): ";
    cin>>n; cout<<endl;
    cout<<"Insert the interest rate(in percentage): ";
    cin>>j; cout<<endl;
    for(int i =0; i<n; i++){
        total = q*(j/100);
        q+=total;
    }
    cout<<"The amount is: "<<q<<endl;
    //or
    total= q * pow((1 + (j/100)), n);
    cout<<"The amount is: "<<total<<endl;

    //2.7a
    int p;
    cout<<"Insert an integer: ";
    cin>>p;
    for(int i=2; i<sqrt(p); i++){
        if(p%i == 0){
            cout<<"The number is not prime";
            break;
        }
        else{
            cout<<"The number is prime";
            break;
        }
    }

    //2.7b
    int d;
    for (int i = 2; i < 1000; i++) {
        for (d = 2; d <= sqrt(i); d++) {
            if (i % d == 0) {
                break;
            }
        }
        if (d > sqrt(i)) {
            cout << i << endl;
        }
    }

    //2.7c
    int primesFound = 0;
    int c = 2;
    while(primesFound<=100){
        if(isPrime(c)){
            cout<<c<<endl;
            primesFound++;
        }
        c++;
    }

    //2.8
    cout << "ang" << setw(10) << "sin" << setw(10) << "cos" << setw(10) << "tan" << endl;
    for(int i=0; i<=90;i+=15) {
        if (i == 90) {
            cout << i << setw(10) << 1 << setw(10) << 0 << setw(10) << std::numeric_limits<double>::infinity();
        }
        else {
            cout << i << setw(10) << sin(i * M_PI / 180) << setw(10) << cos(i * M_PI / 180) << setw(10)
                 << tan(i * M_PI / 180) << endl;
        }
    }

    //2.9a
    int a, b, c;
    cout<<"Insert a 3 digit number:\t";
    cin>>a;
    b = a%10;
    a=a/10;
    c=a/10;
    if(b==c){
        cout<<"Your number is a palindrome";
    }
    else{
        cout<<"Your number is not a palindrome";
    }


}
