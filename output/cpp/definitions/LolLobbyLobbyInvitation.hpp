#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    std::string timestamp;
    std::string fromSummonerName;
    nlohmann::json invitationMetaData;
    uint64_t toSummonerId;
    std::string id;
    uint64_t fromSummonerId;
    std::string toSummonerName;
    LolLobbyLobbyInvitationState_t state;
    std::string errorType;
    LolLobbyEligibility_t eligibility;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["timestamp"] = v.timestamp;
    j["fromSummonerName"] = v.fromSummonerName;
    j["invitationMetaData"] = v.invitationMetaData;
    j["toSummonerId"] = v.toSummonerId;
    j["id"] = v.id;
    j["fromSummonerId"] = v.fromSummonerId;
    j["toSummonerName"] = v.toSummonerName;
    j["state"] = v.state;
    j["errorType"] = v.errorType;
    j["eligibility"] = v.eligibility;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.timestamp = j.at("timestamp").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.errorType = j.at("errorType").get<std::string>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
