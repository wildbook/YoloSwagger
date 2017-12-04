#ifndef SWAGGER_TYPES_LolLootCollectionsEmote_HPP
#define SWAGGER_TYPES_LolLootCollectionsEmote_HPP
#include <json.hpp>
#include "LolLootInventoryOwnership.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsEmote {
    // 
    int64_t itemId;
    // 
    LolLootInventoryOwnership ownershipType;
  };

  void to_json(nlohmann::json& j, const LolLootCollectionsEmote& v) {
    j["itemId"] = v.itemId;
    j["ownershipType"] = v.ownershipType;
  }

  void from_json(const nlohmann::json& j, LolLootCollectionsEmote& v) {
    v.itemId = j.at("itemId").get<int64_t>;
    v.ownershipType = j.at("ownershipType").get<LolLootInventoryOwnership>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsEmote_HPP
