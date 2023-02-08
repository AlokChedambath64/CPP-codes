#include <iostream>

using namespace std;

int main() {
    int n, a, b, c, d,e, f, g, h, i, j, k, l;
    do
    {
    cout << "How many numbers do you want to add?\n";
    cin >> n;
    }
    while (n<1||n>10);

    switch (n)
    {
        case 1:
        //scanf("%d", &a);
        cin >> a;
        //printf("%d", a);
        cout << a;
        break;
        case 2:
        //scanf("%d%d", &a,&b);
        cin >> a;
        cin >> b;
        //printf("%d", a+b);
        cout << a + b;
        break;
        case 3:
        //scanf("%d%d%d", &a,&b,&c);
        cin >> a;
        cin >> b;
        cin >> c;
        //printf("%d", a+b+c);
        cout << a + b + c;
        break;
        case 4:
        //scanf("%d%d%d%d", &a,&b,&c,&d);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        //printf("%d", a+b+c+d);
        cout << a + b + c +d;
        break;
        case 5:
        //scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        //printf("%d", a+b+c+d+e);
        cout << a + b + c + d + e;
        break;
        case 6:
        //scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
         cin >> a;
         cin >> b;
         cin >> c;
         cin >> d;
         cin >> e;
         cin >> f;
        //printf("%d", a+b+c+d+e+f);
        cout << a + b + c + d + e + f;
        break;
        case 7:
        //scanf("%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;
        cin >> g;
        //printf("%d", a+b+c+d+e+f+g);
        cout << a + b + c + d + e + f + g;
        break;
        case 8:
        //scanf("%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;
        cin >> g;
        cin >> h;
        //printf("%d", a+b+c+d+e+f+g+h);
        cout << a + b + c + d + e + f + g + h;
        break;
        case 9:
        //scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;
        cin >> g;
        cin >> h;
        cin >> i;
        //printf("%d", a+b+c+d+e+f+g+h+i);
        cout << a+b+c+d+e+f+g+h+i;
        break;
        case 10:
        //scanf("%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i);
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        cin >> f;
        cin >> g;
        cin >> h;
        cin >> i;
        cin >> j;
        //printf("%d", a+b+c+d+e+f+g+h+i);
        cout << a+b+c+d+e+f+g+h+i+j;
        break;
    }
}
