#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsChampionGames_t {
    int32_t championId;
    std::string role;
    int32_t queue;
    std::string lane;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames_t& v) {
    j["championId"] = v.championId;
    j["role"] = v.role;
    j["queue"] = v.queue;
    j["lane"] = v.lane;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.role = j.at("role").get<std::string>();
    v.queue = j.at("queue").get<int32_t>();
    v.lane = j.at("lane").get<std::string>();
  }
}
