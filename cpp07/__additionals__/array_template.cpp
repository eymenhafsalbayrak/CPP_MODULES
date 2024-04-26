// C++ Program to implement
// template Array class
#include <iostream>
using namespace std;

template <typename T> class Array {
private:
	T* ptr;
	int size;

public:
	Array(T arr[], int s);
	void print();
};

template <typename T> Array<T>::Array(T arr[], int s)
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
	for (int i = 0; i < size; i++)
		cout << " " << *(ptr + i);
	cout << endl;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	Array<int> a(arr, 5);
	a.print();
	return 0;
}


/*
            *(ptr + i);

*(ptr + i) ifadesi, ptr işaretçisi üzerindeki i indisli elemanın değerine erişmek için kullanılır. 
Burada ptr bir işaretçidir ve i indis, ptr'nin gösterdiği dizinin elemanları arasında gezinmek için kullanılır.

C++ dilinde, bir diziye işaretçi aracılığıyla erişmek için birkaç farklı yol vardır.
 ptr[i] ve *(ptr + i) ifadeleri aynı işlevi görür. 
 İkincisi, işaretçi aritmetiği kullanarak yapılan bir işaretleme biçimidir. 
 ptr işaretçisi zaten dizinin başlangıcını gösterir ve 
 i indis değeriyle ptr'nin adresinden i eleman ilerleyerek, dizinin i indisli elemanına erişilir. 
 Sonra * operatörü ile o elemanın değeri alınır.

Yani, *(ptr + i) ifadesi, ptr işaretçisinin gösterdiği dizi içindeki i indisli elemanın değerine 
erişmek için kullanılır.

*/