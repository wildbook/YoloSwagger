#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderReadyStateV1_t {
    bool premadeSizeAllowed;
    std::vector<int32_t> allowablePremadeSizes;
    bool requiredPositionCoverageMet;
    bool readyToMatchmake;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderReadyStateV1_t& v) {
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
    j["readyToMatchmake"] = v.readyToMatchmake;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderReadyStateV1_t& v) {
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderReadyStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
