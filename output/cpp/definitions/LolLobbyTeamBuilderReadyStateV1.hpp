#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderReadyStateV1_t {
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
    bool readyToMatchmake;
    std::vector<int32_t> allowablePremadeSizes;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderReadyStateV1_t& v) {
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderReadyStateV1_t& v) {
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
  }
}
