#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbRemovedFromServiceNotification_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbRemovedFromServiceNotification_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderBackwardsTransitionInfoV1.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderTbRemovedFromServiceNotification {
'    // 
    LolLobbyTeamBuilderBackwardsTransitionInfoV1 backwardsTransitionInfo;
    // 
    std::string reason;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    j["backwardsTransitionInfo"] = v.backwardsTransitionInfo;
    j["reason"] = v.reason;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbRemovedFromServiceNotification& v) {
    v.backwardsTransitionInfo = j.at("backwardsTransitionInfo").get<LolLobbyTeamBuilderBackwardsTransitionInfoV1>;
    v.reason = j.at("reason").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbRemovedFromServiceNotification_HPP
