#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsChampionGames_t {
    int32_t queue;
    std::string lane;
    int32_t championId;
    std::string role;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames_t& v) {
    j["queue"] = v.queue;
    j["lane"] = v.lane;
    j["championId"] = v.championId;
    j["role"] = v.role;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames_t& v) {
    v.queue = j.at("queue").get<int32_t>();
    v.lane = j.at("lane").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
    v.role = j.at("role").get<std::string>();
  }
  inline std::string to_string(const LolAcsAcsChampionGames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
