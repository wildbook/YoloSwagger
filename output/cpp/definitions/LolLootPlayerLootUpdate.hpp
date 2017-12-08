#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootPlayerLootDelta.hpp"
namespace leagueapi {
  struct LolLootPlayerLootUpdate_t {
    std::vector<LolLootPlayerLootDelta_t> removed;
    std::vector<LolLootPlayerLootDelta_t> added;
    std::vector<LolLootPlayerLootDelta_t> redeemed;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootUpdate_t& v) {
    j["removed"] = v.removed;
    j["added"] = v.added;
    j["redeemed"] = v.redeemed;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootUpdate_t& v) {
    v.removed = j.at("removed").get<std::vector<LolLootPlayerLootDelta_t>>();
    v.added = j.at("added").get<std::vector<LolLootPlayerLootDelta_t>>();
    v.redeemed = j.at("redeemed").get<std::vector<LolLootPlayerLootDelta_t>>();
  }
  inline std::string to_string(const LolLootPlayerLootUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
