#ifndef SWAGGER_TYPES_LolHonorV2Ballot_HPP
#define SWAGGER_TYPES_LolHonorV2Ballot_HPP
#include <json.hpp>
#include "LolHonorV2EligiblePlayer.hpp"
namespace test {
  // 
  struct LolHonorV2Ballot {
'    // 
    std::vector<LolHonorV2EligiblePlayer> eligiblePlayers;
    // 
    uint64_t gameId;
  };

  void to_json(nlohmann::json& j, const LolHonorV2Ballot& v) {
    j["eligiblePlayers"] = v.eligiblePlayers;
    j["gameId"] = v.gameId;
  }

  void from_json(const nlohmann::json& j, LolHonorV2Ballot& v) {
    v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer>>;
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2Ballot_HPP
