#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameLoginSummonerLevelAndPoints_t {
    uint64_t_t expPoints;
    uint32_t_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    j["expPoints"] = v.expPoints;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    v.expPoints = j.at("expPoints").get<uint64_t_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolEndOfGameLoginSummonerLevelAndPoints_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
