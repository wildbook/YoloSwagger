#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPointSummary.hpp"
namespace leagueapi {
  struct ChampSelectLcdsRollResult_t {
    int32_t championId;
    ChampSelectLcdsPointSummary_t pointSummary;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsRollResult_t& v) {
    j["championId"] = v.championId;
    j["pointSummary"] = v.pointSummary;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsRollResult_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary_t>();
  }
  inline std::string to_string(const ChampSelectLcdsRollResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
