#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsChampionGames_t {
    std::string lane;
    std::string role;
    int32_t queue;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames_t& v) {
    j["lane"] = v.lane;
    j["role"] = v.role;
    j["queue"] = v.queue;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames_t& v) {
    v.lane = j.at("lane").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.queue = j.at("queue").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolAcsAcsChampionGames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
