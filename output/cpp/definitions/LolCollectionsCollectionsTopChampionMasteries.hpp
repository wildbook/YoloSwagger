#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsChampionMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsTopChampionMasteries_t {
    uint64_t summonerId;
    uint64_t score;
    std::vector<LolCollectionsCollectionsChampionMastery_t> masteries;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsTopChampionMasteries_t& v) {
    j["summonerId"] = v.summonerId;
    j["score"] = v.score;
    j["masteries"] = v.masteries;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsTopChampionMasteries_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.score = j.at("score").get<uint64_t>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsChampionMastery_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsTopChampionMasteries_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
