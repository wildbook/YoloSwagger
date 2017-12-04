#ifndef SWAGGER_TYPES_LolLootLootRarity_HPP
#define SWAGGER_TYPES_LolLootLootRarity_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootLootRarity {
    // 
    Default = 0,
  };

  void to_json(nlohmann::json& j, const LolLootLootRarity& v) {
    switch(v) {
      case LolLootLootRarity::Default:
        j = "Default";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLootLootRarity& v) {
    const auto s& = j.get<std::string>();
    if(s == "Default"){
      v = LolLootLootRarity::Default;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootLootRarity_HPP
