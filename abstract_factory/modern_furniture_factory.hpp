#ifndef __PATTERNS_MODERN_FURNITURE_FACTORY_HPP__
#define __PATTERNS_MODERN_FURNITURE_FACTORY_HPP__

#include "abstract_furniture_factory.hpp"

namespace patterns
{

class ModernChair : public AbstractChair
{
public:
    bool hasLegs () const noexcept override
    {
        return false;
    }

    bool sitOn () const noexcept override
    {
        return true;
    }
};

class ModernSofa : public AbstractSofa
{
public:
    bool hasLegs () const noexcept override
    {
        return false;
    }

    std::size_t sitOn () const noexcept override
    {
        return 4;
    }
};

class ModernCoffeeTable : public AbstractCoffeeTable
{
public:
    bool hasLegs () const noexcept override
    {
        return false;
    }
};

class ModernFurnitureFactory : public AbstractFurnitureFactory
{
public:
    std::unique_ptr< AbstractChair > createChair () const override
    {
        return std::make_unique< ModernChair >();
    }

    std::unique_ptr< AbstractSofa > createSofa () const override
    {
        return std::make_unique< ModernSofa >();
    }

    std::unique_ptr< AbstractCoffeeTable > createCoffeeTable () const override
    {
        return std::make_unique< ModernCoffeeTable >();
    }
};

} // namespace patterns

#endif // __PATTERNS_MODERN_FURNITURE_FACTORY_HPP__ //
