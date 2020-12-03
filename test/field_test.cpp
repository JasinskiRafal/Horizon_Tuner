#include <gtest/gtest.h>
#include <field.h>
#include <string>

TEST(field_test, int_test){
    auto test_field = Field<int>(0,100);
    test_field.set(3);
    ASSERT_EQ(test_field.get(), 3);

    test_field.set(80);
    ASSERT_EQ(test_field.get(), 80);

    test_field.set(110);
    ASSERT_EQ(test_field.get(), 100);

    test_field.set(-80);
    ASSERT_EQ(test_field.get(), 0);
}

TEST(field_test, double_test){
    auto test_field = Field<double>(-5.0,5.0);
    test_field.set(2.4);
    ASSERT_DOUBLE_EQ(2.4, test_field.get());

    test_field.set(5.4);
    ASSERT_DOUBLE_EQ(5.0, test_field.get());

    test_field.set(-22.4);
    ASSERT_DOUBLE_EQ(-5, test_field.get());
}

TEST(axlefield_test, int_test){
    auto test_field = AxleFields<int>(0,100);
    test_field.front.set(3);
    ASSERT_EQ(test_field.front.get(), 3);

    test_field.rear.set(80);
    ASSERT_EQ(test_field.rear.get(), 80);

    test_field.front.set(110);
    ASSERT_EQ(test_field.front.get(), 100);

    test_field.rear.set(-80);
    ASSERT_EQ(test_field.rear.get(), 0);
}

TEST(axlefield_test, double_test){
    auto test_field = AxleFields<double>(-5.0,5.0);
    test_field.front.set(2.4);
    ASSERT_DOUBLE_EQ(2.4, test_field.front.get());

    test_field.rear.set(5.4);
    ASSERT_DOUBLE_EQ(5.0, test_field.rear.get());

    test_field.rear.set(-22.4);
    ASSERT_DOUBLE_EQ(-5, test_field.rear.get());
}

TEST(difffield_test, int_test){
    auto test_field = AxleFields<int>(0,100);
    test_field.front.set(3);
    ASSERT_EQ(test_field.front.get(), 3);

    test_field.rear.set(80);
    ASSERT_EQ(test_field.rear.get(), 80);

    test_field.front.set(110);
    ASSERT_EQ(test_field.front.get(), 100);

    test_field.rear.set(-80);
    ASSERT_EQ(test_field.rear.get(), 0);
}

TEST(difffield_test, double_test){
    auto test_field = DiffFields<double>(-5.0,5.0);
    test_field.acceleration.set(2.4);
    ASSERT_DOUBLE_EQ(2.4, test_field.acceleration.get());

    test_field.decelartion.set(5.4);
    ASSERT_DOUBLE_EQ(5.0, test_field.decelartion.get());

    test_field.decelartion.set(-22.4);
    ASSERT_DOUBLE_EQ(-5, test_field.decelartion.get());
}
