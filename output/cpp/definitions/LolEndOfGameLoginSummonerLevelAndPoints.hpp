#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameLoginSummonerLevelAndPoints_t {
    uint32_t summonerLevel;
    uint64_t expPoints;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["expPoints"] = v.expPoints;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.expPoints = j.at("expPoints").get<uint64_t>();
  }
  inline std::string to_string(const LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
