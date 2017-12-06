#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsInviter_t {
    std::string summonerName;
    uint64_t summonerId;
    std::string previousSeasonHighestTier;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviter_t& v) {
    j["summonerName"] = v.summonerName;
    j["summonerId"] = v.summonerId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviter_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
  }
}
