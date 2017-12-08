#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  struct LolLootPlayerLootMap_t {
    int64_t_t version;
    std::map<std::string, LolLootPlayerLoot_t> playerLoot;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootMap_t& v) {
    j["version"] = v.version;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootMap_t& v) {
    v.version = j.at("version").get<int64_t_t>();
    v.playerLoot = j.at("playerLoot").get<std::map<std::string, LolLootPlayerLoot_t>>();
  }
  inline std::string to_string(const LolLootPlayerLootMap_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
