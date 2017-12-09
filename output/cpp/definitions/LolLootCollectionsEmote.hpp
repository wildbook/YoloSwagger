#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootInventoryOwnership.hpp"
namespace leagueapi {
  struct LolLootCollectionsEmote_t {
    LolLootInventoryOwnership_t ownershipType;
    int64_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsEmote_t& v) {
    j["ownershipType"] = v.ownershipType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsEmote_t& v) {
    v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership_t>();
    v.itemId = j.at("itemId").get<int64_t>();
  }
  inline std::string to_string(const LolLootCollectionsEmote_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
