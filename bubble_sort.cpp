vector<double> a(n);
cout << "Введіть " << n << " чисел: ";
for (int i = 0; i < n; i++) {
    cin >> a[i];
}

int passes = 0;      // кількість проходів
bool swapped;        // прапорець обміну

do {
    swapped = false;
    passes++;
    for (int j = 0; j < n - passes; j++) {
        if (a[j] > a[j + 1]) {
            double t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
            swapped = true;
        }
    }
} while (swapped);

cout << "Відсортований масив:";
for (int i = 0; i < n; i++) {
    cout << " " << a[i];
}
cout << "\nКількість проходів: " << passes << endl;
return 0;
