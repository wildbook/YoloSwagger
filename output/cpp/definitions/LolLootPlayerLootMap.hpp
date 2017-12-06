#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  struct LolLootPlayerLootMap_t {
    std::map<std::string, LolLootPlayerLoot_t> playerLoot;
    int64_t version;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootMap_t& v) {
    j["playerLoot"] = v.playerLoot;
    j["version"] = v.version;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootMap_t& v) {
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot_t>>();
    v.version = j.at("version").get<int64_t>();
  }
}
