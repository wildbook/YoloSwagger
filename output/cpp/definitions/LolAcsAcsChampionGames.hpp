#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsChampionGames_t {
    int32_t championId;
    std::string lane;
    int32_t queue;
    std::string role;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames_t& v) {
    j["championId"] = v.championId;
    j["lane"] = v.lane;
    j["queue"] = v.queue;
    j["role"] = v.role;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.lane = j.at("lane").get<std::string>();
    v.queue = j.at("queue").get<int32_t>();
    v.role = j.at("role").get<std::string>();
  }
}
