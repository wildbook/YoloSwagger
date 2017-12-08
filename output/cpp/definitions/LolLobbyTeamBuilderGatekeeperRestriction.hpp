#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderGatekeeperRestriction_t {
    std::string payload;
    int32_t queueId;
    std::string reason;
    uint32_t remainingMillis;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    j["payload"] = v.payload;
    j["queueId"] = v.queueId;
    j["reason"] = v.reason;
    j["remainingMillis"] = v.remainingMillis;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    v.payload = j.at("payload").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.reason = j.at("reason").get<std::string>();
    v.remainingMillis = j.at("remainingMillis").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderGatekeeperRestriction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
