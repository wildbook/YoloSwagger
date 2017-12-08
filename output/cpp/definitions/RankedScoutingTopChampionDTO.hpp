#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RankedScoutingTopChampionDTO_t {
    int32_t_t gameCount;
    int32_t_t championId;
    float_t kda;
    int32_t_t rank;
    int32_t_t winCount;
  };

  inline void to_json(nlohmann::json& j, const RankedScoutingTopChampionDTO_t& v) {
    j["gameCount"] = v.gameCount;
    j["championId"] = v.championId;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["winCount"] = v.winCount;
  }

  inline void from_json(const nlohmann::json& j, RankedScoutingTopChampionDTO_t& v) {
    v.gameCount = j.at("gameCount").get<int32_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.kda = j.at("kda").get<float_t>();
    v.rank = j.at("rank").get<int32_t_t>();
    v.winCount = j.at("winCount").get<int32_t_t>();
  }
  inline std::string to_string(const RankedScoutingTopChampionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
