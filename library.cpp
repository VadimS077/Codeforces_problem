#include<iostream>

struct Cdec
{
  double re = 0.0;
  double im = 0.0;

};
std::ostream& operator<<(std::ostream & ostrm, const Cdec & y)
{
  return ostrm << "(" << y.re << "," << y.im << ")";
}

Cdec operator+=(Cdec & gg, const Cdec & wp)
{
  gg.re += wp.re;
  gg.im += wp.im;
  return gg;
}

Cdec operator+(Cdec & gg, const Cdec & wp)
{
  Cdec ans = gg;
  ans += wp;
  return ans;
}

Cdec operator-=(Cdec & gg, const Cdec & wp)
{
  gg.re += wp.re;
  gg.im += wp.im;
  return gg;
}

Cdec operator-(Cdec & gg, const Cdec & wp)
{
  Cdec ans = gg;
  ans -= wp;
  return ans;
}

Cdec operator* (Cdec & gg, int wp)
{
  ans.re = gg.re * wp;
  ans.im = gg.im * wp;
  return ans;

}

Cdec
operator/= (Cdec & gg, const Cdec & wp)
{
  gg.re /= wp.re;
  gg.im /= wp.im;
  return gg;

}

Cdec operator/(Cdec & gg, const Cdec & wp){
    ans=gg;
    ans.re=gg.re/wp.re;
    ans.im=gg.im/wp.im;
    return ans;
    
    
}
int main(){
    Cdec r_mouse{0,6};
    Cdec r_car{8,0};
    int v_cat=2;
    int v_mouse=1;
    
}
