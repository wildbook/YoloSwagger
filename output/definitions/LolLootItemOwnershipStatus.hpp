#ifndef SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
#define SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLootItemOwnershipStatus {
'    // 
    FREE = 1,
    // 
    NONE = 0,
    // 
    OWNED = 3,
    // 
    RENTAL = 2,
  };

  void to_json(nlohmann::json& j, const LolLootItemOwnershipStatus& v) {
    switch(v) {
      case LolLootItemOwnershipStatus::FREE:
        j = "FREE";
      break;
      case LolLootItemOwnershipStatus::NONE:
        j = "NONE";
      break;
      case LolLootItemOwnershipStatus::OWNED:
        j = "OWNED";
      break;
      case LolLootItemOwnershipStatus::RENTAL:
        j = "RENTAL";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLootItemOwnershipStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "FREE"){
      v = LolLootItemOwnershipStatus::FREE;
      return;
    }
    if(s == "NONE"){
      v = LolLootItemOwnershipStatus::NONE;
      return;
    }
    if(s == "OWNED"){
      v = LolLootItemOwnershipStatus::OWNED;
      return;
    }
    if(s == "RENTAL"){
      v = LolLootItemOwnershipStatus::RENTAL;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootItemOwnershipStatus_HPP
