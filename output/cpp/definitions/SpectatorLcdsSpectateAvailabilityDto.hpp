#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SpectatorLcdsSpectateAvailabilityDto_t {
    std::vector<std::string> teamOrSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const SpectatorLcdsSpectateAvailabilityDto_t& v) {
    j["teamOrSummonerIds"] = v.teamOrSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, SpectatorLcdsSpectateAvailabilityDto_t& v) {
    v.teamOrSummonerIds = j.at("teamOrSummonerIds").get<std::vector<std::string>>();
  }
}
