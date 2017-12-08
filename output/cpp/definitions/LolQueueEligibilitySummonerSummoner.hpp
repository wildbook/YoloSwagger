#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilitySummonerSummoner_t {
    uint64_t_t summonerId;
    uint32_t_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilitySummonerSummoner_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilitySummonerSummoner_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolQueueEligibilitySummonerSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
