#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char* argv[])
{
  if (argc < 2)
  {
    cout <<  "\033[1;37mmain:\033[0m \033[1;31mfatal error:\033[0m not enough arguments\nUsage:\n      main \e[4mtime\e[0m"<< endl;
    return 1;
  }
  double t;
  //cout << "Time: ";
  //cin >> t;
  t = atof(argv[1]);
  cout << "\nHeight: " << (9.80665 * t * t) / 2 << "m " << endl;
  return 0;
}