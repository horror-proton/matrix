TEST_CASE( "Misc Range", "[miscrange]" )
{
    {
        auto start = 0UL;
        auto end = 1000UL;

        for ( auto x = start; x != end; ++x )
            for ( auto y = start; y != end; ++y )
            {
                auto ranger = feng::misc::range( x, y );
                auto begin = std::begin(ranger);
                auto end = std::end(ranger);
                REQUIRE( std::distance(begin, end) == y - x );
                auto val = x;
                for (auto v : ranger )
                {
                    REQUIRE( val == v );
                    ++val;
                }
            }

        for ( auto x = start; x != end; ++x )
        {
                auto ranger = feng::misc::range( x );
                auto begin = std::begin(ranger);
                auto end = std::end(ranger);
                REQUIRE( std::distance(begin, end) == x );
                auto val = 0UL;
                for (auto v : ranger)
                {
                    REQUIRE( val == v );
                    ++val;
                }
        }
    }
}

