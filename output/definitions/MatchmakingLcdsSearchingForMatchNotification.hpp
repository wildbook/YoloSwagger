#ifndef SWAGGER_TYPES_MatchmakingLcdsSearchingForMatchNotification_HPP
#define SWAGGER_TYPES_MatchmakingLcdsSearchingForMatchNotification_HPP
#include <json.hpp>
#include "MatchmakingLcdsQueueInfo.hpp"
namespace leagueapi {
  // 
  struct MatchmakingLcdsSearchingForMatchNotification {
    // 
    std::vector<MatchmakingLcdsQueueInfo> joinedQueues;
    // 
    std::vector<nlohmann::json> playerJoinFailures;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsSearchingForMatchNotification& v) {
    j["joinedQueues"] = v.joinedQueues;
    j["playerJoinFailures"] = v.playerJoinFailures;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsSearchingForMatchNotification& v) {
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo>>;
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsSearchingForMatchNotification_HPP
