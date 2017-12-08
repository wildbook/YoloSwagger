#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueChampAndStat_t {
    float winRate;
    int32_t championId;
    int64_t totalGamePlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat_t& v) {
    j["winRate"] = v.winRate;
    j["championId"] = v.championId;
    j["totalGamePlayed"] = v.totalGamePlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat_t& v) {
    v.winRate = j.at("winRate").get<float>();
    v.championId = j.at("championId").get<int32_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueChampAndStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
