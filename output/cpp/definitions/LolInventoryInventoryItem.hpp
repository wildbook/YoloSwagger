#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  struct LolInventoryInventoryItem_t {
    std::string inventoryType;
    int32_t itemId;
    LolInventoryItemOwnershipType_t ownershipType;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["ownershipType"] = v.ownershipType;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType_t>();
  }
}
