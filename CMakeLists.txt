cmake_minimum_required(VERSION 3.2)
project(Effects_Calculator)

set(CMAKE_CXX_STANDARD 20)

file(GLOB INGREDIENTS
        "Ingredients/Ingredient.cpp"
        "Ingredients/Ingredient.h"
        "Ingredients/Ingredients_Vector.cpp"
        "Ingredients/Ingredients_Vector.h"
        "Ingredients/Ingredients.h"
        "Ingredients/Addy.cpp"
        "Ingredients/Addy.h"
        "Ingredients/Banana.cpp"
        "Ingredients/Banana.h"
        "Ingredients/Battery.cpp"
        "Ingredients/Battery.h"
        "Ingredients/Chili.cpp"
        "Ingredients/Chili.h"
        "Ingredients/Cuke.cpp"
        "Ingredients/Cuke.h"
        "Ingredients/Donut.cpp"
        "Ingredients/Donut.h"
        "Ingredients/Energy_Drink.cpp"
        "Ingredients/Energy_Drink.h"
        "Ingredients/Flu_Medicine.cpp"
        "Ingredients/Flu_Medicine.h"
        "Ingredients/Gasoline.cpp"
        "Ingredients/Gasoline.h"
        "Ingredients/Horse_Semen.cpp"
        "Ingredients/Horse_Semen.h"
        "Ingredients/Iodine.cpp"
        "Ingredients/Iodine.h"
        "Ingredients/Mega_Bean.cpp"
        "Ingredients/Mega_Bean.h"
        "Ingredients/Motor_Oil.cpp"
        "Ingredients/Motor_Oil.h"
        "Ingredients/Mouth_Wash.cpp"
        "Ingredients/Mouth_Wash.h"
        "Ingredients/Paracetamol.cpp"
        "Ingredients/Paracetamol.h"
        "Ingredients/Viagra.cpp"
        "Ingredients/Viagra.h")

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

add_executable(BFS BFS.cpp ${INGREDIENTS} ${PRODUCTS} ${CONDITIONS}
        Ingredients/Ingredients_Vector.cpp
        Ingredients/Ingredients_Vector.h)

add_executable(Comparing_Sets Comparing_Sets.cpp)

add_executable(Product_Mem_Test ${INGREDIENTS} ${PRODUCTS}
        Product_Mem_Test.cpp)

add_executable(Sets_Contains_Test sets_contain_test.cpp)
add_executable(Create_Ingredient_Vector_Test Ingredients/Ingredients_Vector.cpp Ingredients/Ingredients_Vector.h)

add_executable(Max_Profit Max_Profit.cpp
        ${INGREDIENTS} ${PRODUCTS} ${CONDITIONS})
