#include <gtest/gtest.h>
#include <components>

TEST(Components, Aero){
    auto temp = get_component<Aero>(component_type::AERO, 0, 100.0);

    ASSERT_EQ(50, temp->downforce.front.get());
    temp->downforce.front.set(121);
    ASSERT_EQ(100, temp->downforce.front.get());
}


TEST(Components, Alignment){
    auto temp = get_component<Alignment>(component_type::ALIGNMENT, 0, 100.0);

    ASSERT_EQ(50, temp->camber.front.get());
    temp->camber.front.set(121);
    ASSERT_EQ(100, temp->camber.front.get());
}

TEST(Components, AntiRollBars){
    auto temp = get_component<AntiRollBars>(component_type::ANTI_ROLL_BARS, 0, 100.0);

    ASSERT_EQ(50, temp->stiffness.front.get());
    temp->stiffness.front.set(121);
    ASSERT_EQ(100, temp->stiffness.front.get());
}

TEST(Components, Brake){
    auto temp = get_component<Brake>(component_type::BRAKE, 0, 100.0);

    ASSERT_EQ(50, temp->balance.get());
    temp->balance.set(121);
    ASSERT_EQ(100, temp->balance.get());
}

TEST(Components, Differential){
    auto temp = get_component<Differential>(component_type::DIFFERENTIAL, 0, 100.0);

    ASSERT_EQ(50, temp->balance.get());
    temp->balance.set(121);
    ASSERT_EQ(100, temp->balance.get());
}

TEST(Components, Gearing){
    auto temp = get_component<Gearing>(component_type::GEARING, 0, 100.0, 10);

    ASSERT_EQ(50, temp->final_gear.get());
    temp->final_gear.set(121);
    ASSERT_EQ(100, temp->final_gear.get());
}

TEST(Components, Springs){
    auto temp = get_component<Springs>(component_type::SPRINGS, 0, 100.0, 10);

    ASSERT_EQ(50, temp->stiffness.front.get());
    temp->stiffness.front.set(121);
    ASSERT_EQ(100, temp->stiffness.front.get());
}

TEST(Components, Tires){
    auto temp = get_component<Tires>(component_type::TIRES, 0, 100.0, 10);

    ASSERT_EQ(50, temp->pressure.front.get());
    temp->pressure.front.set(121);
    ASSERT_EQ(100, temp->pressure.front.get());
}
