#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLoot.hpp"
namespace leagueapi {
  struct LolLootPlayerLootDelta_t {
    int32_t deltaCount;
    LolLootPlayerLoot_t playerLoot;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootDelta_t& v) {
    j["deltaCount"] = v.deltaCount;
    j["playerLoot"] = v.playerLoot;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootDelta_t& v) {
    v.deltaCount = j.at("deltaCount").get<int32_t>();
    v.playerLoot = j.at("playerLoot").get<LolLootPlayerLoot_t>();
  }
  inline std::string to_string(const LolLootPlayerLootDelta_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
