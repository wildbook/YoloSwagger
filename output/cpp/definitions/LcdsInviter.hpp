#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsInviter_t {
    uint64_t summonerId;
    std::string previousSeasonHighestTier;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviter_t& v) {
    j["summonerId"] = v.summonerId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviter_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LcdsInviter_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
