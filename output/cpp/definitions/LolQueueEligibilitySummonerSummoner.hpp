#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilitySummonerSummoner_t {
    uint32_t summonerLevel;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilitySummonerSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilitySummonerSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
