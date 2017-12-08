#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  struct LolInventoryInventoryItem_t {
    LolInventoryItemOwnershipType_t ownershipType;
    std::string inventoryType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem_t& v) {
    j["ownershipType"] = v.ownershipType;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem_t& v) {
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolInventoryInventoryItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
