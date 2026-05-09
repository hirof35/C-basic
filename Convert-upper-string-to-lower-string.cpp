#include<iostream>
#include<cctype>
using namespace std;
char* StrToLower(char* s);
char* StrToUpper(char* s);


/* 文字列中の英大文字を小文字に変換 */
char* StrToLower(char* s)
{
    char* p;                     /* 作業用ポインタ */
    /* for (  )ループの初期化の式で、pは文字列の
       先頭アドレスを指すように初期化される */
    for (p = s; *p; p++)         /* pがヌルでなければ */
        *p = tolower(*p);        /* pの指す中身を小文字に変換 */
    return (s);                  /* 文字列の先頭アドレスを返す */
}

/* 文字列中の英小文字を大文字に変換 */
char* StrToUpper(char* s)
{
    char* p;                     /* 作業用ポインタ */
    /* for (  )ループの初期化の式で、pは文字列の
       先頭アドレスを指すように初期化される */
    for (p = s; *p; p++)         /* pがヌルでなければ */
        *p = toupper(*p);        /* pの指す中身を大文字に変換 */
    return (s);                  /* 文字列の先頭アドレスを返す */
}

void main(void)
{
    char str[256];
    cin >> str;

    cout << "str1:" << str << endl;;        /* 小文字に変換 */
    cout << "StrToLower(str):" << StrToLower(str) << endl;

    cout<<"str2:"<<str<<endl;        /* 大文字に変換 */
    cout<<"StrToUpper(str):"<<StrToUpper(str)<<endl;
}
