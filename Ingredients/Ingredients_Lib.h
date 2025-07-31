//
// Created by den on 6/25/25.
//

#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <cstdint>
#include <map>
#include "../Effects_Lib.h"

namespace Ingredients_Lib
{
	enum class ingredient_type
	{
		ADDY,
		BANANA,
		BATTERY,
		CHILI,
		CUKE,
		DONUT,
		ENERGY_DRINK,
		FLU_MEDICINE,
		GASOLINE,
		HORSE_SEMEN,
		IODINE,
		MEGA_BEAN,
		MOTOR_OIL,
		MOUTH_WASH,
		PARACETAMOL,
		VIAGRA
	};

	static const std::map<ingredient_type, Effects_Lib::effect_enum> ingredient_base_effect = {
		{ingredient_type::ADDY, Effects_Lib::effect_enum::THOUGHT_PROVOKING},
		{ingredient_type::BANANA, Effects_Lib::effect_enum::GINGERITIS},
		{ingredient_type::BATTERY, Effects_Lib::effect_enum::BRIGHT_EYED},
		{ingredient_type::CHILI, Effects_Lib::effect_enum::SPICY},
		{ingredient_type::CUKE, Effects_Lib::effect_enum::ENERGIZING},
		{ingredient_type::DONUT, Effects_Lib::effect_enum::CALORIE_DENSE},
		{ingredient_type::ENERGY_DRINK, Effects_Lib::effect_enum::ATHLETIC},
		{ingredient_type::FLU_MEDICINE, Effects_Lib::effect_enum::SEDATING},
		{ingredient_type::GASOLINE, Effects_Lib::effect_enum::TOXIC},
		{ingredient_type::HORSE_SEMEN, Effects_Lib::effect_enum::LONG_FACED},
		{ingredient_type::IODINE, Effects_Lib::effect_enum::JENNERISING},
		{ingredient_type::MEGA_BEAN, Effects_Lib::effect_enum::FOGGY},
		{ingredient_type::MOTOR_OIL, Effects_Lib::effect_enum::SLIPPERY},
		{ingredient_type::MOUTH_WASH, Effects_Lib::effect_enum::BALDING},
		{ingredient_type::PARACETAMOL, Effects_Lib::effect_enum::SNEAKY},
		{ingredient_type::VIAGRA, Effects_Lib::effect_enum::TROPIC_THUNDER}
	};

	static const std::map<ingredient_type, int> ingredients_costs = {
		{ingredient_type::ADDY, 9},
		{ingredient_type::BANANA, 2},
		{ingredient_type::BATTERY, 8},
		{ingredient_type::CHILI, 7},
		{ingredient_type::CUKE, 2},
		{ingredient_type::DONUT, 3},
		{ingredient_type::ENERGY_DRINK, 6},
		{ingredient_type::FLU_MEDICINE, 5},
		{ingredient_type::GASOLINE, 5},
		{ingredient_type::HORSE_SEMEN, 9},
		{ingredient_type::IODINE, 8},
		{ingredient_type::MEGA_BEAN, 7},
		{ingredient_type::MOTOR_OIL, 6},
		{ingredient_type::MOUTH_WASH, 4},
		{ingredient_type::PARACETAMOL, 3},
		{ingredient_type::VIAGRA, 4}
	};

	static const std::map<ingredient_type, std::string> ingredient_to_string = {
		{ingredient_type::ADDY, "Addy"},
		{ingredient_type::BANANA, "Banana"},
		{ingredient_type::BATTERY, "Battery"},
		{ingredient_type::CHILI, "Chili"},
		{ingredient_type::CUKE, "Cuke"},
		{ingredient_type::DONUT, "Donut"},
		{ingredient_type::ENERGY_DRINK, "Energy Drink"},
		{ingredient_type::FLU_MEDICINE, "Flu Medicine"},
		{ingredient_type::GASOLINE, "Gasoline"},
		{ingredient_type::HORSE_SEMEN, "Horse Semen"},
		{ingredient_type::IODINE, "Iodine"},
		{ingredient_type::MEGA_BEAN, "Mega Bean"},
		{ingredient_type::MOTOR_OIL, "Motor Oil"},
		{ingredient_type::MOUTH_WASH, "Mouth Wash"},
		{ingredient_type::PARACETAMOL, "Paracetamol"},
		{ingredient_type::VIAGRA, "Viagra"}
	}
	/*


				{Effects_Lib::effect_enum::, {Effects_Lib::effect_enum::, Effects_Lib::effect_enum::}},
	*/
	static const std::map<ingredient_type, std::map<Effects_Lib::effect_enum, std::pair<Effects_Lib::effect_enum, Effects_Lib::effect_enum>>> transforms_map = {
		{
			ingredient_type::ADDY, {
				{Effects_Lib::effect_enum::EXPLOSIVE, {Effects_Lib::effect_enum::EXPLOSIVE, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::ENERGIZING}},
				{Effects_Lib::effect_enum::GLOWING, {Effects_Lib::effect_enum::GLOWING, Effects_Lib::effect_enum::REFRESHING}},
				{Effects_Lib::effect_enum::LONG_FACED, {Effects_Lib::effect_enum::LONG_FACED, Effects_Lib::effect_enum::ELECTRIFYING}},
				{Effects_Lib::effect_enum::SEDATING, {Effects_Lib::effect_enum::SEDATING, Effects_Lib::effect_enum::GINGERITIS}}
			},
		},
		{
			ingredient_type::BANANA, {
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::SNEAKY}},
				{Effects_Lib::effect_enum::CYCLOPEAN, {Effects_Lib::effect_enum::CYCLOPEAN, Effects_Lib::effect_enum::ENERGIZING}},
				{Effects_Lib::effect_enum::DISORIENTING, {Effects_Lib::effect_enum::DISORIENTING, Effects_Lib::effect_enum::FOCUSED}},
				{Effects_Lib::effect_enum::ENERGIZING, {Effects_Lib::effect_enum::ENERGIZING, Effects_Lib::effect_enum::THOUGHT_PROVOKING}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::SEIZURE_INDUCING}},
				{Effects_Lib::effect_enum::LONG_FACED, {Effects_Lib::effect_enum::LONG_FACED, Effects_Lib::effect_enum::REFRESHING}},
				{Effects_Lib::effect_enum::PARANOIA, {Effects_Lib::effect_enum::PARANOIA, Effects_Lib::effect_enum::JENNERISING}},
				{Effects_Lib::effect_enum::SMELLY, {Effects_Lib::effect_enum::SMELLY, Effects_Lib::effect_enum::ANTI_GRAVITY}},
				{Effects_Lib::effect_enum::TOXIC, {Effects_Lib::effect_enum::TOXIC, Effects_Lib::effect_enum::SMELLY}}
			}
		},
		{
			ingredient_type::BATTERY, {
				{Effects_Lib::effect_enum::CYCLOPEAN, {Effects_Lib::effect_enum::CYCLOPEAN, Effects_Lib::effect_enum::GLOWING}},
				{Effects_Lib::effect_enum::ELECTRIFYING, {Effects_Lib::effect_enum::ELECTRIFYING, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::ZOMBIFYING}},
				{Effects_Lib::effect_enum::LAXATIVE, {Effects_Lib::effect_enum::LAXATIVE, Effects_Lib::effect_enum::CALORIE_DENSE}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::TROPIC_THUNDER}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::MUNCHIES}}
			}
		},
		{
			ingredient_type::CHILI, {
				{Effects_Lib::effect_enum::ANTI_GRAVITY, {Effects_Lib::effect_enum::ANTI_GRAVITY, Effects_Lib::effect_enum::TROPIC_THUNDER}},
				{Effects_Lib::effect_enum::ATHLETIC, {Effects_Lib::effect_enum::ATHLETIC, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::LAXATIVE, {Effects_Lib::effect_enum::LAXATIVE, Effects_Lib::effect_enum::LONG_FACED}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::REFRESHING}},
				{Effects_Lib::effect_enum::SNEAKY, {Effects_Lib::effect_enum::SNEAKY, Effects_Lib::effect_enum::BRIGHT_EYED}}
			}
		},
		{
			ingredient_type::CUKE, {
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::LAXATIVE}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::CYCLOPEAN}},
				{Effects_Lib::effect_enum::GINGERITIS, {Effects_Lib::effect_enum::GINGERITIS, Effects_Lib::effect_enum::THOUGHT_PROVOKING}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::ATHLETIC}},
				{Effects_Lib::effect_enum::SLIPPERY, {Effects_Lib::effect_enum::SLIPPERY, Effects_Lib::effect_enum::MUNCHIES}},
				{Effects_Lib::effect_enum::SNEAKY, {Effects_Lib::effect_enum::SNEAKY, Effects_Lib::effect_enum::PARANOIA}},
				{Effects_Lib::effect_enum::TOXIC, {Effects_Lib::effect_enum::TOXIC, Effects_Lib::effect_enum::EUPHORIC}}
			}
		},
		{
			ingredient_type::DONUT, {
				{Effects_Lib::effect_enum::ANTI_GRAVITY, {Effects_Lib::effect_enum::ANTI_GRAVITY, Effects_Lib::effect_enum::SLIPPERY}},
				{Effects_Lib::effect_enum::BALDING, {Effects_Lib::effect_enum::BALDING, Effects_Lib::effect_enum::SNEAKY}},
				{Effects_Lib::effect_enum::CALORIE_DENSE, {Effects_Lib::effect_enum::CALORIE_DENSE, Effects_Lib::effect_enum::EXPLOSIVE}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::JENNERISING, {Effects_Lib::effect_enum::JENNERISING, Effects_Lib::effect_enum::GINGERITIS}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::ENERGIZING}}
			}
		},
		{
			ingredient_type::ENERGY_DRINK, {
				{Effects_Lib::effect_enum::DISORIENTING, {Effects_Lib::effect_enum::DISORIENTING, Effects_Lib::effect_enum::ELECTRIFYING}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::ENERGIZING}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::SHRINKING}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::SHRINKING}},
				{Effects_Lib::effect_enum::GLOWING, {Effects_Lib::effect_enum::GLOWING, Effects_Lib::effect_enum::DISORIENTING}},
				{Effects_Lib::effect_enum::SCHIZOPHRENIA, {Effects_Lib::effect_enum::SCHIZOPHRENIA, Effects_Lib::effect_enum::BALDING}},
				{Effects_Lib::effect_enum::SEDATING, {Effects_Lib::effect_enum::SEDATING, Effects_Lib::effect_enum::MUNCHIES}},
				{Effects_Lib::effect_enum::SPICY, {Effects_Lib::effect_enum::SPICY, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::TROPIC_THUNDER, {Effects_Lib::effect_enum::TROPIC_THUNDER, Effects_Lib::effect_enum::SNEAKY}}
			}
		},
		{
			ingredient_type::FLU_MEDICINE, {
				{Effects_Lib::effect_enum::ATHLETIC, {Effects_Lib::effect_enum::ATHLETIC, Effects_Lib::effect_enum::MUNCHIES}},
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::BRIGHT_EYED}},
				{Effects_Lib::effect_enum::CYCLOPEAN, {Effects_Lib::effect_enum::CYCLOPEAN, Effects_Lib::effect_enum::FOGGY}},
				{Effects_Lib::effect_enum::ELECTRIFYING, {Effects_Lib::effect_enum::ELECTRIFYING, Effects_Lib::effect_enum::REFRESHING}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::LAXATIVE, {Effects_Lib::effect_enum::LAXATIVE, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::SLIPPERY}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::PARANOIA}},
				{Effects_Lib::effect_enum::THOUGHT_PROVOKING, {Effects_Lib::effect_enum::THOUGHT_PROVOKING, Effects_Lib::effect_enum::GINGERITIS}}
			}
		},
		{
			ingredient_type::GASOLINE, {
				{Effects_Lib::effect_enum::DISORIENTING, {Effects_Lib::effect_enum::DISORIENTING, Effects_Lib::effect_enum::GLOWING}},
				{Effects_Lib::effect_enum::ELECTRIFYING, {Effects_Lib::effect_enum::ELECTRIFYING, Effects_Lib::effect_enum::DISORIENTING}},
				{Effects_Lib::effect_enum::ENERGIZING, {Effects_Lib::effect_enum::ENERGIZING, Effects_Lib::effect_enum::EUPHORIC}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::SPICY}},
				{Effects_Lib::effect_enum::GINGERITIS, {Effects_Lib::effect_enum::GINGERITIS, Effects_Lib::effect_enum::SMELLY}},
				{Effects_Lib::effect_enum::JENNERISING, {Effects_Lib::effect_enum::JENNERISING, Effects_Lib::effect_enum::SNEAKY}},
				{Effects_Lib::effect_enum::LAXATIVE, {Effects_Lib::effect_enum::LAXATIVE, Effects_Lib::effect_enum::FOGGY}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::SEDATING}},
				{Effects_Lib::effect_enum::PARANOIA, {Effects_Lib::effect_enum::PARANOIA, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::FOCUSED}},
				{Effects_Lib::effect_enum::SNEAKY, {Effects_Lib::effect_enum::SNEAKY, Effects_Lib::effect_enum::TROPIC_THUNDER}}
			}
		},
		{
			ingredient_type::HORSE_SEMEN, {
				{Effects_Lib::effect_enum::ANTI_GRAVITY, {Effects_Lib::effect_enum::ANTI_GRAVITY, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::GINGERITIS, {Effects_Lib::effect_enum::GINGERITIS, Effects_Lib::effect_enum::REFRESHING}},
				{Effects_Lib::effect_enum::SEIZURE_INDUCING, {Effects_Lib::effect_enum::SEIZURE_INDUCING, Effects_Lib::effect_enum::ENERGIZING}},
				{Effects_Lib::effect_enum::THOUGHT_PROVOKING, {Effects_Lib::effect_enum::THOUGHT_PROVOKING, Effects_Lib::effect_enum::ELECTRIFYING}}
			}
		},
		{
			ingredient_type::IODINE, {
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::BALDING}},
				{Effects_Lib::effect_enum::CALORIE_DENSE, {Effects_Lib::effect_enum::CALORIE_DENSE, Effects_Lib::effect_enum::GINGERITIS}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::SEIZURE_INDUCING}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::PARANOIA}},
				{Effects_Lib::effect_enum::REFRESHING, {Effects_Lib::effect_enum::REFRESHING, Effects_Lib::effect_enum::THOUGHT_PROVOKING}},
				{Effects_Lib::effect_enum::TOXIC, {Effects_Lib::effect_enum::TOXIC, Effects_Lib::effect_enum::SNEAKY}}
			}
		},
		{
			ingredient_type::MEGA_BEAN, {
				{Effects_Lib::effect_enum::ATHLETIC, {Effects_Lib::effect_enum::ATHLETIC, Effects_Lib::effect_enum::LAXATIVE}},
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::GLOWING}},
				{Effects_Lib::effect_enum::ENERGIZING, {Effects_Lib::effect_enum::ENERGIZING, Effects_Lib::effect_enum::CYCLOPEAN}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::DISORIENTING}},
				{Effects_Lib::effect_enum::JENNERISING, {Effects_Lib::effect_enum::JENNERISING, Effects_Lib::effect_enum::PARANOIA}},
				{Effects_Lib::effect_enum::SEIZURE_INDUCING, {Effects_Lib::effect_enum::SEIZURE_INDUCING, Effects_Lib::effect_enum::FOCUSED}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::ELECTRIFYING}},
				{Effects_Lib::effect_enum::SLIPPERY, {Effects_Lib::effect_enum::SLIPPERY, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::SNEAKY, {Effects_Lib::effect_enum::SNEAKY, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::THOUGHT_PROVOKING, {Effects_Lib::effect_enum::THOUGHT_PROVOKING, Effects_Lib::effect_enum::ENERGIZING}}
			}
		},
		{
			ingredient_type::MOTOR_OIL, {
				{Effects_Lib::effect_enum::ENERGIZING, {Effects_Lib::effect_enum::ENERGIZING, Effects_Lib::effect_enum::MUNCHIES}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::SEDATING}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::SCHIZOPHRENIA}},
				{Effects_Lib::effect_enum::PARANOIA, {Effects_Lib::effect_enum::PARANOIA, Effects_Lib::effect_enum::ANTI_GRAVITY}}
			}
		},
		{
			ingredient_type::MOUTH_WASH, {
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::ANTI_GRAVITY}},
				{Effects_Lib::effect_enum::CALORIE_DENSE, {Effects_Lib::effect_enum::CALORIE_DENSE, Effects_Lib::effect_enum::SNEAKY}},
				{Effects_Lib::effect_enum::EXPLOSIVE, {Effects_Lib::effect_enum::EXPLOSIVE, Effects_Lib::effect_enum::SEDATING}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::JENNERISING}}
			}
		},
		{
			ingredient_type::PARACETAMOL, {
				{Effects_Lib::effect_enum::CALMING, {Effects_Lib::effect_enum::CALMING, Effects_Lib::effect_enum::SLIPPERY}},
				{Effects_Lib::effect_enum::ELECTRIFYING, {Effects_Lib::effect_enum::ELECTRIFYING, Effects_Lib::effect_enum::ATHLETIC}},
				{Effects_Lib::effect_enum::ENERGIZING, {Effects_Lib::effect_enum::ENERGIZING, Effects_Lib::effect_enum::PARANOIA}},
				{Effects_Lib::effect_enum::FOCUSED, {Effects_Lib::effect_enum::FOCUSED, Effects_Lib::effect_enum::GINGERITIS}},
				{Effects_Lib::effect_enum::FOGGY, {Effects_Lib::effect_enum::FOGGY, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::GLOWING, {Effects_Lib::effect_enum::GLOWING, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::MUNCHIES, {Effects_Lib::effect_enum::MUNCHIES, Effects_Lib::effect_enum::ANTI_GRAVITY}},
				{Effects_Lib::effect_enum::PARANOIA, {Effects_Lib::effect_enum::PARANOIA, Effects_Lib::effect_enum::BALDING}},
				{Effects_Lib::effect_enum::SPICY, {Effects_Lib::effect_enum::SPICY, Effects_Lib::effect_enum::BRIGHT_EYED}},
				{Effects_Lib::effect_enum::TOXIC, {Effects_Lib::effect_enum::TOXIC, Effects_Lib::effect_enum::TROPIC_THUNDER}}
			}
		},
		{
			ingredient_type::VIAGRA, {
				{Effects_Lib::effect_enum::ATHLETIC, {Effects_Lib::effect_enum::ATHLETIC, Effects_Lib::effect_enum::SNEAKY}},
				{Effects_Lib::effect_enum::DISORIENTING, {Effects_Lib::effect_enum::DISORIENTING, Effects_Lib::effect_enum::TOXIC}},
				{Effects_Lib::effect_enum::EUPHORIC, {Effects_Lib::effect_enum::EUPHORIC, Effects_Lib::effect_enum::BRIGHT_EYED}},
				{Effects_Lib::effect_enum::LAXATIVE, {Effects_Lib::effect_enum::LAXATIVE, Effects_Lib::effect_enum::CALMING}},
				{Effects_Lib::effect_enum::SHRINKING, {Effects_Lib::effect_enum::SHRINKING, Effects_Lib::effect_enum::GINGERITIS}}
			}
		}
	};

	std::uint64_t process_effects(ingredient_type ingr, const std::uint64_t effects_int64)
	{
		std::vector<Effects_Lib::effect_enum> new_effects_vector = Effects_Lib::to_effects_vector(effects_int64);
		std::vector<std::pair<Effects_Lib::effect_enum, Effects_Lib::effect_enum>> staged_transforms = {};

		for (int i = new_effects_vector.size() - 1; i >= 0; i--)
		{
			if (transforms_map.at(ingr).contains(new_effects_vector[i]))
			{
				staged_transforms.push_back(transforms_map.at(ingr).at(new_effects_vector[i]));
				new_effects_vector.erase(new_effects_vector.begin() + i);
			}
		}

		for (std::pair<Effects_Lib::effect_enum, Effects_Lib::effect_enum>& transform: staged_transforms)
		{
			if (std::find(new_effects_vector.begin(), new_effects_vector.end(), transform.second) != new_effects_vector.end())
			{
				std::swap(transform.first, transform.second);
			}
			new_effects_vector.push_back(transform.second);
		}

		if (new_effects_vector.size() < 8 &&
			std::find(new_effects_vector.begin(), new_effects_vector.end(), ingredient_base_effect.at(ingr)) == new_effects_vector.end())
		{
			new_effects_vector.push_back(ingredient_base_effect.at(ingr));
		}

		return Effects_Lib::to_effects_int64(new_effects_vector);
	}
}

#endif //INGREDIENTS_H
