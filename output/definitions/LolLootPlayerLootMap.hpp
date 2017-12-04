#ifndef SWAGGER_TYPES_LolLootPlayerLootMap_HPP
#define SWAGGER_TYPES_LolLootPlayerLootMap_HPP
#include <json.hpp>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  // 
  struct LolLootPlayerLootMap {
    // 
    std::map<std::string, LolLootPlayerLoot> playerLoot;
    // 
    int64_t version;
  };

  void to_json(nlohmann::json& j, const LolLootPlayerLootMap& v) {
    j["playerLoot"] = v.playerLoot;
    j["version"] = v.version;
  }

  void from_json(const nlohmann::json& j, LolLootPlayerLootMap& v) {
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot>>;
    v.version = j.at("version").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootMap_HPP
