#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsAcsChampionGames_t {
    int32_t_t queue;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGames_t& v) {
    j["queue"] = v.queue;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGames_t& v) {
    v.queue = j.at("queue").get<int32_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const LolCollectionsAcsChampionGames_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
