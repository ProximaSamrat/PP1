#include <iostream>
#include <string>

using namespace std;

struct Dates {
    string date;
    int dateInDays;

    void convertDate() {
        string sDays, sMonths, sYears;
        int days, months, years;

        int i = 0;
        while (date[i] != '-') {
            if(isdigit(date[i])) {
                sDays += date[i];
            }
            i++;
        }
        while (date[i] != '-') {
            if(isdigit(date[i])) {
                sMonths += date[i];
            }
            i++;
        }
        while (date[i] != '\0') {
            if(isdigit(date[i])) {
                sYears += date[i];
            }
            i++;
        }

        days = stoi(sDays);
        months = stoi(sMonths);
        years = stoi(sYears);

        dateInDays = days + months * 31 + years * 365;
    }
};

void inputDates(Dates* d, int n) {
    for(int i = 0; i < n; i++) {
        cin >> d[i].date;
        d[i].convertDate();
    }
}

bool ascending(int a, int b) {
 return a > b;
}

bool descending(int a, int b) {
 return a < b;
}


void bubleSortDates(Dates* d, int n, bool(*compare)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if((*compare)(d[j].dateInDays, d[j + 1].dateInDays)) {
                swap(d[j], d[j + 1]);
            }
        }   
    }
}

void outputDates(Dates* d, int n) {
    for (int i = 0; i < n; i++) {
        cout << d[i].date;
    }
}

int main() {
    int n;
    cin >> n;

    Dates* d = new Dates[n];

    inputDates(d, n);
    bubleSortDates(d, n, ascending);
    outputDates(d, n);
}