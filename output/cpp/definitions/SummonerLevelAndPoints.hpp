#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SummonerLevelAndPoints_t {
    uint64_t expPoints;
    uint32_t summonerLevel;
    uint64_t sumId;
    uint64_t infPoints;
  };

  inline void to_json(nlohmann::json& j, const SummonerLevelAndPoints_t& v) {
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
    j["sumId"] = v.sumId;
    j["infPoints"] = v.infPoints;
  }

  inline void from_json(const nlohmann::json& j, SummonerLevelAndPoints_t& v) {
    v.expPoints = j.at("expPoints").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.infPoints = j.at("infPoints").get<uint64_t>();
  }
  inline std::string to_string(const SummonerLevelAndPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
