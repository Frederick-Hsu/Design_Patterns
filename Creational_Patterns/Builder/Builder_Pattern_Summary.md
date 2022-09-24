# Builder Pattern

The `Builder` pattern is concerned with the creation of *complicated* objects, that is, the objects that cannot

be built up in a single-line constructor call.

## Simple Builder

The `Builder` pattern simply tries to outsource the piecewise construction of an object into several separate classes.

## Fluent Builder

By returning a reference to the `builder` itself, the `builder` calls can now be chained. That is what is 

called a *fluent interface*.

## Groovy-Style Builder

@import "Groovy_Style_Builder/Groovy_Style_Builder.Model.Diagram.plantuml"

## Composite Builder

@import "Composite_Builder/Composite_Builder.Model.Diagram.plantuml"

# Summary

## Goal
  
  The goal of `Builder` patterns is to define a component dedicated entirely to **piecewise construction** of a *complicated* object or set of objects.

## The key characteristics of a `Builder`

> * Builders can have a fluent interface that is usable for complicated construction using a single invocation chain.
>   To support this, builder function should return `this` or `*this`.

> * To force the user of the API to use a Builder, we can make the target object's constructors inaccessible, 
>   and then define a static `create()` function that returns the builder.

> * A builder can be coerced to the object itself, by defining the appropriate operator.

> * Groovy-style builders are possible in C++, thanks to the uniform initializer syntax.
>   This approach is very general, and allows for the creation of diverse DSLs.

> * A single builder interface can expose multiple sub-builders. 
>   Through clever use of inheritance and fluent interface, one can jump from one builder to another quite easily.


## Just to reiterate

**The use of `Builder` pattern makes sense when the constructor of an object is a *nontrivial* process.**