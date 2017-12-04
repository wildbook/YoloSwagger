#ifndef SWAGGER_TYPES_LolLootInventoryOwnership_HPP
#define SWAGGER_TYPES_LolLootInventoryOwnership_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootInventoryOwnership {
    // 
    RENTED = 1,
    // 
    F2P = 2,
    // 
    OWNED = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLootInventoryOwnership& v) {
    switch(v) {
      case LolLootInventoryOwnership::RENTED:
        j = "RENTED";
      break;
      case LolLootInventoryOwnership::F2P:
        j = "F2P";
      break;
      case LolLootInventoryOwnership::OWNED:
        j = "OWNED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootInventoryOwnership& v) {
    const auto& s = j.get<std::string>();
    if(s == "RENTED"){
      v = LolLootInventoryOwnership::RENTED;
      return;
    }
    if(s == "F2P"){
      v = LolLootInventoryOwnership::F2P;
      return;
    }
    if(s == "OWNED"){
      v = LolLootInventoryOwnership::OWNED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootInventoryOwnership_HPP
