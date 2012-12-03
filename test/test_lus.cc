#include <vg.hpp>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <matrix.hpp>
#include <matrix/numeric/lu_solver.hpp>

int main()
{
    using namespace feng;

    unsigned int N = 100;

    vg::variate_generator<double> v;
    vg::variate_generator<double> V(1,10);

    matrix<double> A(N,N); 
    matrix<double> x(N,1); 
    matrix<double> x_(N,1); 

    std::copy( v.begin(), v.begin()+N*N, A.begin() );
    std::copy( V.begin(), V.begin()+N, A.diag_begin() );
    std::copy( v.begin(), v.begin()+N, x.begin() );

    matrix<double> b = A * x;
    lu_solver( A, x_, b );

    double xx = std::inner_product( x.begin(), x.end(), x.begin(), double(0) );
    double xx_ = std::inner_product( x_.begin(), x_.end(), x_.begin(), double(0) );

    std::cout << xx << " - " <<xx_ << " = " << xx - xx_;

    //std::cout << "\n" << x.transpose() << "\n" << x_.transpose() << "\n";

    std:: cout << "\nAx-b=\n" << A * x_ - b;
    
    return 0;
}

