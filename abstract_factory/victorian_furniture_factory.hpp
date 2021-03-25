#ifndef __PATTERNS_VICTORIAN_FURNITURE_FACTORY_HPP__
#define __PATTERNS_VICTORIAN_FURNITURE_FACTORY_HPP__

#include "abstract_furniture_factory.hpp"

namespace patterns
{

class VictorianChair : public AbstractChair
{
public:
    bool hasLegs () const noexcept override
    {
        return true;
    }

    bool sitOn () const noexcept override
    {
        return true;
    }
};

class VictorianSofa : public AbstractSofa
{
public:
    bool hasLegs () const noexcept override
    {
        return true;
    }

    std::size_t sitOn () const noexcept override
    {
        return 2;
    }
};

class VictorianCoffeeTable : public AbstractCoffeeTable
{
public:
    bool hasLegs () const noexcept override
    {
        return true;
    }
};

class VictorianFurnitureFactory : public AbstractFurnitureFactory
{
public:
    std::unique_ptr< AbstractChair > createChair () const override
    {
        return std::make_unique< VictorianChair >();
    }

    std::unique_ptr< AbstractSofa > createSofa () const override
    {
        return std::make_unique< VictorianSofa >();
    }

    std::unique_ptr< AbstractCoffeeTable > createCoffeeTable () const override
    {
        return std::make_unique< VictorianCoffeeTable >();
    }
};

} // namespace patterns

#endif // __PATTERNS_VICTORIAN_FURNITURE_FACTORY_HPP__ //
