#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsInviter_t {
    std::string summonerName;
    std::string previousSeasonHighestTier;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviter_t& v) {
    j["summonerName"] = v.summonerName;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviter_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsInviter_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
