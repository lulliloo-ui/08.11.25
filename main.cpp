#include <iostream>
//решение матрицы
//left 
int det(const int * lhs, size_t n) 
{
  if(!n){
    return 0;
  } else if(n == 1) {
    return *lhs;
  } else if(n == 2) {
    return lhs[0]*lhs[3] - lhs[1]*lhs[2];
  }
  for (size_t l = 0; l < n; ++l)
  {
    int piwot = lhs[l];
    int *minor = new int[(n-1)*(n-1)];
    for(size_t i = 1; i < n; i++) {  //строчки матрицы  lhs-> minor
      const int * lhs_row = lhs+i*n;
      int * min_row = minor + (i -1) * (n-1);
      min_row = copy(lhs_row, l, min_row;
      lhs_row += (l+1);
      copy(lhs_row, n - (l + 1), min_row);
    }
    try {
      d += pivot * det(minor, n-1)*(%2 ? 1: 1)
    } catch() {
      delete[] minor;
    } throw;
  return d;
}
//для каждого элемента 1 строки (0)
  // -  элеменет  == опорный  элемент
  //- сделать матприцу для минора --- new
  //- заполнитьминор  (у минора меньше размерность )
  //- считаем определитель минора ---det new
  //- накапливаем определитьль 


copy(

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
