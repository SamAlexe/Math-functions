
#ifndef __BERNOULLI_H__
#define __BERNOULLI_H__

//|Bn| = 2n!/((2π)^n) * ζ(n)
class B_n
{
  public:
  float B_N(int n);
  //\sum_{n=1}^\infty\frac{1}{n^s}
  float zeta(int n);
}

#endif
