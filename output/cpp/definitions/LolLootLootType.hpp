#ifndef SWAGGER_TYPES_LolLootLootType_HPP
#define SWAGGER_TYPES_LolLootLootType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootLootType {
    // 
    Currency = 1,
    // 
    Chest = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLootLootType& v) {
    switch(v) {
      case LolLootLootType::Currency:
        j = "Currency";
      break;
      case LolLootLootType::Chest:
        j = "Chest";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLootType& v) {
    const auto& s = j.get<std::string>();
    if(s == "Currency"){
      v = LolLootLootType::Currency;
      return;
    }
    if(s == "Chest"){
      v = LolLootLootType::Chest;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootLootType_HPP
