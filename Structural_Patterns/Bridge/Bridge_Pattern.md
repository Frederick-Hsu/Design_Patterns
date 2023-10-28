# How Bridge-Pattern works?

Suppose we have 2 classes of objects: 
- geometric shapes
- the renderers that can draww them on the screen

We assume that rendering can happen in vector or raster form, and in terms of shapes.

## Renderer interface

```plantuml
@startuml
    skinparam TabSize 4
    skinparam DefaultFontName Courier
    skinparam ClassAttributeIconSize 0

    interface Renderer
    {
        + {abstract} void render_circle(float x, float y, float radius);
    }
@enduml
```


```plantuml
@startuml example_class_diagram

' this is a comment line

' set the theme
!theme crt-amber

' hide PlantUML "circle", to use classic UML Class notation
hide circle

' show class attributes visibility as -,+,#,~ rather than icons
skinparam classAttributeIconSize 0


' define class Pet and bold the name, using **
class Pet as "**Pet**" {
  -name: String
  -weight: int
  -canFly: boolean
  +getName()
  +setName()
  +eat()
}

class Cat as "**Cat**" {
  -scratches: boolean
  +getScratches()
  +setScratches()
}

class Dog as "**Dog**" {
  -catChaser: boolean
  +isCatChaser()
}

class Goldfish as "**Goldfish**" {
  -color: String
  +getColor()
  +setColor()
}

' represent inheritance relationships
Pet <|-- Cat
Pet <|-- Dog
' or like this
class Goldfish extends Pet

@enduml
```
