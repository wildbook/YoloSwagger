#pragma once
#include <json.hpp>
#include <optional>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  struct LolInventoryInventoryItem_t {
    std::string inventoryType;
    LolInventoryItemOwnershipType_t ownershipType;
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["ownershipType"] = v.ownershipType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType_t>();
    v.itemId = j.at("itemId").get<int32_t>();
  }
  inline std::string to_string(const LolInventoryInventoryItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
