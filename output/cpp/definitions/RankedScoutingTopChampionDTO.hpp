#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RankedScoutingTopChampionDTO_t {
    int32_t championId;
    int32_t gameCount;
    float kda;
    int32_t rank;
    int32_t winCount;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingTopChampionDTO_t& v) {
    j["championId"] = v.championId;
    j["gameCount"] = v.gameCount;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["winCount"] = v.winCount;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingTopChampionDTO_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.gameCount = j.at("gameCount").get<int32_t>();
    v.kda = j.at("kda").get<float>();
    v.rank = j.at("rank").get<int32_t>();
    v.winCount = j.at("winCount").get<int32_t>();
  }
}
