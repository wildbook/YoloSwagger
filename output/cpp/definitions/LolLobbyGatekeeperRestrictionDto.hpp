#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyGatekeeperRestrictionDto_t {
    std::string reason;
    uint64_t accountId;
    int32_t queueId;
    std::string payload;
    int64_t remainingMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGatekeeperRestrictionDto_t& v) {
    j["reason"] = v.reason;
    j["accountId"] = v.accountId;
    j["queueId"] = v.queueId;
    j["payload"] = v.payload;
    j["remainingMillis"] = v.remainingMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGatekeeperRestrictionDto_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.payload = j.at("payload").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<int64_t>();
  }
  inline std::string to_string(const LolLobbyGatekeeperRestrictionDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
