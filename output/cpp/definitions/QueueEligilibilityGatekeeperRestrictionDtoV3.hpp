#ifndef SWAGGER_TYPES_QueueEligilibilityGatekeeperRestrictionDtoV3_HPP
#define SWAGGER_TYPES_QueueEligilibilityGatekeeperRestrictionDtoV3_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct QueueEligilibilityGatekeeperRestrictionDtoV3 {
    // 
    int32_t queueId;
    // 
    std::string summonerName;
    // 
    std::string payload;
    // 
    std::string reason;
    // 
    int64_t remainingMillis;
    // 
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    j["queueId"] = v.queueId;
    j["summonerName"] = v.summonerName;
    j["payload"] = v.payload;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.payload = j.at("payload").get<std::string>;
    v.reason = j.at("reason").get<std::string>;
    v.remainingMillis = j.at("remainingMillis").get<int64_t>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_QueueEligilibilityGatekeeperRestrictionDtoV3_HPP
