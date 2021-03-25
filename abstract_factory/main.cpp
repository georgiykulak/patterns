#include "victorian_furniture_factory.hpp"
#include "modern_furniture_factory.hpp"

#include <iostream>
#include <cassert>

int main ()
{
    std::unique_ptr< patterns::AbstractFurnitureFactory > factory =
        std::make_unique< patterns::VictorianFurnitureFactory >();
    
    assert( factory->createChair()->hasLegs() == true );
    assert( factory->createChair()->sitOn() == true );
    assert( factory->createSofa()->hasLegs() == true );
    assert( factory->createSofa()->sitOn() == 2 );
    assert( factory->createCoffeeTable()->hasLegs() == true );

    factory = std::make_unique< patterns::ModernFurnitureFactory >();
    
    assert( factory->createChair()->hasLegs() == false );
    assert( factory->createChair()->sitOn() == true );
    assert( factory->createSofa()->hasLegs() == false );
    assert( factory->createSofa()->sitOn() == 4 );
    assert( factory->createCoffeeTable()->hasLegs() == false );

    return 0;
}