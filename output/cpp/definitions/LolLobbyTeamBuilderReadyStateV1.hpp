#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderReadyStateV1_t {
    std::vector<int32_t> allowablePremadeSizes;
    bool readyToMatchmake;
    bool premadeSizeAllowed;
    bool requiredPositionCoverageMet;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderReadyStateV1_t& v) {
    j["allowablePremadeSizes"] = v.allowablePremadeSizes;
    j["readyToMatchmake"] = v.readyToMatchmake;
    j["premadeSizeAllowed"] = v.premadeSizeAllowed;
    j["requiredPositionCoverageMet"] = v.requiredPositionCoverageMet;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderReadyStateV1_t& v) {
    v.allowablePremadeSizes = j.at("allowablePremadeSizes").get<std::vector<int32_t>>();
    v.readyToMatchmake = j.at("readyToMatchmake").get<bool>();
    v.premadeSizeAllowed = j.at("premadeSizeAllowed").get<bool>();
    v.requiredPositionCoverageMet = j.at("requiredPositionCoverageMet").get<bool>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderReadyStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
