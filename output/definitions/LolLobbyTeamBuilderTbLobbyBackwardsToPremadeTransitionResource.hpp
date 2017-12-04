#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource {
    // 
    std::string backwardsTransitionReason;
    // 
    std::vector<int32_t> slotIds;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["slotIds"] = v.slotIds;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>;
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_HPP
