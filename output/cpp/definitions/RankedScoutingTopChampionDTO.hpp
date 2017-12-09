#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RankedScoutingTopChampionDTO_t {
    int32_t rank;
    int32_t gameCount;
    float kda;
    int32_t winCount;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingTopChampionDTO_t& v) {
    j["rank"] = v.rank;
    j["gameCount"] = v.gameCount;
    j["kda"] = v.kda;
    j["winCount"] = v.winCount;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingTopChampionDTO_t& v) {
    v.rank = j.at("rank").get<int32_t>();
    v.gameCount = j.at("gameCount").get<int32_t>();
    v.kda = j.at("kda").get<float>();
    v.winCount = j.at("winCount").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const RankedScoutingTopChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
