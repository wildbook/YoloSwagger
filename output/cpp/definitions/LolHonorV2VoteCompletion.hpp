#ifndef SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
#define SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2VoteCompletion {
    // 
    uint64_t gameId;
    // 
    bool fullTeamVote;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2VoteCompletion& v) {
    j["gameId"] = v.gameId;
    j["fullTeamVote"] = v.fullTeamVote;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2VoteCompletion& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.fullTeamVote = j.at("fullTeamVote").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
