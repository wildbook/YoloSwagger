#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPointSummary.hpp"
namespace leagueapi {
  struct ChampSelectLcdsRollResult_t {
    ChampSelectLcdsPointSummary_t pointSummary;
    int32_t_t championId;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsRollResult_t& v) {
    j["pointSummary"] = v.pointSummary;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsRollResult_t& v) {
    v.pointSummary = j.at("pointSummary").get<ChampSelectLcdsPointSummary_t>();
    v.championId = j.at("championId").get<int32_t_t>();
  }
  inline std::string to_string(const ChampSelectLcdsRollResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
