//
// Created by den on 6/25/25.
//

#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <cstdint>

#include "Effects.h"

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

	static const std::map<ingredient_type, Effects::effect_enum> ingredient_base_effect = {
		{ingredient_type::ADDY, Effects::effect_enum::THOUGHT_PROVOKING},
		{ingredient_type::BANANA, Effects::effect_enum::GINGERITIS},
		{ingredient_type::BATTERY, Effects::effect_enum::BRIGHT_EYED},
		{ingredient_type::CHILI, Effects::effect_enum::SPICY},
		{ingredient_type::CUKE, Effects::effect_enum::ENERGIZING},
		{ingredient_type::DONUT, Effects::effect_enum::CALORIE_DENSE},
		{ingredient_type::ENERGY_DRINK, Effects::effect_enum::ATHLETIC},
		{ingredient_type::FLU_MEDICINE, Effects::effect_enum::SEDATING},
		{ingredient_type::GASOLINE, Effects::effect_enum::TOXIC},
		{ingredient_type::HORSE_SEMEN, Effects::effect_enum::LONG_FACED},
		{ingredient_type::IODINE, Effects::effect_enum::JENNERISING},
		{ingredient_type::MEGA_BEAN, Effects::effect_enum::FOGGY},
		{ingredient_type::MOTOR_OIL, Effects::effect_enum::SLIPPERY},
		{ingredient_type::MOUTH_WASH, Effects::effect_enum::BALDING},
		{ingredient_type::PARACETAMOL, Effects::effect_enum::SNEAKY},
		{ingredient_type::VIAGRA, Effects::effect_enum::TROPIC_THUNDER}
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
	/*


				{Effects::effect_enum::, {Effects::effect_enum::, Effects::effect_enum::}},
	*/
	static const std::map<ingredient_type, std::map<Effects::effect_enum, std::pair<Effects::effect_enum, Effects::effect_enum>>> transforms_map = {
		{
			ingredient_type::ADDY, {
				{Effects::effect_enum::EXPLOSIVE, {Effects::effect_enum::EXPLOSIVE, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::ENERGIZING}},
				{Effects::effect_enum::GLOWING, {Effects::effect_enum::GLOWING, Effects::effect_enum::REFRESHING}},
				{Effects::effect_enum::LONG_FACED, {Effects::effect_enum::LONG_FACED, Effects::effect_enum::ELECTRIFYING}},
				{Effects::effect_enum::SEDATING, {Effects::effect_enum::SEDATING, Effects::effect_enum::GINGERITIS}}
			},
		},
		{
			ingredient_type::BANANA, {
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::SNEAKY}},
				{Effects::effect_enum::CYCLOPEAN, {Effects::effect_enum::CYCLOPEAN, Effects::effect_enum::ENERGIZING}},
				{Effects::effect_enum::DISORIENTING, {Effects::effect_enum::DISORIENTING, Effects::effect_enum::FOCUSED}},
				{Effects::effect_enum::ENERGIZING, {Effects::effect_enum::ENERGIZING, Effects::effect_enum::THOUGHT_PROVOKING}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::SEIZURE_INDUCING}},
				{Effects::effect_enum::LONG_FACED, {Effects::effect_enum::LONG_FACED, Effects::effect_enum::REFRESHING}},
				{Effects::effect_enum::PARANOIA, {Effects::effect_enum::PARANOIA, Effects::effect_enum::JENNERISING}},
				{Effects::effect_enum::SMELLY, {Effects::effect_enum::SMELLY, Effects::effect_enum::ANTI_GRAVITY}},
				{Effects::effect_enum::TOXIC, {Effects::effect_enum::TOXIC, Effects::effect_enum::SMELLY}}
			}
		},
		{
			ingredient_type::BATTERY, {
				{Effects::effect_enum::CYCLOPEAN, {Effects::effect_enum::CYCLOPEAN, Effects::effect_enum::GLOWING}},
				{Effects::effect_enum::ELECTRIFYING, {Effects::effect_enum::ELECTRIFYING, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::ZOMBIFYING}},
				{Effects::effect_enum::LAXATIVE, {Effects::effect_enum::LAXATIVE, Effects::effect_enum::CALORIE_DENSE}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::TROPIC_THUNDER}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::MUNCHIES}}
			}
		},
		{
			ingredient_type::CHILI, {
				{Effects::effect_enum::ANTI_GRAVITY, {Effects::effect_enum::ANTI_GRAVITY, Effects::effect_enum::TROPIC_THUNDER}},
				{Effects::effect_enum::ATHLETIC, {Effects::effect_enum::ATHLETIC, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::LAXATIVE, {Effects::effect_enum::LAXATIVE, Effects::effect_enum::LONG_FACED}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::REFRESHING}},
				{Effects::effect_enum::SNEAKY, {Effects::effect_enum::SNEAKY, Effects::effect_enum::BRIGHT_EYED}}
			}
		},
		{
			ingredient_type::CUKE, {
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::LAXATIVE}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::CYCLOPEAN}},
				{Effects::effect_enum::GINGERITIS, {Effects::effect_enum::GINGERITIS, Effects::effect_enum::THOUGHT_PROVOKING}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::ATHLETIC}},
				{Effects::effect_enum::SLIPPERY, {Effects::effect_enum::SLIPPERY, Effects::effect_enum::MUNCHIES}},
				{Effects::effect_enum::SNEAKY, {Effects::effect_enum::SNEAKY, Effects::effect_enum::PARANOIA}},
				{Effects::effect_enum::TOXIC, {Effects::effect_enum::TOXIC, Effects::effect_enum::EUPHORIC}}
			}
		},
		{
			ingredient_type::DONUT, {
				{Effects::effect_enum::ANTI_GRAVITY, {Effects::effect_enum::ANTI_GRAVITY, Effects::effect_enum::SLIPPERY}},
				{Effects::effect_enum::BALDING, {Effects::effect_enum::BALDING, Effects::effect_enum::SNEAKY}},
				{Effects::effect_enum::CALORIE_DENSE, {Effects::effect_enum::CALORIE_DENSE, Effects::effect_enum::EXPLOSIVE}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::JENNERISING, {Effects::effect_enum::JENNERISING, Effects::effect_enum::GINGERITIS}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::ENERGIZING}}
			}
		},
		{
			ingredient_type::ENERGY_DRINK, {
				{Effects::effect_enum::DISORIENTING, {Effects::effect_enum::DISORIENTING, Effects::effect_enum::ELECTRIFYING}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::ENERGIZING}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::SHRINKING}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::SHRINKING}},
				{Effects::effect_enum::GLOWING, {Effects::effect_enum::GLOWING, Effects::effect_enum::DISORIENTING}},
				{Effects::effect_enum::SCHIZOPHRENIA, {Effects::effect_enum::SCHIZOPHRENIA, Effects::effect_enum::BALDING}},
				{Effects::effect_enum::SEDATING, {Effects::effect_enum::SEDATING, Effects::effect_enum::MUNCHIES}},
				{Effects::effect_enum::SPICY, {Effects::effect_enum::SPICY, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::TROPIC_THUNDER, {Effects::effect_enum::TROPIC_THUNDER, Effects::effect_enum::SNEAKY}}
			}
		},
		{
			ingredient_type::FLU_MEDICINE, {
				{Effects::effect_enum::ATHLETIC, {Effects::effect_enum::ATHLETIC, Effects::effect_enum::MUNCHIES}},
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::BRIGHT_EYED}},
				{Effects::effect_enum::CYCLOPEAN, {Effects::effect_enum::CYCLOPEAN, Effects::effect_enum::FOGGY}},
				{Effects::effect_enum::ELECTRIFYING, {Effects::effect_enum::ELECTRIFYING, Effects::effect_enum::REFRESHING}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::LAXATIVE, {Effects::effect_enum::LAXATIVE, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::SLIPPERY}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::PARANOIA}},
				{Effects::effect_enum::THOUGHT_PROVOKING, {Effects::effect_enum::THOUGHT_PROVOKING, Effects::effect_enum::GINGERITIS}}
			}
		},
		{
			ingredient_type::GASOLINE, {
				{Effects::effect_enum::DISORIENTING, {Effects::effect_enum::DISORIENTING, Effects::effect_enum::GLOWING}},
				{Effects::effect_enum::ELECTRIFYING, {Effects::effect_enum::ELECTRIFYING, Effects::effect_enum::DISORIENTING}},
				{Effects::effect_enum::ENERGIZING, {Effects::effect_enum::ENERGIZING, Effects::effect_enum::EUPHORIC}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::SPICY}},
				{Effects::effect_enum::GINGERITIS, {Effects::effect_enum::GINGERITIS, Effects::effect_enum::SMELLY}},
				{Effects::effect_enum::JENNERISING, {Effects::effect_enum::JENNERISING, Effects::effect_enum::SNEAKY}},
				{Effects::effect_enum::LAXATIVE, {Effects::effect_enum::LAXATIVE, Effects::effect_enum::FOGGY}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::SEDATING}},
				{Effects::effect_enum::PARANOIA, {Effects::effect_enum::PARANOIA, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::FOCUSED}},
				{Effects::effect_enum::SNEAKY, {Effects::effect_enum::SNEAKY, Effects::effect_enum::TROPIC_THUNDER}}
			}
		},
		{
			ingredient_type::HORSE_SEMEN, {
				{Effects::effect_enum::ANTI_GRAVITY, {Effects::effect_enum::ANTI_GRAVITY, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::GINGERITIS, {Effects::effect_enum::GINGERITIS, Effects::effect_enum::REFRESHING}},
				{Effects::effect_enum::SEIZURE_INDUCING, {Effects::effect_enum::SEIZURE_INDUCING, Effects::effect_enum::ENERGIZING}},
				{Effects::effect_enum::THOUGHT_PROVOKING, {Effects::effect_enum::THOUGHT_PROVOKING, Effects::effect_enum::ELECTRIFYING}}
			}
		},
		{
			ingredient_type::IODINE, {
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::BALDING}},
				{Effects::effect_enum::CALORIE_DENSE, {Effects::effect_enum::CALORIE_DENSE, Effects::effect_enum::GINGERITIS}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::SEIZURE_INDUCING}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::PARANOIA}},
				{Effects::effect_enum::REFRESHING, {Effects::effect_enum::REFRESHING, Effects::effect_enum::THOUGHT_PROVOKING}},
				{Effects::effect_enum::TOXIC, {Effects::effect_enum::TOXIC, Effects::effect_enum::SNEAKY}}
			}
		},
		{
			ingredient_type::MEGA_BEAN, {
				{Effects::effect_enum::ATHLETIC, {Effects::effect_enum::ATHLETIC, Effects::effect_enum::LAXATIVE}},
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::GLOWING}},
				{Effects::effect_enum::ENERGIZING, {Effects::effect_enum::ENERGIZING, Effects::effect_enum::CYCLOPEAN}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::DISORIENTING}},
				{Effects::effect_enum::JENNERISING, {Effects::effect_enum::JENNERISING, Effects::effect_enum::PARANOIA}},
				{Effects::effect_enum::SEIZURE_INDUCING, {Effects::effect_enum::SEIZURE_INDUCING, Effects::effect_enum::FOCUSED}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::ELECTRIFYING}},
				{Effects::effect_enum::SLIPPERY, {Effects::effect_enum::SLIPPERY, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::SNEAKY, {Effects::effect_enum::SNEAKY, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::THOUGHT_PROVOKING, {Effects::effect_enum::THOUGHT_PROVOKING, Effects::effect_enum::ENERGIZING}}
			}
		},
		{
			ingredient_type::MOTOR_OIL, {
				{Effects::effect_enum::ENERGIZING, {Effects::effect_enum::ENERGIZING, Effects::effect_enum::MUNCHIES}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::SEDATING}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::SCHIZOPHRENIA}},
				{Effects::effect_enum::PARANOIA, {Effects::effect_enum::PARANOIA, Effects::effect_enum::ANTI_GRAVITY}}
			}
		},
		{
			ingredient_type::MOUTH_WASH, {
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::ANTI_GRAVITY}},
				{Effects::effect_enum::CALORIE_DENSE, {Effects::effect_enum::CALORIE_DENSE, Effects::effect_enum::SNEAKY}},
				{Effects::effect_enum::EXPLOSIVE, {Effects::effect_enum::EXPLOSIVE, Effects::effect_enum::SEDATING}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::JENNERISING}}
			}
		},
		{
			ingredient_type::PARACETAMOL, {
				{Effects::effect_enum::CALMING, {Effects::effect_enum::CALMING, Effects::effect_enum::SLIPPERY}},
				{Effects::effect_enum::ELECTRIFYING, {Effects::effect_enum::ELECTRIFYING, Effects::effect_enum::ATHLETIC}},
				{Effects::effect_enum::ENERGIZING, {Effects::effect_enum::ENERGIZING, Effects::effect_enum::PARANOIA}},
				{Effects::effect_enum::FOCUSED, {Effects::effect_enum::FOCUSED, Effects::effect_enum::GINGERITIS}},
				{Effects::effect_enum::FOGGY, {Effects::effect_enum::FOGGY, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::GLOWING, {Effects::effect_enum::GLOWING, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::MUNCHIES, {Effects::effect_enum::MUNCHIES, Effects::effect_enum::ANTI_GRAVITY}},
				{Effects::effect_enum::PARANOIA, {Effects::effect_enum::PARANOIA, Effects::effect_enum::BALDING}},
				{Effects::effect_enum::SPICY, {Effects::effect_enum::SPICY, Effects::effect_enum::BRIGHT_EYED}},
				{Effects::effect_enum::TOXIC, {Effects::effect_enum::TOXIC, Effects::effect_enum::TROPIC_THUNDER}}
			}
		},
		{
			ingredient_type::VIAGRA, {
				{Effects::effect_enum::ATHLETIC, {Effects::effect_enum::ATHLETIC, Effects::effect_enum::SNEAKY}},
				{Effects::effect_enum::DISORIENTING, {Effects::effect_enum::DISORIENTING, Effects::effect_enum::TOXIC}},
				{Effects::effect_enum::EUPHORIC, {Effects::effect_enum::EUPHORIC, Effects::effect_enum::BRIGHT_EYED}},
				{Effects::effect_enum::LAXATIVE, {Effects::effect_enum::LAXATIVE, Effects::effect_enum::CALMING}},
				{Effects::effect_enum::SHRINKING, {Effects::effect_enum::SHRINKING, Effects::effect_enum::GINGERITIS}}
			}
		}
	};

	std::uint64_t process_effects(ingredient_type ingr, const std::uint64_t effects_int64)
	{
		std::vector<Effects::effect_enum> new_effects_vector = Effects::to_effects_vector(effects_int64);
		std::vector<std::pair<Effects::effect_enum, Effects::effect_enum>> staged_transforms = {};

		for (int i = new_effects_vector.size() - 1; i >= 0; i--)
		{
			if (transforms_map.at(ingr).contains(new_effects_vector[i]))
			{
				staged_transforms.push_back(transforms_map.at(ingr).at(new_effects_vector[i]));
				new_effects_vector.erase(new_effects_vector.begin() + i);
			}
		}

		for (std::pair<Effects::effect_enum, Effects::effect_enum>& transform: staged_transforms)
		{
			if (std::find(new_effects_vector.begin(), new_effects_vector.end(), transform.second) != new_effects_vector.end())
			{
				std::swap(transform.first, transform.second);
			}
			new_effects_vector.push_back(transform.second);
		}

		if (new_effects_vector.size() < 8)
		{
			new_effects_vector.push_back(ingredient_base_effect.at(ingr));
		}

		return Effects::to_effects_int64(new_effects_vector);
	}
}

#endif //INGREDIENTS_H
