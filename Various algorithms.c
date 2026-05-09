//最大公約数関数
int Gcd(int x, int y) {
	int f = 0, tmp = 0;
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}f = x % y;
	while (f != 0)
	{
		x = y;
		y = f;
		f = x % y;
	}
	return y;
}
//最小公倍数関数
int Lcm(int x, int y) {
	int f = 0, tmp = 0,n=0;
	n = x * y;
	if (x > y) {
		tmp = x;
		x = y;
		y = tmp;
	}f = x % y;
	while (f != 0)
	{
		x = y;
		y = f;
		f = x % y;
	}
	return n/y;
}
//最大公約数関数(再帰関数)

int Gcd_recursion(int x, int y) {
	if (y == 0)return x;
	else return Gcd_recursion(y, x % y);
}
最小公倍数関数(再帰関数)


int Lcm_recursion(int x, int y) {;
	 return (x * y)/Gcd_recursion(x , y);
}
//フィボナッチ数列関数
int Fibonacci_number(int n) {
	int f=1,x=1,y=1;
		for (int i = 1; i < n; ++i)
		{
				f = x + y;
				x = y;
				y = f;
		}
		return f;


}
//フィボナッチ数列関数(再帰関数)


int Fibonacci_recursion(int n) {
	if (n == 1 || n == 2)return 1;
	else return Fibonacci_recursion(n - 2) + Fibonacci_recursion(n - 1);
}
//階乗関数
int Factorial(int n) {
	int x = 1;
	for (int i = 1; i <= n; ++i)
		x *= i;
	return x;
}
//階乗関数(再帰関数)


int Factorial_recursion(int n) {
	if (n <= 1)return 1;
	return n*Factorial_recursion(n - 1);
}
//ハノイの塔関数
void Hanoi_move(int no) {
		for (int k = 1 << no, n = 1; n < k; n++) {
			int a = (n - 1 & n) % 3 + 1, b = ((n - 1 | n) + 1) % 3 + 1;
			if (!(no & 1)) a > 1 && (a = 5 - a), b > 1 && (b = 5 - b);
			int i = 0;
			while ((n >> i & 1) == 0) i++;
			cout << "[" << i + 1 << "]" << a << "->" << b << endl;;
		}
	
}
//ハノイの塔関数(再帰関数)

void Hanoi_move_recursion(int no, int x, int y) {
    
        if (no > 1) Hanoi_move_recursion(no - 1, x, 6 - x - y);
        cout << "円盤[" << no << "]を" << x << "軸から" << y << "軸へ移動" << endl;
        if (no > 1) Hanoi_move_recursion(no - 1, 6 - x - y, y);
   
}
//素数表示関数
void Prime_number(int n) {
	bool b = false;
	for (int i = 2; i <= n; ++i)
	{
		b = false;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0) {
				b = true;
				break;
			}
		}
		if (b==false)
			cout << i << endl;
		
		
	}
}//素数判定関数(再帰関数)
int Prime_number_recursion(int n, int c)
{
    if (c == 1) {
        return 1;
    }
    else {
        if (n % c == 0) {
            return 0;
        }
        else {
            return Prime_number_recursion(n, c - 1);
        }
    }
}
