/*!
 *  \file   apply_composite_builder.cpp
 *  \brief
 *
 */

#include <iostream>

#include "person_builder.hpp"
#include "person_address_builder.hpp"
#include "person_job_builder.hpp"

Person utilize_composite_builder_to_build_object(void)
{
    Person person = Person::create("Frederique Hsu").lives().at("123 London road")
                                                            .with_postcode("SW1 1GB")
                                                            .in("London")
                                                    .works().at("PragmaSoft")
                                                            .as_a("Consultant")
                                                            .earning(65e4);
    std::cout << std::endl << person << std::endl;
    return person;
}
