#include <iostream>
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
