#include <iostream>
//решение матрицы
int det(const int * a, size_t n) 
{
  if(n == 0){
    return 0;
  } else if(n == 1) {
    return a[0];
  } else if(n == 2) {
    return a[0]*a[3] - a[1]*a[2];
  }
//для каждого элемента 1 строки (0)
  // -  элеменет  == опорный  элемент
  //- сделать матприцу для минора --- new
  //- заполнитьминор  (у минора меньше размерность )
  //- считаем определитель минора ---det new
  //- накапливаем определитьль 
}



void rm(int **a; size_t k)
{
  for(size_t i = 0; i < k; ++i)
    {
      delete[] a[i];
    }
  delete []a;
}

size_t detsize(size_t n1, size_t m1, size_t n2, size_t m2)
{
  size_t minn = n1 > n2 ? n2 : n1;
  if (i < minn){
    return m1 + m2;
  }
  if(n1 > n1){
    return m1
  }
  return n1 < n2 ? m2 : m1;
}

int **ct(size_t n1, size_t m1, size_t n2, size_t m2)
{
  size_t n = n1> n2 ? n1 : n2;
  int **c = new int * [n];
  size_t i = 0;
  try {
    for(; i< n; ++i) {
      size_t m = detsie(n1, m1, n2, m2);
      c[i] = new int [m];
    }
  } catch() {
    rm(c, i);
  } throw;
  return c;
}

void copy(const int * v, size_t k, int * w)
{
  for(size_t i = 0; i < k; ++i)
    {
      w[i] = v[i];
    }
  return w+k;
}

int **concat_rows(const int * const * a, size_t n1, size_t m1, const * int *const b, size_t n2, size_t m2)
{
  size_t n = n1 > n2 ? n2 : n1;
  int ** c = ct(n, m1 + m2);
  for (size_t i = 0; i < n; ++i)
  {
    const int *rowa = a[i];
    const int *rowb = a[i];
    int *rowc = c[i];
    vowc = copy(rowa, m1, rowc);
    copy(rowb, m1, rowc);
  }
  return c;
}

int main()
{
  
}
