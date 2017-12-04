#ifndef SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityResponseDto_HPP
#define SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityResponseDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SpectatorLcdsSpectateAvailabilityResponseDto {
    // 
    std::vector<std::string> availableForWatching;
  };

  inline void to_json(nlohmann::json& j, const SpectatorLcdsSpectateAvailabilityResponseDto& v) {
    j["availableForWatching"] = v.availableForWatching;
  }

  inline void from_json(const nlohmann::json& j, SpectatorLcdsSpectateAvailabilityResponseDto& v) {
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_SpectatorLcdsSpectateAvailabilityResponseDto_HPP
