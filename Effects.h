//
// Created by den on 6/21/25.
//

#ifndef EFFECTS_H
#define EFFECTS_H

#include <map>
#include <string>

namespace Effects
{
	static const std::string Anti_Gravity = "Anti-Gravity";
	static const std::string Athletic = "Athletic";
	static const std::string Balding = "Balding";
	static const std::string Bright_Eyed = "Bright-Eyed";
	static const std::string Calming = "Calming";
	static const std::string Calorie_Dense = "Calorie-Dense";
	static const std::string Cyclopean = "Cyclopean";
	static const std::string Disorienting = "Disorienting";
	static const std::string Electrifying = "Electrifying";
	static const std::string Energizing = "Energizing";
	static const std::string Euphoric = "Euphoric";
	static const std::string Explosive = "Explosive";
	static const std::string Focused = "Focused";
	static const std::string Foggy = "Foggy";
	static const std::string Gingeritis = "Gingeritis";
	static const std::string Glowing = "Glowing";
	static const std::string Jennerising = "Jennerising";
	static const std::string Laxative = "Laxative";
	static const std::string Long_Faced = "Long-Faced";
	static const std::string Munchies = "Munchies";
	static const std::string Paranoia = "Paranoia";
	static const std::string Refreshing = "Refreshing";
	static const std::string Schizophrenia = "Schizophrenia";
	static const std::string Sedating = "Sedating";
	static const std::string Seizure_Inducing = "Seizure-Inducing";
	static const std::string Shrinking = "Shrinking";
	static const std::string Slippery = "Slippery";
	static const std::string Smelly = "Smelly";
	static const std::string Sneaky = "Sneaky";
	static const std::string Spicy = "Spicy";
	static const std::string Thought_Provoking = "Thought-Provoking";
	static const std::string Toxic = "Toxic";
	static const std::string Tropic_Thunder = "Tropic-Thunder";
	static const std::string Zombifying = "Zombifying";

	static const std::map<std::string, double> PRICE_MULTIPLIER = {
		{Shrinking, 0.60},
		{Zombifying, 0.58},
		{Cyclopean, 0.56},
		{Anti_Gravity, 0.54},
		{Long_Faced, 0.52},
		{Electrifying, 0.50},
		{Glowing, 0.48},
		{Tropic_Thunder, 0.46},
		{Thought_Provoking, 0.44},
		{Jennerising, 0.42},
		{Bright_Eyed, 0.40},
		{Spicy, 0.38},
		{Foggy, 0.36},
		{Slippery, 0.34},
		{Athletic, 0.32},
		{Balding, 0.30},
		{Calorie_Dense, 0.28},
		{Sedating, 0.26},
		{Sneaky, 0.24},
		{Energizing, 0.22},
		{Gingeritis, 0.20},
		{Euphoric, 0.18},
		{Focused, 0.16},
		{Refreshing, 0.14},
		{Munchies, 0.12},
		{Calming, 0.10},
		{Disorienting, 0.00},
		{Explosive, 0.00},
		{Laxative, 0.00},
		{Paranoia, 0.00},
		{Schizophrenia, 0.00},
		{Seizure_Inducing, 0.00},
		{Smelly, 0.00},
		{Toxic, 0.00}
	};
};

#endif // EFFECTS_H
