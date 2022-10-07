# Factory Pattern

## Factory Method

@import "Factory_Method/Factory_Method.Pattern.Diagram.plantuml"

## Factory

@import "Factory/Factory.Pattern.Diagram.plantuml"

## Inner Factory

@import "Inner_Factory/Inner_Factory.Pattern.Diagram.plantuml"

## Abstract Factory

How the **Abstract Factory** pattern works?

> * 1. Define your common `interface HotDrink`

> * 2. Define the concrete classes `Tea` and `Coffee`, which are the desired objects you want to make,
    Tea and Coffee inherited from the common `interface HotDrink`

> * 3. Have your **abstract factory** class `HotDrinkFactory` exposed an interface `make()`,
    It indicates that you want to make the `Tea` or `Coffee` object.

> * 4. Define 2 concrete factory classes: `TeaFactory` and `CoffeeFactory`, they implement
    how to `make()` the Tea or coffee instances respectively. Obviously the 2 drinks are different
    in the making process.

> * 5. Define the concrete class `DrinkFactory`, you can think it as the Starbucks shop(factory),  this factory will    `make_drink()` according to guest's selection (i.e. the argument `name`), then offer you the desired drink: tea or coffee

> * 6. Obtained such a drink from Starbucks shop(factory), guests can `drink()` enjoyfully their loved tea or coffee respectively.

### Conclusion
In a conclusion, by virtue of the abstract factory `HotDrinkFactory`, in the concreate factory `DrinkFactory`, we `make_drink()` the real products: tea and coffee, then customers can `drink()` tea or coffee respectively.

@import "Abstract_Factory/Abstract_Factory.Pattern.Diagram.plantuml"

## Functional Factory

of course, we can simplify the concrete factory `DrinkFactory` to `DrinkWithVolumeFactory`, with the help of `std::function<std::unique_ptr<HotDrink>()>`

@import "Functional_Factory/Functional_Factory.Pattern.Diagram.plantuml"

# Summary

> - A *factory method* is a class member that acts as a way of creating object. It typically replaces a constructor.

> - A *factory* is typically a seperate class that knows how to construct objects, though if you pass a function (as in
> `std::function` or similar) that constructs objects, this argument is also called a factory.

> - An *abstract factory* is, as its name suggests, an abstract class that can be inherited by concrete classes, which offer a family of types. Abstract factories are rare in the wild.

---

A factory has several critical advantages over a constructor call, they are:

* A factory can say no, meaning that instead of actually returning an object, it can return, for example, a `nullptr`

* Naming is better and unconstrained, unlike constructor name.

* A single factory can make objects of many different types.

* A factory can exhibit polymorphic behaviour, instantiating a class and returning it through its base class' reference or pointer.

* A factory can implement caching and other storage optimizations; it is also a natural choice for approaches such as pooling or the Singleton pattern.
  
---

Factory is different from Builder in that:

- with a **Factory**, you typically create an object in one go.
- whereas with **Builder**, you construct the object piecewise by providing information in parts.