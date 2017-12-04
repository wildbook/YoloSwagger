#ifndef SWAGGER_TYPES_LolInventoryInventoryItem_HPP
#define SWAGGER_TYPES_LolInventoryInventoryItem_HPP
#include <json.hpp>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  // 
  struct LolInventoryInventoryItem {
    // 
    int32_t itemId;
    // 
    std::string inventoryType;
    // 
    LolInventoryItemOwnershipType ownershipType;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["ownershipType"] = v.ownershipType;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem& v) {
    v.itemId = j.at("itemId").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryInventoryItem_HPP
