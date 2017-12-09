#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLeaguesLeagueChampAndStat_t {
    float winRate;
    int64_t totalGamePlayed;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueChampAndStat_t& v) {
    j["winRate"] = v.winRate;
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueChampAndStat_t& v) {
    v.winRate = j.at("winRate").get<float>();
    v.totalGamePlayed = j.at("totalGamePlayed").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueChampAndStat_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
