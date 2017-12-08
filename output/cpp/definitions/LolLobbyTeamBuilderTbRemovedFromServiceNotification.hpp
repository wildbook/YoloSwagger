#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification_t {
    LolLobbyTeamBuilderBackwardsTransitionInfoV1_t backwardsTransitionInfo;
    std::string_t reason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1_t>();
    v.reason = j.at("reason").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
