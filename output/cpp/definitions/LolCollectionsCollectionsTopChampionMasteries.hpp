#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsTopChampionMasteries_t {
    std::vector<LolCollectionsCollectionsChampionMastery_t> masteries;
    uint64_t score;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsTopChampionMasteries_t& v) {
    j["masteries"] = v.masteries;
    j["score"] = v.score;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsTopChampionMasteries_t& v) {
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery_t>>();
    v.score = j.at("score").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
