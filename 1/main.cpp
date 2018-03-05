#include <iostream>
#include "babilon.h"

using namespace std;

int main ( int argc, char* argv[] )
{
  if (argc < 2)
  {
    cout <<  "\033[1;37mmain:\033[0m \033[1;31mfatal error:\033[0m not enough arguments\nUsage:\n      main \e[4mnumber\e[0m"<< endl;
    return 1;
  }
  double n;
  //cout << "Numero a calcular raíz: ";
  //cin >> n;
  n = atof ( argv[1] );
  double r = babilon_root ( n );
  cout.precision(4);
  cout << endl << fixed << "Raiz: " << r << endl;
  return 0;
}