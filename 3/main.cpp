#include <iostream>
#include <cstdlib>

using namespace std;

int main ( int argc, char* argv[])
{
  if (argc < 2)
  {
    cout <<  "\033[1;37mmain:\033[0m \033[1;31mfatal error:\033[0m not enough arguments\nUsage:\n      main \e[4mtime in seconds\e[0m"<< endl;
    return 1;
  }
  int t = atoi(argv[1]);
  int h = t / (60 * 60);
  int m = (t % (60 * 60) ) / 60;
  int s = (t % (60 * 60) ) % 60;
  cout << h << " hours, " << m << " minutes, " << s << " seconds." << endl;
  return 0;
}
