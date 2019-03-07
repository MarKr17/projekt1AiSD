#include<iostream>
#include<ctime>
#include<cstdlib>
#include <cstdio>

using namespace std;
void generator(int tab1[], int tab2[], int tab3[], int tab4[], int tab5[]);
void print(int tab[]);
void rand(int tab[]);
void ascending(int tab[]);
void descending(int tab[]);
void constant(int tab[]);
void asc_desc(int tab[]);
//moje funkcje do zmiany
void swap(int* a, int* b);
void printArray(int tab[], int size);
void selectionSort(int tab[], int n);
int partition(int tab[], int low, int high);
void quickSort(int tab[], int low, int high);
//koniec moich funkcji* trzeba ich dodac do pliku
void insertion_sort(int tab[]);

int n = 0;
int main()
{
	srand(time(NULL));
	clock_t start, stop;
	double time;
	//GENEROWANIE CIAGOW
	cout << "Podaj ile elementowe maja byc ciagi: ";
	cin >> n;
	int *tab1 = new int[n]; int *tab2 = new int[n]; int *tab3 = new int[n]; int *tab4 = new int[n]; int *tab5 = new int[n];
	generator(tab1, tab2, tab3, tab4, tab5);
	//WYWOLYWANIE FUNKCJI
	/*np.
	print(tab1-5);
	insertion_sort(tab1-5);
	print(tab1-5);
	generator(tab1,tab2,tab3,tab4,tab5);   <-- zeby wygenerowac ciagi na nowo(nie byly posortowane)
	print(tab1-5);
	inny_sort(tab1-5);
	print(tab1-5);
		  ...
	*/
	//USTALENIE CZASU DZIALANIA ALGORYTMU

	//SelectionSort
	start = clock();
	selectionSort(tab1, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 1: " << time << "ms" << endl;
	delete[] tab1;
	selectionSort(tab2, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 2: " << time << "ms" << endl;
	delete[] tab2;
	selectionSort(tab3, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 3: " << time << "ms" << endl;
	delete[] tab3;
	selectionSort(tab4, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 4: " << time << "ms" << endl;
	delete[] tab4;
	selectionSort(tab5, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 5: " << time << "ms" << endl;
	delete[] tab5;


	generator(tab1, tab2, tab3, tab4, tab5);
	//QuickSort
	start = clock();
	quickSort(tab1, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 1: " << time << "ms" << endl;
	delete[] tab1;
	quickSort(tab2, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 2: " << time << "ms" << endl;
	delete[] tab2;
	quickSort(tab3, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 3: " << time << "ms" << endl;
	delete[] tab3;
	quickSort(tab4, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 4: " << time << "ms" << endl;
	delete[] tab4;
	quickSort(tab5, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu selectionSort 5: " << time << "ms" << endl;
	delete[] tab5;


	start = clock();

	insertion_sort(tab2);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu: " << time << "ms" << endl;
	delete[] tab1; delete[] tab2; delete[] tab3; delete[] tab4; delete[] tab5;
}


// function to swap two elements
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/* Function to print an array */
void printTab(int tab[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
}
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot (for QuickSort) */
int partition(int tab[], int low, int high)
{
	int pivot = tab[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (tab[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&tab[i], &tab[j]);
		}
	}
	swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
 tab[] --> Array to be sorted,
   low --> Starting index,
  high --> Ending index */
void quickSort(int tab[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, tab[x] is now
		   at right place */
		int pi = partition(tab, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(tab, low, pi - 1);
		quickSort(tab, pi + 1, high);
	}
}

void selectionSort(int tab[], int n)
{
	int counter = 0;
	while (counter < n)
	{
		int i = counter, j = counter, tmp = counter;
		while (j < n)
		{
			if (tab[i] <= tab[j])
			{
				j++;
			}
			else
			{
				tmp = j;
				i = j;
				j++;
			}
		}
		swap(&tab[counter], &tab[tmp]);
		counter++;
	}
}


void insertion_sort(int tab[])
{
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (j > 0 && tab[j - 1] > tab[j])
		{
			int tmp = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = tmp;
			j--;
		}
	}

}
void generator(int tab1[], int tab2[], int tab3[], int tab4[], int tab5[])
{
	rand(tab1);
	ascending(tab2);
	descending(tab3);
	constant(tab4);
	asc_desc(tab5);
}
void print(int tab[])
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl << endl;
}
void rand(int tab[])
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 100;
	}
}
void ascending(int tab[])
{
	int pom = 0;
	tab[0] = rand() % 100;
	for (int i = 1; i < n; i++)
	{
		pom = rand() % 10;
		tab[i] = tab[i - 1] + pom;
	}
}
void descending(int tab[])
{
	int pom = 0;
	tab[0] = rand() % 100;
	for (int i = 1; i < n; i++)
	{
		pom = rand() % 10;
		tab[i] = tab[i - 1] - pom;
	}
}
void constant(int tab[])
{
	int pom = rand() % 100;
	for (int i = 0; i < n; i++)
	{
		tab[i] = pom;
	}
}
void asc_desc(int tab[])
{
	int pom = 0;
	tab[0] = rand() % 100;
	for (int i = 1; i < n; i++)
	{
		pom = rand() % 10;
		if (i < n / 2)
			tab[i] = tab[i - 1] + pom;
		else
			tab[i] = tab[i - 1] - pom;
	}
}
