#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestriction_t {
    std::string reason;
    uint32_t remainingMillis;
    int32_t queueId;
    std::string payload;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["queueId"] = v.queueId;
    j["payload"] = v.payload;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.payload = j.at("payload").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
