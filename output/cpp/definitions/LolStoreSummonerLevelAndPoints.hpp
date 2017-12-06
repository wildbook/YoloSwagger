#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreSummonerLevelAndPoints_t {
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolStoreSummonerLevelAndPoints_t& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolStoreSummonerLevelAndPoints_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
