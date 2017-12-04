#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderReadyStateV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderReadyStateV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderReadyStateV1 {
    // 
    std::vector<int32_t> allowablePremadeSizes;
    // 
    bool premadeSizeAllowed;
    // 
    bool readyToMatchmake;
    // 
    bool requiredPositionCoverageMet;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderReadyStateV1& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderReadyStateV1& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>;
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>;
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>;
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderReadyStateV1_HPP
