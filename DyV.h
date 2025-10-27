#include<iostream>
#include<vector>
using namespace std;

template<typename T>
int BusquedaBinaria(T x, vector<T> v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini+fin)/2;
	if(v[medio] == x){
		return medio;
	}else if(v[medio] > x){
		return BusquedaBinaria (x, v, ini, medio-1);
	}else{
		return BusquedaBinaria(x, v, medio+1, fin);
	}
}

template<typename T>
int BusquedaBinaria_INV(T x, vector<T> v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini+fin)/2;
	if(v[medio] == x){
		return medio;
	}else if(v[medio] < x){
		return BusquedaBinaria (x, v, ini, medio-1);
	}else{
		return BusquedaBinaria(x, v, medio+1, fin);
	}
}

template<typename T>
int Partition( vector<T> &vect, int ini, int fin){
	T x = vect[fin];
	int i = ini;
	T aux;
	for(int j = ini; j<fin-1; j++){
		if(vect[j] <= x){
			aux = vect[j];
			vect[j] = vect[i];
			vect[i] = aux;
			i++;
		}	
	}
	aux = vect[fin];
	vect[fin] = vect[i];
	vect[i] = aux;
	return i;	
}

template<typename T>
int QuickSort( vector<T> &vect, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(vect, ini, fin);
		QuickSort(vect, ini, pivot-1);
		QuickSort(vect, pivot+1);
	}else{
		return -1;
	}
}


