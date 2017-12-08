#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootInventoryOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsEmote_t {
    int64_t itemId;
    LolLootInventoryOwnership_t ownershipType;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsEmote_t& v) {
    j["itemId"] = v.itemId;
    j["ownershipType"] = v.ownershipType;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsEmote_t& v) {
    v.itemId = j.at("itemId").get<int64_t>();
    v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership_t>();
  }
  inline std::string to_string(const LolLootCollectionsEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
