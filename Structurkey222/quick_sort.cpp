template <typename T>
void quick_sort(T a[], int low, int high) {
    if (low < high) {
        int pivot = a[high];
        int i = low - 1;
        int pi;
        T t;
        for (int j = low; j <= high - 1; j++) {
            if (a[j] < pivot) {
                i++;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        t = a[high];
        a[high] = a[i + 1];
        a[i + 1] = t;
        pi = i + 1;
        quick_sort(a, low, pi - 1);
        quick_sort(a, pi + 1, high);
    }
}