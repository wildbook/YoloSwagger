#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLootDelta.hpp"
namespace leagueapi {
  struct LolLootPlayerLootUpdate_t {
    std::vector<LolLootPlayerLootDelta_t> added;
    std::vector<LolLootPlayerLootDelta_t> redeemed;
    std::vector<LolLootPlayerLootDelta_t> removed;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootUpdate_t& v) {
    j["added"] = v.added;
    j["redeemed"] = v.redeemed;
    j["removed"] = v.removed;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootUpdate_t& v) {
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta_t>>();
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta_t>>();
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta_t>>();
  }
}
