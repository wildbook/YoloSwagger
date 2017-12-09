#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGatekeeperRestrictionDto_t {
    uint64_t accountId;
    std::string reason;
    std::string payload;
    int64_t remainingMillis;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGatekeeperRestrictionDto_t& v) {
    j["accountId"] = v.accountId;
    j["reason"] = v.reason;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGatekeeperRestrictionDto_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.reason = j.at("reason").get<std::string>();
    v.payload = j.at("payload").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolLobbyGatekeeperRestrictionDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
