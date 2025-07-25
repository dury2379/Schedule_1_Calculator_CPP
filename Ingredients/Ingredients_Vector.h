//
// Created by den on 7/15/25.
//

#ifndef CREATE_INGREDIENT_VECTOR_H
#define CREATE_INGREDIENT_VECTOR_H
#include "Ingredient.h"


class Ingredients_Vector {
public:
	static Ingredient* create_addy();
	static Ingredient* create_banana();
	static Ingredient* create_battery();
	static Ingredient* create_chili();
	static Ingredient* create_cuke();
	static Ingredient* create_donut();
	static Ingredient* create_energy_drink();
	static Ingredient* create_flu_medicine();
	static Ingredient* create_gasoline();
	static Ingredient* create_horse_semen();
	static Ingredient* create_iodine();
	static Ingredient* create_mega_bean();
	static Ingredient* create_motor_oil();
	static Ingredient* create_mouth_wash();
	static Ingredient* create_paracetamol();
	static Ingredient* create_viagra();
	static const inline std::vector<Ingredient* (*)()> INDEXED_INGREDIENTS = {
		create_addy,
		create_banana,
		create_battery,
		create_chili,
		create_cuke,
		create_donut,
		create_energy_drink,
		create_flu_medicine,
		create_gasoline,
		create_horse_semen,
		create_iodine,
		create_mega_bean,
		create_motor_oil,
		create_mouth_wash,
		create_paracetamol,
		create_viagra
	};
	Ingredients_Vector() = delete;
};



#endif //CREATE_INGREDIENT_VECTOR_H
