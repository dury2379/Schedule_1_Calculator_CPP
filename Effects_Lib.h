//
// Created by den on 6/21/25.
//

#ifndef EFFECTS_H
#define EFFECTS_H

#include <algorithm>
#include <cstdint>
#include <map>
#include <string>

namespace Effects_Lib
{
	enum class effect_enum
	{
		ANTI_GRAVITY = 1,
		ATHLETIC,
		BALDING,
		BRIGHT_EYED,
		CALMING,
		CALORIE_DENSE,
		CYCLOPEAN,
		DISORIENTING,
		ELECTRIFYING,
		ENERGIZING,
		EUPHORIC,
		EXPLOSIVE,
		FOCUSED,
		FOGGY,
		GINGERITIS,
		GLOWING,
		JENNERISING,
		LAXATIVE,
		LONG_FACED,
		MUNCHIES,
		PARANOIA,
		REFRESHING,
		SCHIZOPHRENIA,
		SEDATING,
		SEIZURE_INDUCING,
		SHRINKING,
		SLIPPERY,
		SMELLY,
		SNEAKY,
		SPICY,
		THOUGHT_PROVOKING,
		TOXIC,
		TROPIC_THUNDER,
		ZOMBIFYING
	};

	inline static const std::map<effect_enum, std::string> effects_to_string = {
		{effect_enum::ANTI_GRAVITY, "Anti-Gravity"},
		{effect_enum::ATHLETIC, "Athletic"},
		{effect_enum::BALDING, "Balding"},
		{effect_enum::BRIGHT_EYED, "Bright-Eyed"},
		{effect_enum::CALMING, "Calming"},
		{effect_enum::CALORIE_DENSE, "Calorie-Dense"},
		{effect_enum::CYCLOPEAN, "Cyclopean"},
		{effect_enum::DISORIENTING, "Disorienting"},
		{effect_enum::ELECTRIFYING, "Electrifying"},
		{effect_enum::ENERGIZING, "Energizing"},
		{effect_enum::EUPHORIC, "Euphoric"},
		{effect_enum::EXPLOSIVE, "Explosive"},
		{effect_enum::FOCUSED, "Focused"},
		{effect_enum::FOGGY, "Foggy"},
		{effect_enum::GINGERITIS, "Gingeritis"},
		{effect_enum::GLOWING, "Glowing"},
		{effect_enum::JENNERISING, "Jennerising"},
		{effect_enum::LAXATIVE, "Laxative"},
		{effect_enum::LONG_FACED, "Long-Faced"},
		{effect_enum::MUNCHIES, "Munchies"},
		{effect_enum::PARANOIA, "Paranoia"},
		{effect_enum::REFRESHING, "Refreshing"},
		{effect_enum::SCHIZOPHRENIA, "Schizophrenia"},
		{effect_enum::SEDATING, "Sedating"},
		{effect_enum::SEIZURE_INDUCING, "Seizure-Inducing"},
		{effect_enum::SHRINKING, "Shrinking"},
		{effect_enum::SLIPPERY, "Slippery"},
		{effect_enum::SMELLY, "Smelly"},
		{effect_enum::SNEAKY, "Sneaky"},
		{effect_enum::SPICY, "Spicy"},
		{effect_enum::THOUGHT_PROVOKING, "Thought-Provoking"},
		{effect_enum::TOXIC, "Toxic"},
		{effect_enum::TROPIC_THUNDER, "Tropic-Thunder"},
		{effect_enum::ZOMBIFYING, "Zombifying"}
	};

	static const std::map<effect_enum, double> PRICE_MULTIPLIER = {
		{effect_enum::SHRINKING, 0.60},
		{effect_enum::ZOMBIFYING, 0.58},
		{effect_enum::CYCLOPEAN, 0.56},
		{effect_enum::ANTI_GRAVITY, 0.54},
		{effect_enum::LONG_FACED, 0.52},
		{effect_enum::ELECTRIFYING, 0.50},
		{effect_enum::GLOWING, 0.48},
		{effect_enum::TROPIC_THUNDER, 0.46},
		{effect_enum::THOUGHT_PROVOKING, 0.44},
		{effect_enum::JENNERISING, 0.42},
		{effect_enum::BRIGHT_EYED, 0.40},
		{effect_enum::SPICY, 0.38},
		{effect_enum::FOGGY, 0.36},
		{effect_enum::SLIPPERY, 0.34},
		{effect_enum::ATHLETIC, 0.32},
		{effect_enum::BALDING, 0.30},
		{effect_enum::CALORIE_DENSE, 0.28},
		{effect_enum::SEDATING, 0.26},
		{effect_enum::SNEAKY, 0.24},
		{effect_enum::ENERGIZING, 0.22},
		{effect_enum::GINGERITIS, 0.20},
		{effect_enum::EUPHORIC, 0.18},
		{effect_enum::FOCUSED, 0.16},
		{effect_enum::REFRESHING, 0.14},
		{effect_enum::MUNCHIES, 0.12},
		{effect_enum::CALMING, 0.10},
		{effect_enum::DISORIENTING, 0.00},
		{effect_enum::EXPLOSIVE, 0.00},
		{effect_enum::LAXATIVE, 0.00},
		{effect_enum::PARANOIA, 0.00},
		{effect_enum::SCHIZOPHRENIA, 0.00},
		{effect_enum::SEIZURE_INDUCING, 0.00},
		{effect_enum::SMELLY, 0.00},
		{effect_enum::TOXIC, 0.00}
	};

	inline std::vector<effect_enum> to_effects_vector(std::uint64_t effects_long)
	{
		std::vector<effect_enum> result = {};
		std::uint8_t effect_enum_val = 0;

		do
		{
			effect_enum_val = effects_long % 100;
			effects_long /= 100;
			if (effect_enum_val != 0)
			{
				result.push_back(static_cast<effect_enum>(effect_enum_val));
			}
		} while (effect_enum_val != 0);
		std::sort(result.begin(), result.end());

		return result;
	}

	inline std::uint64_t to_effects_int64(std::vector<effect_enum>& effects_vector)
	{
		std::uint64_t result = 0;
		std::sort(effects_vector.begin(), effects_vector.end());

		for (effect_enum& effect: effects_vector)
		{
			result *= 100;
			result += static_cast<int8_t>(effect);
		}

		return result;
	}
};

#endif // EFFECTS_H
