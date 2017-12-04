#ifndef SWAGGER_TYPES_LolLootPlayerLootDelta_HPP
#define SWAGGER_TYPES_LolLootPlayerLootDelta_HPP
#include <json.hpp>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  // 
  struct LolLootPlayerLootDelta {
    // 
    int32_t deltaCount;
    // 
    LolLootPlayerLoot playerLoot;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootDelta& v) {
    j["deltaCount"] = v.deltaCount;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootDelta& v) {
    v.deltaCount = j.at("deltaCount").get<int32_t>;
    v.playerLoot = j.at("playerLoot").get<LolLootPlayerLoot>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootDelta_HPP
