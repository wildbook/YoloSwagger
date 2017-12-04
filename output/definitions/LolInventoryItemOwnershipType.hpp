#ifndef SWAGGER_TYPES_LolInventoryItemOwnershipType_HPP
#define SWAGGER_TYPES_LolInventoryItemOwnershipType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolInventoryItemOwnershipType {
    // 
    F2P = 2,
    // 
    OWNED = 0,
    // 
    RENTED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolInventoryItemOwnershipType& v) {
    switch(v) {
      case LolInventoryItemOwnershipType::F2P:
        j = "F2P";
      break;
      case LolInventoryItemOwnershipType::OWNED:
        j = "OWNED";
      break;
      case LolInventoryItemOwnershipType::RENTED:
        j = "RENTED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolInventoryItemOwnershipType& v) {
    const auto s& = j.get<std::string>();
    if(s == "F2P"){
      v = LolInventoryItemOwnershipType::F2P;
      return;
    }
    if(s == "OWNED"){
      v = LolInventoryItemOwnershipType::OWNED;
      return;
    }
    if(s == "RENTED"){
      v = LolInventoryItemOwnershipType::RENTED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolInventoryItemOwnershipType_HPP
