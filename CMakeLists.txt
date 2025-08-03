cmake_minimum_required(VERSION 3.2)
project(Effects_Calculator)

set(CMAKE_CXX_STANDARD 20)

file(GLOB INGREDIENTS
        "Ingredients/Ingredients_Lib.h"
        "Effects_Lib.h")

file(GLOB PRODUCTS
        "Products/Create_starter_Products.cpp"
        "Products/Create_Starter_Products.h"
        "Products/Products_Lib.h"
        "Products/Product.cpp"
        "Products/Product.h"
        "Products/Product.cpp")

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
add_executable(Mixing_Teset_2 Mixing_Test_2.cpp ${INGREDIENTS} ${PRODUCTS})
