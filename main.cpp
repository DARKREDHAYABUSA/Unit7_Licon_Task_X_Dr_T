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



  return 0;
}