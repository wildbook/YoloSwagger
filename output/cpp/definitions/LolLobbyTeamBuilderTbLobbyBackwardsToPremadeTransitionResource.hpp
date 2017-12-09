#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t {
    std::vector<int32_t> slotIds;
    std::string backwardsTransitionReason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t& v) {
    j["slotIds"] = v.slotIds;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t& v) {
    v.slotIds = j.at("slotIds").get<std::vector<int32_t>>();
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
