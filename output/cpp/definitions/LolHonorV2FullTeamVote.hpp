#ifndef SWAGGER_TYPES_LolHonorV2FullTeamVote_HPP
#define SWAGGER_TYPES_LolHonorV2FullTeamVote_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2FullTeamVote {
    // 
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2FullTeamVote& v) {
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2FullTeamVote& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2FullTeamVote_HPP
