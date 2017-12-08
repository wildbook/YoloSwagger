#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderBackwardsTransitionInfoV1_t {
    std::string_t backwardsTransitionReason;
    std::vector<uint64_t> initiatorSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderBackwardsTransitionInfoV1_t& v) {
    j["backwardsTransitionReason"] = v.backwardsTransitionReason;
    j["initiatorSummonerIds"] = v.initiatorSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderBackwardsTransitionInfoV1_t& v) {
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string_t>();
    v.initiatorSummonerIds = j.at("initiatorSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderBackwardsTransitionInfoV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
