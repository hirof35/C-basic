#include <iostream>
#include<random>
using namespace std;
void main()
{
    random_device rd;   
    mt19937 gen(rd());  
    uniform_int_distribution<> dist(1, 6);
    int a, b=dist(gen);
    while (true) {
        mt19937 gen2(rd());
        uniform_int_distribution<> dist2(1, 6);
        int a, b = dist2(gen2);
        cout << "数当てゲーム開始(1から6まで入力してください。):";
        cin >> a;
        if (a == b) {
            cout << "正解" << endl;
            cout << "a=" << a << "でした。" << endl;
            cout << "b=" << b << "でした。" << endl;
            break;
        }
        else if (a > b) {
            cout << "不正解" << endl;
            cout << "a=" << a << "のほうが大きい" << endl;
            cout << "a=" << a << "でした。" << endl;
            cout << "b=" << b << "でした。" << endl;
        }
        else if (a < b) {
            cout << "不正解" << endl;
            cout << "b=" << b << "のほうが大きい" << endl;
            cout << "a=" << a << "でした。" << endl;
            cout << "b=" << b << "でした。" << endl;
        }
        else {
            cout << "不正解" << endl;
            cout << "a=" << a << "でした。" << endl;
            cout << "b=" << b << "でした。" << endl;
        }
    }
}

