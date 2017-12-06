#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t {
    std::string backwardsTransitionReason;
    std::vector<int32_t> slotIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["slotIds"] = v.slotIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>();
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>();
  }
}
