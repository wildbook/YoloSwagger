#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2VoteCompletion_t {
    uint64_t gameId;
    bool fullTeamVote;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VoteCompletion_t& v) {
    j["gameId"] = v.gameId;
    j["fullTeamVote"] = v.fullTeamVote;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VoteCompletion_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.fullTeamVote = j.at("fullTeamVote").get<bool>();
  }
  inline std::string to_string(const LolHonorV2VoteCompletion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
