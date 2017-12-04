#ifndef SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
#define SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
#include <json.hpp>
#include "ChampSelectLcdsPointSummary.hpp"
namespace leagueapi {
  // 
  struct ChampSelectLcdsRollResult {
    // 
    ChampSelectLcdsPointSummary pointSummary;
    // 
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsRollResult& v) {
    j["pointSummary"] = v.pointSummary;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsRollResult& v) {
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>;
    v.championId = j.at("championId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
