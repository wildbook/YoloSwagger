#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderBackwardsTransitionInfoV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderBackwardsTransitionInfoV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1 {
    // 
    std::string backwardsTransitionReason;
    // 
    std::vector<uint64_t> initiatorSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["initiatorSummonerIds"] = v.initiatorSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>;
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderBackwardsTransitionInfoV1_HPP
