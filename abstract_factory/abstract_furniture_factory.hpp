#ifndef __PATTERNS_ABSTRACT_FURNITURE_FACTORY_HPP__
#define __PATTERNS_ABSTRACT_FURNITURE_FACTORY_HPP__

#include <memory>

namespace patterns
{

class AbstractChair
{
public:
    virtual bool hasLegs () const noexcept = 0;

    virtual bool sitOn () const noexcept = 0;
};

class AbstractSofa
{
public:
    virtual bool hasLegs () const noexcept = 0;

    virtual std::size_t sitOn () const noexcept = 0;
};

class AbstractCoffeeTable
{
public:
    virtual bool hasLegs () const noexcept = 0;
};

class AbstractFurnitureFactory
{
public:
    virtual std::unique_ptr< AbstractChair > createChair () const = 0;

    virtual std::unique_ptr< AbstractSofa > createSofa () const = 0;

    virtual std::unique_ptr< AbstractCoffeeTable > createCoffeeTable () const = 0;
};

} // namespace patterns

#endif // __PATTERNS_ABSTRACT_FURNITURE_FACTORY_HPP__ //
