#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolAcsAcsChampionGames_t {
    int32_t_t queue;
    std::string_t role;
    std::string_t lane;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolAcsAcsChampionGames_t& v) {
    j["queue"] = v.queue;
    j["role"] = v.role;
    j["lane"] = v.lane;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolAcsAcsChampionGames_t& v) {
    v.queue = j.at("queue").get<int32_t_t>();
    v.role = j.at("role").get<std::string_t>();
    v.lane = j.at("lane").get<std::string_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const LolAcsAcsChampionGames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
