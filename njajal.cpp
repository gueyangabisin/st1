#include <iostream>
using namespace std;
int main ()
{

    int in, p, out, sld;
    sld=100000;
    cout <<sld;
    cin >>p;
   // do {
    if (p=1) {
        cout << "setor tunai";
        cout << "masukan nominal"<<endl;
        cin >> in;
        out=sld+in;
    }
    else if(p=2) {
            cout << "tarik tunai";
            cout << "masukan nominal"<< endl;
            cin >> in;
            out=sld-in;
    }
    else {cout << "terimakasih"; }
  //  } while { }
  cout << out;
  return 0;
}
