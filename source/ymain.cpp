//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial( number - 1 ) * number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial( 1 ) == 1 );
    REQUIRE( Factorial( 2 ) == 2 );
    REQUIRE( Factorial( 3 ) == 6 );
    REQUIRE( Factorial( 10 ) == 3628800 );
}



int main( int argc, char* argv[] )
{
    Catch::Session session; // There must be exactly one instance

    int height = 0; // Some user variable you want to be able to set

    // Build a new parser on top of Catch's
    using namespace Catch::clara;
    auto cli
        = session.cli() // Get Catch's composite command line parser
        | Opt( height, "height" ) // bind variable to a new option, with a hint string
        [ "-g" ][ "--height" ]    // the option names it will respond to
        ( "how high?" );        // description string for the help output

  // Now pass the new composite back to Catch so it uses that
    session.cli( cli );

    // Let Catch (using Clara) parse the command line
    int returnCode = session.applyCommandLine( argc, argv );
    if(returnCode != 0) // Indicates a command line error
        return returnCode;

    // if set on the command line then 'height' is now set at this point
    if(height > 0)
        std::cout << "height: " << height << std::endl;

    return session.run();
}