#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderReadyStateV1_t {
    bool requiredPositionCoverageMet;
    bool readyToMatchmake;
    std::vector<int32_t> allowablePremadeSizes;
    bool premadeSizeAllowed;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderReadyStateV1_t& v) {
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderReadyStateV1_t& v) {
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderReadyStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
