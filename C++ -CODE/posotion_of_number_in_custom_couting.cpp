
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
  int num;
  int arr[2];
  cout << "Enter a number \n";
  cin >> num;
  float This_help_to_find_decimal_places = 1;
  int places_count = 0;
  int decimal_places_cheack, Program_breaker_at_9 = 0;

  for (int i = 0; i <= num; i++)
  {
    decimal_places_cheack = i;

    for (int h = 7; h >= 1; h--)
    {
      This_help_to_find_decimal_places = pow(10, h);
      arr[0] = decimal_places_cheack / int(This_help_to_find_decimal_places);
      if (arr[0] == 9)
      {
      
        Program_breaker_at_9 = 1;
        break;
      }

      decimal_places_cheack = decimal_places_cheack - (arr[0] * int(This_help_to_find_decimal_places));
      if (decimal_places_cheack == 9)
      {
        Program_breaker_at_9 = 1;
        break;
      }
    }
    if (Program_breaker_at_9 == 1)
    {
      Program_breaker_at_9 = 0;
      continue;
    }
    cout << i << " , ";

    places_count++;
  }
  cout<<"\n your entered number : "<<num<<" position is ------->"<<places_count;
  return 0;
}
/*
in this counting we does not have nine

Enter a number 
100
0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 70 , 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 100 ,
 your entered number : 100 position is ------->82
*/