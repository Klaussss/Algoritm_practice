#include <iostream>
#include <list>

using namespace std;


#define OUTPUT  for (iva = va.begin(); iva!= va.end(); iva++) \
    		cout << *iva <<" "; \
		cout <<endl;

/* NOTE:
  list: NO [], NO + -, remove(VALUE): remove all of the nodes which values = VALUE;
  
*/

int main(int argc, char * argv[])
{
  list<int> va;
  list<int> vb;
  list<int>::iterator	iva;
  list<int>::iterator	ivc;
  va.push_back(10);
  va.push_back(11);
  va.push_back(12);
  va.push_back(13);
  vb.push_back(10);
  vb.push_back(11);
  vb.push_back(12);
  vb.push_back(13);

  if (!va.empty())
  OUTPUT

  /* Insert */
  va.insert(iva,10);
  OUTPUT

  /* swap */
  va.swap(vb);
  OUTPUT

  va.pop_back();
  OUTPUT
  va.remove(11);
  OUTPUT

  /* Pick Values */
  cout <<va.front()<<" ";
  cout <<va.back() <<endl;

  va.clear();
  vb.clear();
}
