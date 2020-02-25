//Unit7_Licon_Task_X_Dr_T 2-24-2020 STRUCT
#include <iostream>
using namespace std;
//declare structs above int main()
struct timeOfDay
{
short Hour;
short Minute;
short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //save space here for our toString() override
};

int main() 
{
  timeOfDay t;
  t.Hour = 7;
  t.Minute = 11;
  t.Second = 17;
cout << "\nCurrent Time: " << endl;
cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  return 0;
}