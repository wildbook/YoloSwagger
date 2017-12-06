#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SummonerLevelAndPoints_t {
    uint64_t expPoints;
    uint64_t sumId;
    uint64_t infPoints;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevelAndPoints_t& v) {
    j["expPoints"] = v.expPoints;
    j["sumId"] = v.sumId;
    j["infPoints"] = v.infPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevelAndPoints_t& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.infPoints = j.at("infPoints").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
