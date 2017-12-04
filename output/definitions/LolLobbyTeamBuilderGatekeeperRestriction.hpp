#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestriction_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestriction_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderGatekeeperRestriction {
    // 
    std::string payload;
    // 
    int32_t queueId;
    // 
    std::string reason;
    // 
    uint32_t remainingMillis;
    // 
    uint64_t summonerId;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction& v) {
    j["payload"] = v.payload;
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction& v) {
    v.payload = j.at("payload").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.reason = j.at("reason").get<std::string>;
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestriction_HPP
