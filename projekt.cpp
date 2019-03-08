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
void ShellSort(int tab[],int n);
void HeapSort(int tab[],int n);
void heapify(int tab[],int n, int i);

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
	//SelectionSort
	start = clock();
	selectionSort(tab1, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 1: " << time << "ms" << endl;
	start = clock();
	selectionSort(tab2, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 2: " << time << "ms" << endl;
	start = clock();
	selectionSort(tab3, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 3: " << time << "ms" << endl;
	start = clock();
	selectionSort(tab4, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 4: " << time << "ms" << endl;
	start = clock();
	selectionSort(tab5, n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu SelectionSort 5: " << time << "ms" << endl;


	generator(tab1, tab2, tab3, tab4, tab5);
	//QuickSort
	start = clock();
	quickSort(tab1, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 1: " << time << "ms" << endl;
	start = clock();
	quickSort(tab2, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 2: " << time << "ms" << endl;
	start = clock();
	quickSort(tab3, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 3: " << time << "ms" << endl;
	start = clock();
	quickSort(tab4, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 4: " << time << "ms" << endl;
	start = clock();
	quickSort(tab5, 0, n - 1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu QuickSort 5: " << time << "ms" << endl;



    generator(tab1, tab2, tab3, tab4, tab5);
    //insertion_sort
	start = clock();
	insertion_sort(tab1);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu insertion_sort 1: " << time << "ms" << endl;
	start = clock();
	insertion_sort(tab2);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu insertion_sort 2: " << time << "ms" << endl;
	start = clock();
	insertion_sort(tab3);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu insertion_sort 3: " << time << "ms" << endl;
	start = clock();
	insertion_sort(tab4);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu insertion_sort 4: " << time << "ms" << endl;
	start = clock();
	insertion_sort(tab5);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu insertion_sort 5: " << time << "ms" << endl;


	generator(tab1, tab2, tab3, tab4, tab5);
	//ShellSort
	start = clock();
	ShellSort(tab1,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu ShellSort 1: " << time << "ms" << endl;
	start = clock();
	ShellSort(tab2,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu ShellSort 2: " << time << "ms" << endl;
	start = clock();
	ShellSort(tab3,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu ShellSort 3: " << time << "ms" << endl;
	start = clock();
	ShellSort(tab4,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu ShellSort 4: " << time << "ms" << endl;
	start = clock();
	ShellSort(tab5,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu ShellSort 5: " << time << "ms" << endl;


	generator(tab1, tab2, tab3, tab4, tab5);
	//HEAPSORT
	start = clock();
	HeapSort(tab1,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu HeapSort 1: " << time << "ms" << endl;
    start = clock();
	HeapSort(tab2,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu HeapSort 2: " << time << "ms" << endl;
    start = clock();
	HeapSort(tab3,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu HeapSort 3: " << time << "ms" << endl;
	start = clock();
	HeapSort(tab4,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu HeapSort 4: " << time << "ms" << endl;
	start = clock();
	HeapSort(tab5,n);
	stop = clock();
	time = (double)(stop - start);
	cout << endl << "Czas wykonywania algorytmu HeapSort 5: " << time << "ms" << endl;


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
void ShellSort(int tab[],int n)
{
     for (int gap = n/2; gap > 0; gap /= 2)
    {

        for (int i = gap; i < n; i += 1)
        {

            int temp = tab[i];


            int j;
            for (j = i; j >= gap && tab[j - gap] > temp; j -= gap)
                tab[j] = tab[j - gap];


            tab[j] = temp;
        }
    }
}
void heapify(int tab[],int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && tab[l] > tab[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && tab[r] > tab[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(tab[i], tab[largest]);

        // Recursively heapify the affected sub-tree
        heapify(tab, n, largest);
    }
}
void HeapSort(int tab[],int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(tab, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(tab[0], tab[i]);

        // call max heapify on the reduced heap
        heapify(tab, i, 0);
    }
}
