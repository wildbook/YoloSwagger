#ifndef SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityDto_HPP
#define SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SpectatorLcdsSpectateAvailabilityDto {
    // 
    std::vector<std::string> teamOrSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const SpectatorLcdsSpectateAvailabilityDto& v) {
    j["teamOrSummonerIds"] = v.teamOrSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, SpectatorLcdsSpectateAvailabilityDto& v) {
    v.teamOrSummonerIds = j.at("teamOrSummonerIds").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityDto_HPP
