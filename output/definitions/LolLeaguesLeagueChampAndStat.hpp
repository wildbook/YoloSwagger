#ifndef SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
#define SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLeaguesLeagueChampAndStat {
    // 
    int32_t championId;
    // 
    int64_t totalGamePlayed;
    // 
    float winRate;
  };

  void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat& v) {
    j["championId"] = v.championId;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["winRate"] = v.winRate;
  }

  void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>;
    v.winRate = j.at("winRate").get<float>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLeagueChampAndStat_HPP
