/*!
 *  \file   utest_builder_pattern.cc
 *  \brief  Make the unit test for the application with Builder pattern.
 *
 */


#include <gtest/gtest.h>

#include "application.h++"
#include "Composite_Builder/apply_composite_builder.hpp"

TEST(UTest4BuilderPattern, Check_ApplyBuilderPattern)
{
    apply_builder_pattern();
}


TEST(UTest4GroovyBuilderPattern, Check_CreateUniformDSL)
{
    create_uniform_DSL();
}

TEST(UTest4CompositeBuilderPattern, Check_UtilizeCompositeBuilderToBuildObject)
{
    Person persion = utilize_composite_builder_to_build_object();
}
