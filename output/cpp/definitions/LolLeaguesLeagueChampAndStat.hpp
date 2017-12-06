#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueChampAndStat_t {
    int32_t championId;
    float winRate;
    int64_t totalGamePlayed;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat_t& v) {
    j["championId"] = v.championId;
    j["winRate"] = v.winRate;
    j["totalGamePlayed"] = v.totalGamePlayed;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.winRate = j.at("winRate").get<float>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>();
  }
}
