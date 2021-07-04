#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    char name[100], number[100];
    char k;
    int age, avg_year1, avg_year2, avg_year3, avg_year4;

    cin.getline(name, 100, ',');
    cin >> age >> k;
    cin.getline(number, 100, ',');
    cin >> avg_year1 >> k >> avg_year2 >> k >> avg_year3 >> k >> avg_year4;
    return 0;
}
