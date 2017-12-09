#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification_t {
    std::string reason;
    LolLobbyTeamBuilderBackwardsTransitionInfoV1_t backwardsTransitionInfo;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    j["reason"] = v.reason;
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbRemovedFromServiceNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
