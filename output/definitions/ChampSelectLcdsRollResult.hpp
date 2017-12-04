#ifndef SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
#define SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
#include <json.hpp>
#include "ChampSelectLcdsPointSummary.hpp"
namespace test {
  // 
  struct ChampSelectLcdsRollResult {
'    // 
    int32_t championId;
    // 
    ChampSelectLcdsPointSummary pointSummary;
  };

  void to_json(nlohmann::json& j, const ChampSelectLcdsRollResult& v) {
    j["championId"] = v.championId;
    j["pointSummary"] = v.pointSummary;
  }

  void from_json(const nlohmann::json& j, ChampSelectLcdsRollResult& v) {
    v.championId = j.at("championId").get<int32_t>;
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary>;
  }

}
#endif // SWAGGER_TYPES_ChampSelectLcdsRollResult_HPP
