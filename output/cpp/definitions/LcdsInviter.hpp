#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsInviter_t {
    std::string_t previousSeasonHighestTier;
    uint64_t_t summonerId;
    std::string_t summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInviter_t& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInviter_t& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
  }
  inline std::string to_string(const LcdsInviter_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
