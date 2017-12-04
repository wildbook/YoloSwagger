#ifndef SWAGGER_TYPES_LolLootPlayerLootMap_HPP
#define SWAGGER_TYPES_LolLootPlayerLootMap_HPP
#include <json.hpp>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  // 
  struct LolLootPlayerLootMap {
    // 
    int64_t version;
    // 
    std::map<std::string, LolLootPlayerLoot> playerLoot;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootMap& v) {
    j["version"] = v.version;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootMap& v) {
    v.version = j.at("version").get<int64_t>;
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootMap_HPP
