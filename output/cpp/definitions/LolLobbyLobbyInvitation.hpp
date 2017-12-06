#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyLobbyInvitationState.hpp"
#include "LolLobbyEligibility.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    LolLobbyEligibility_t eligibility;
    std::string errorType;
    uint64_t fromSummonerId;
    std::string fromSummonerName;
    std::string id;
    nlohmann::json invitationMetaData;
    LolLobbyLobbyInvitationState_t state;
    std::string timestamp;
    uint64_t toSummonerId;
    std::string toSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["eligibility"] = v.eligibility;
    j["errorType"] = v.errorType;
    j["fromSummonerId"] = v.fromSummonerId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["id"] = v.id;
    j["invitationMetaData"] = v.invitationMetaData;
    j["state"] = v.state;
    j["timestamp"] = v.timestamp;
    j["toSummonerId"] = v.toSummonerId;
    j["toSummonerName"] = v.toSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.errorType = j.at("errorType").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
  }
}
