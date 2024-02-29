#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int RandomArray(int tab[], int n){
	srand(time(0));
	for (int i=0; i < n; i++)
		tab[i] = rand() % 100; 
	return 0;
}

int Print(int tab[], int n){
	for (int i=0; i < n; i++)
	cout<<tab[i]<<" ";
	cout<<endl;

 return 0;
}

int SelectSort(int tab[], int n){
int k=0;
int min=0;
int licznik=0;
for(int i=0;i<n-1;i++){

min = tab[i];
for(int j=i+1;j<n;j++){

licznik++;
if(tab[j] < min){
	min=tab[j];
	k=j;
}
}
swap(tab[i],tab[k]);
}
cout<<"Liczba porownan: " <<licznik<<endl;
}

int Przewid(int n){
return n*(n-1)/2;
}
int main ( ) {
	const int N=50, M=70, K=100;
	int T[N], TM[M], TK[K];

	RandomArray(T, N);
	cout<<"Tablica przed sortowaniem:"<<endl;
	Print(T, N);
	SelectSort(T, N);
	cout<<"Tablica posortowana:"<<endl;
	Print(T, N);
	cout<<"Liczba przewidywana: " <<Przewid(N) << endl;
	
	RandomArray(TM, M);
	cout<<"Tablica przed sortowaniem:"<<endl;
	Print(TM, M);
	SelectSort(TM, M);
	cout<<"Tablica posortowana:"<<endl;
	Print(TM, M);
	cout<<"Liczba przewidywana: " <<Przewid(M)<< endl;
	
	RandomArray(TK, K);
	cout<<"Tablica przed sortowaniem:"<<endl;
	Print(TK, K);
	SelectSort(TK, K);
	cout<<"Tablica posortowana:"<<endl;
	Print(TK, K);
	cout<<"Liczba przewidywana: " <<Przewid(K) << endl;
	

}
 
