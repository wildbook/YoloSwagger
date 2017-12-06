#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  struct LolInventoryInventoryItem_t {
    int32_t itemId;
    std::string inventoryType;
    LolInventoryItemOwnershipType_t ownershipType;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["ownershipType"] = v.ownershipType;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType_t>();
  }
}
