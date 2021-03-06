#include <iostream>
#include <vector>

using namespace std;


#define OUTPUT  for (iva = va.begin(); iva!= va.end(); iva++) \
    		cout << *iva <<" "; \
		cout <<endl;

/* NOTE:
  vector : front; back;push_back; pop_back;
  no: pop_front;push_front;
  
*/

int main(int argc, char * argv[])
{
  vector<int> va;
  vector<int>::iterator	iva;
  vector<int>::iterator	ivc;
  va.push_back(10);
  va.push_back(11);
  va.push_back(12);
  va.push_back(13);
  vector<int> vb;
  vb.push_back(10);
  vb.push_back(11);
  vb.push_back(12);
  vb.push_back(13);

  if (!va.empty())
  OUTPUT

  for (int i=0; i<va.size(); i++)
    cout <<va[i]<<" ";
  cout <<endl;

  /* Insert */
  va.insert(iva,10);
  OUTPUT

  /* swap */
  va.swap(vb);
  OUTPUT

  va.pop_back();
  OUTPUT

  /* Pick Values */
  cout <<va.front()<<" ";
  cout <<va.back() <<endl;

  /*Delete*/
  iva = va.begin()+1;
  ivc = va.begin()+3;
  va.erase(iva,ivc);
  OUTPUT

  va.clear();
  vb.clear();
}
