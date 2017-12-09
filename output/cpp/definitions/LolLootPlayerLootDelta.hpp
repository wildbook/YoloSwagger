#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  struct LolLootPlayerLootDelta_t {
    LolLootPlayerLoot_t playerLoot;
    int32_t deltaCount;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootDelta_t& v) {
    j["playerLoot"] = v.playerLoot;
    j["deltaCount"] = v.deltaCount;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootDelta_t& v) {
    v.playerLoot = j.at("playerLoot").get<LolLootPlayerLoot_t>();
    v.deltaCount = j.at("deltaCount").get<int32_t>();
  }
  inline std::string to_string(const LolLootPlayerLootDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
