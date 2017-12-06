#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VoteCompletion_t {
    bool fullTeamVote;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VoteCompletion_t& v) {
    j["fullTeamVote"] = v.fullTeamVote;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VoteCompletion_t& v) {
    v.fullTeamVote = j.at("fullTeamVote").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
}
