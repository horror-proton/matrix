#ifndef _DET_HPP_INCLUDED_SDOFJIWEOUIJASFLDKJSAFLJKASFOIJSAFDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDF
#define _DET_HPP_INCLUDED_SDOFJIWEOUIJASFLDKJSAFLJKASFOIJSAFDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDF

#include <matrix/matrix.hpp>

namespace feng
{
    template<typename Matrix>
    typename Matrix::value_type det( const Matrix& m )
    {
        return m.det();
    }

}//namespace feng

#endif//_DET_HPP_INCLUDED_SDOFJIWEOUIJASFLDKJSAFLJKASFOIJSAFDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDF
