#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct QueueEligilibilityGatekeeperRestrictionDtoV3_t {
    int32_t_t queueId;
    std::string_t summonerName;
    std::string_t payload;
    std::string_t reason;
    int64_t_t remainingMillis;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    j["queueId"] = v.queueId;
    j["summonerName"] = v.summonerName;
    j["payload"] = v.payload;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.payload = j.at("payload").get<std::string_t>();
    v.reason = j.at("reason").get<std::string_t>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const QueueEligilibilityGatekeeperRestrictionDtoV3_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
