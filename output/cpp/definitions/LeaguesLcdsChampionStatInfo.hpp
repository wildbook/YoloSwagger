#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  struct LeaguesLcdsChampionStatInfo_t {
    int32_t championId;
    std::vector<LeaguesLcdsAggregatedStat_t> stats;
    int32_t totalGamesPlayed;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsChampionStatInfo_t& v) {
    j["championId"] = v.championId;
    j["stats"] = v.stats;
    j["totalGamesPlayed"] = v.totalGamesPlayed;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsChampionStatInfo_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat_t>>();
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>();
  }
}
