#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsAcsChampionGames_t {
    int32_t championId;
    int32_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsAcsChampionGames_t& v) {
    j["championId"] = v.championId;
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsAcsChampionGames_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.queue = j.at("queue").get<int32_t>();
  }
}
