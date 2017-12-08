#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueChampAndStat_t {
    float_t winRate;
    int32_t_t championId;
    int64_t_t totalGamePlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat_t& v) {
    j["winRate"] = v.winRate;
    j["championId"] = v.championId;
    j["totalGamePlayed"] = v.totalGamePlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat_t& v) {
    v.winRate = j.at("winRate").get<float_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueChampAndStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
