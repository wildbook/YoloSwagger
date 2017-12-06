#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueChampAndStat_t {
    int32_t championId;
    int64_t totalGamePlayed;
    float winRate;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat_t& v) {
    j["championId"] = v.championId;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["winRate"] = v.winRate;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>();
    v.winRate = j.at("winRate").get<float>();
  }
}
