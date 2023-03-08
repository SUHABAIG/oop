#include <iostream>

using namespace std;

int main()
{
    int minutes;
    cout << "Enter minutes: ";
    cin >> minutes;

    int days = minutes / 1440;
    int hours = (minutes % 1440) / 60;
    int mins = (minutes % 1440) % 60;
    int seconds = (mins % 60) % 60;

    cout << minutes << " minutes are equal to " << days << " days, " << hours << " hours, " << mins << " minutes and " << seconds << " seconds." << endl;
    return 0;
}