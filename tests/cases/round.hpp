TEST_CASE( "Matrix round", "[round]" )
{
    unsigned long N = 10;
    for ( unsigned long sz = 1; sz != N; ++sz )
    {
        for ( unsigned long tz = 1; tz != N; ++tz )
        {
            feng::matrix<double> const& mat = feng::rand<double>( sz, tz );
            auto const& mat_round = feng::round( mat );
            for ( unsigned long r = 0; r != sz; ++r )
                for ( unsigned long c = 0; c != tz; ++c )
                {
                    REQUIRE( std::abs(std::round(mat[r][c]) - mat_round[r][c] ) < 1.0e-7 );
                }
        }
    }
}
