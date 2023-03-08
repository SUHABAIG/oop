//convert minutes into days ,hours,mins ,and time.
#include <iostream>
using namespace std;

class Duration {

        int minutes;
    public:
        Duration(int minutes) {
            this->minutes = minutes;
        }
        int getDays() {
            return minutes / 1440;
        }
        int getHours() {
            return (minutes % 1440) / 60;
        }
        int getMinutes() {
            return (minutes % 1440) % 60;
        }
        int getSeconds() {
            return (minutes % 1440 % 60) * 60;
        }
};

int main() {
    int minutes;
    cout << "Enter minutes: ";
    cin >> minutes;
    Duration d(minutes);
    cout << minutes << " minutes = " << d.getDays() << " days " << d.getHours() << " hours " << d.getMinutes() << " minutes " << d.getSeconds() << " seconds" << endl;
    return 0;
}