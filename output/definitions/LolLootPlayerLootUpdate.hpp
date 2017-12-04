#ifndef SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
#define SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
#include <json.hpp>
#include "LolLootPlayerLootDelta.hpp"
namespace test {
  // 
  struct LolLootPlayerLootUpdate {
'    // 
    std::vector<LolLootPlayerLootDelta> added;
    // 
    std::vector<LolLootPlayerLootDelta> redeemed;
    // 
    std::vector<LolLootPlayerLootDelta> removed;
  };

  void to_json(nlohmann::json& j, const LolLootPlayerLootUpdate& v) {
    j["added"] = v.added;
    j["redeemed"] = v.redeemed;
    j["removed"] = v.removed;
  }

  void from_json(const nlohmann::json& j, LolLootPlayerLootUpdate& v) {
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta>>;
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta>>;
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta>>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootUpdate_HPP
