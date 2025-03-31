#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int multiplying(short a, short b) //a times b
{
    return a*b;
}

short rest(short a, short b) //how much is left after you divide a by b
{
    return a%b;
}

short sum(short a, short b) //a plus b
{
    return a+b;
}

short difference(short a, short b) //absolute value of a minus b
{
    int w=a-b;
    return(w<0?-w:w);
}

int greatestcommondivisor(int a, int b) //the biggest number you can divide both a and b with
{
    int x;
    while (b>0)
    {
        x=b;
        b=a%b;
        a=x;
    }
    return a;
}

int main()
{
    short l, w, w2;
    srand(time(NULL));
    short number1=rand()%100, number2=rand()%100; //getting random number 1 and 2 and making both of them lower than 100
    cout << "choose the function: \n";
    cout << "[0] - addition \n";
    cout << "[1] - the remainder of dividing the first number by the second \n";
    cout << "[2] - absolute difference \n";
    cout << "[3] - multiplication \n";
    cout << "[4] - greatest common divisor \n";
    cin >> l;

    switch (l)
    {
    case 0:
        cout<<"the drawn numbers are: "<<number1<<" i "<<number2<<endl;
        w=sum(number1,number2);
        cout<<"enter the answer: "; cin>>w2;
        if(w==w2)
            cout<<w2<<" is the correct answer";
        else
            cout<<w2<<" is not the correct answer\nthe correct answer is: "<<w;
        break;
    case 1:
        cout<<"the drawn numbers are: "<<number1<<" and "<<number2<<endl;
        w=rest(number1,number2);
        cout<<"enter the answer: "; cin>>w2;
        if(w==w2)
            cout<<w2<<" is the correct answer";
        else
            cout<<w2<<" is not the correct answer\nthe correct answer is: "<<w;

        break;
    case 2:
        cout<<"the drawn numbers are: "<<number1<<" and "<<number2<<endl;
        w=difference(number1,number2);
        cout<<"enter the answer: "; cin>>w2;
        if(w==w2)
            cout<<w2<<" is the correct answer";
        else
            cout<<w2<<" is not the correct answer\nthe correct answer is: "<<w;

        break;
    case 3:
        cout<<"the drawn numbers are: "<<number1<<" and "<<number2<<endl;
        w=multiplying(number1,number2);
        cout<<"enter the answer: "; cin>>w2;
        if(w==w2)
            cout<<w2<<" is the correct answer";
        else
            cout<<w2<<" is not the correct answer\nthe correct answer is: "<<w;

        break;
    case 4:
        cout<<"the drawn numbers are: "<<number1<<" and "<<number2<<endl;
        w=greatestcommondivisor(number1,number2);
        cout<<"enter the answer: "; cin>>w2;
        if(w==w2)
            cout<<w2<<" is the correct answer";
        else
            cout<<w2<<" is not the correct answer\nthe correct answer is: "<<w;

        break;
    }

    return 0;
}
