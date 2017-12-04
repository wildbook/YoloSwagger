#ifndef SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeagueChampAndStat {
    // 
    float winRate;
    // 
    int32_t championId;
    // 
    int64_t totalGamePlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat& v) {
    j["winRate"] = v.winRate;
    j["championId"] = v.championId;
    j["totalGamePlayed"] = v.totalGamePlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat& v) {
    v.winRate = j.at("winRate").get<float>;
    v.championId = j.at("championId").get<int32_t>;
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
