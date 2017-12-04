#ifndef SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
#define SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStat.hpp"
namespace leagueapi {
  // 
  struct LeaguesLcdsChampionStatInfo {
    // 
    std::vector<LeaguesLcdsAggregatedStat> stats;
    // 
    int32_t totalGamesPlayed;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LeaguesLcdsChampionStatInfo& v) {
    j["stats"] = v.stats;
    j["totalGamesPlayed"] = v.totalGamesPlayed;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LeaguesLcdsChampionStatInfo& v) {
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat>>;
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
