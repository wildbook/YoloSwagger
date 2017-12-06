#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    int32_t queueId;
    std::string summonerName;
    std::string reason;
    uint64_t summonerId;
    std::string payload;
    int64_t remainingMillis;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["queueId"] = v.queueId;
    j["summonerName"] = v.summonerName;
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.payload = j.at("payload").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
  }
}
