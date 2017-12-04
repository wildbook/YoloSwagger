#ifndef SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
#define SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootItemOwnershipStatus {
    // 
    NONE = 0,
    // 
    RENTAL = 2,
    // 
    OWNED = 3,
    // 
    FREE = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLootItemOwnershipStatus& v) {
    switch(v) {
      case LolLootItemOwnershipStatus::NONE:
        j = "NONE";
      break;
      case LolLootItemOwnershipStatus::RENTAL:
        j = "RENTAL";
      break;
      case LolLootItemOwnershipStatus::OWNED:
        j = "OWNED";
      break;
      case LolLootItemOwnershipStatus::FREE:
        j = "FREE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootItemOwnershipStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "NONE"){
      v = LolLootItemOwnershipStatus::NONE;
      return;
    }
    if(s == "RENTAL"){
      v = LolLootItemOwnershipStatus::RENTAL;
      return;
    }
    if(s == "OWNED"){
      v = LolLootItemOwnershipStatus::OWNED;
      return;
    }
    if(s == "FREE"){
      v = LolLootItemOwnershipStatus::FREE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
