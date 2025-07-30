cmake_minimum_required(VERSION 3.2)
project(Effects_Calculator)

set(CMAKE_CXX_STANDARD 20)

file(GLOB INGREDIENTS
        "Ingredients/Ingredients_Lib.h"
        "Effects.h")

file(GLOB PRODUCTS
        "Products/Products.h"
        "Products/Product.cpp"
        "Products/Product.h"
        "Products/Cocaine.cpp"
        "Products/Cocaine.h"
        "Products/Granddaddy_Purple.cpp"
        "Products/Granddaddy_Purple.h"
        "Products/Green_Crack.cpp"
        "Products/Green_Crack.h"
        "Products/Methamphetamine.cpp"
        "Products/Methamphetamine.h"
        "Products/OG_Kush.cpp"
        "Products/OG_Kush.h"
        "Products/Sour_Diesel.cpp"
        "Products/Sour_Diesel.h")

file(GLOB CONDITIONS
        "Conditions/Condition.cpp"
        "Conditions/Condition.h"
        "Conditions/Contains.cpp"
        "Conditions/Contains.h"
        "Conditions/Max_Profit_Condition.cpp"
        "Conditions/Max_Profit_Condition.h")

add_executable(Mixing_Test_1 Mixing_Test_1.cpp ${INGREDIENTS} ${PRODUCTS})

add_executable(BFS BFS.cpp ${INGREDIENTS} ${PRODUCTS} ${CONDITIONS})

add_executable(Comparing_Sets Comparing_Sets.cpp)

add_executable(Product_Mem_Test ${INGREDIENTS} ${PRODUCTS}
        Product_Mem_Test.cpp)

add_executable(Sets_Contains_Test sets_contain_test.cpp)

add_executable(Max_Profit Max_Profit.cpp
        ${INGREDIENTS} ${PRODUCTS} ${CONDITIONS})
