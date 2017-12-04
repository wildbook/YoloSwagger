#ifndef SWAGGER_TYPES_LolLootLootType_HPP
#define SWAGGER_TYPES_LolLootLootType_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLootLootType {
'    // 
    Chest = 0,
    // 
    Currency = 1,
  };

  void to_json(nlohmann::json& j, const LolLootLootType& v) {
    switch(v) {
      case LolLootLootType::Chest:
        j = "Chest";
      break;
      case LolLootLootType::Currency:
        j = "Currency";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLootLootType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Chest"){
      v = LolLootLootType::Chest;
      return;
    }
    if(s == "Currency"){
      v = LolLootLootType::Currency;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootLootType_HPP
