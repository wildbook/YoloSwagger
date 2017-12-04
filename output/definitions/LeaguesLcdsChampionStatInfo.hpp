#ifndef SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
#define SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
#include <json.hpp>
#include "LeaguesLcdsAggregatedStat.hpp"
namespace test {
  // 
  struct LeaguesLcdsChampionStatInfo {
'    // 
    int32_t championId;
    // 
    std::vector<LeaguesLcdsAggregatedStat> stats;
    // 
    int32_t totalGamesPlayed;
  };

  void to_json(nlohmann::json& j, const LeaguesLcdsChampionStatInfo& v) {
    j["championId"] = v.championId;
    j["stats"] = v.stats;
    j["totalGamesPlayed"] = v.totalGamesPlayed;
  }

  void from_json(const nlohmann::json& j, LeaguesLcdsChampionStatInfo& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.stats = j.at("stats").get<std::vector<LeaguesLcdsAggregatedStat>>;
    v.totalGamesPlayed = j.at("totalGamesPlayed").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LeaguesLcdsChampionStatInfo_HPP
