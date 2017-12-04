#ifndef SWAGGER_TYPES_RankedScoutingTopChampionDTO_HPP
#define SWAGGER_TYPES_RankedScoutingTopChampionDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RankedScoutingTopChampionDTO {
    // 
    int32_t championId;
    // 
    int32_t gameCount;
    // 
    float kda;
    // 
    int32_t rank;
    // 
    int32_t winCount;
  };

  void to_json(nlohmann::json& j, const RankedScoutingTopChampionDTO& v) {
    j["championId"] = v.championId;
    j["gameCount"] = v.gameCount;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["winCount"] = v.winCount;
  }

  void from_json(const nlohmann::json& j, RankedScoutingTopChampionDTO& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.gameCount = j.at("gameCount").get<int32_t>;
    v.kda = j.at("kda").get<float>;
    v.rank = j.at("rank").get<int32_t>;
    v.winCount = j.at("winCount").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_RankedScoutingTopChampionDTO_HPP
