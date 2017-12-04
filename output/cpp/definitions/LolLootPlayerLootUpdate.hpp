#ifndef SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
#define SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
#include <json.hpp>
#include "LolLootPlayerLootDelta.hpp"
namespace leagueapi {
  // 
  struct LolLootPlayerLootUpdate {
    // 
    std::vector<LolLootPlayerLootDelta> removed;
    // 
    std::vector<LolLootPlayerLootDelta> added;
    // 
    std::vector<LolLootPlayerLootDelta> redeemed;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootUpdate& v) {
    j["removed"] = v.removed;
    j["added"] = v.added;
    j["redeemed"] = v.redeemed;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootUpdate& v) {
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>;
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>;
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
