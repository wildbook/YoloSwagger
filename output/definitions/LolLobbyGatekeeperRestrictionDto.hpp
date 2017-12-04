#ifndef SWAGGER_TYPES_LolLobbyGatekeeperRestrictionDto_HPP
#define SWAGGER_TYPES_LolLobbyGatekeeperRestrictionDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyGatekeeperRestrictionDto {
    // 
    uint64_t accountId;
    // 
    std::string payload;
    // 
    int32_t queueId;
    // 
    std::string reason;
    // 
    int64_t remainingMillis;
  };

  void to_json(nlohmann::json& j, const LolLobbyGatekeeperRestrictionDto& v) {
    j["accountId"] = v.accountId;
    j["payload"] = v.payload;
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
  }

  void from_json(const nlohmann::json& j, LolLobbyGatekeeperRestrictionDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.payload = j.at("payload").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.reason = j.at("reason").get<std::string>;
    v.remainingMillis = j.at("remainingMillis").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGatekeeperRestrictionDto_HPP
