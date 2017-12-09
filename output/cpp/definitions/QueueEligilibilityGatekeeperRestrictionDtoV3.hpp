#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    std::string reason;
    uint64_t summonerId;
    int32_t queueId;
    std::string summonerName;
    int64_t remainingMillis;
    std::string payload;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["reason"] = v.reason;
    j["summonerId"] = v.summonerId;
    j["queueId"] = v.queueId;
    j["summonerName"] = v.summonerName;
    j["remainingMillis"] = v.remainingMillis;
    j["payload"] = v.payload;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.payload = j.at("payload").get<std::string>();
  }
  inline std::string to_string(const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
