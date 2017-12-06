#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1_t {
    std::vector<uint64_t> initiatorSummonerIds;
    std::string backwardsTransitionReason;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1_t& v) {
    j["initiatorSummonerIds"] = v.initiatorSummonerIds;
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1_t& v) {
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>();
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>();
  }
}
