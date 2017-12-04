#ifndef SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
#define SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolHonorV2VoteCompletion {
'    // 
    bool fullTeamVote;
    // 
    uint64_t gameId;
  };

  void to_json(nlohmann::json& j, const LolHonorV2VoteCompletion& v) {
    j["fullTeamVote"] = v.fullTeamVote;
    j["gameId"] = v.gameId;
  }

  void from_json(const nlohmann::json& j, LolHonorV2VoteCompletion& v) {
    v.fullTeamVote = j.at("fullTeamVote").get<bool>;
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2VoteCompletion_HPP
