#pragma once
#include <json.hpp>
#include <optional>
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  struct LeaguesLcdsChampionStatInfo_t {
    int32_t totalGamesPlayed;
    std::vector<LeaguesLcdsAggregatedStat_t> stats;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsChampionStatInfo_t& v) {
    j["totalGamesPlayed"] = v.totalGamesPlayed;
    j["stats"] = v.stats;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsChampionStatInfo_t& v) {
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>();
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat_t>>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LeaguesLcdsChampionStatInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
