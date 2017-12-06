#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    uint64_t fromSummonerId;
    std::string id;
    LolLobbyLobbyInvitationState_t state;
    LolLobbyEligibility_t eligibility;
    uint64_t toSummonerId;
    std::string fromSummonerName;
    nlohmann::json invitationMetaData;
    std::string timestamp;
    std::string errorType;
    std::string toSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["fromSummonerId"] = v.fromSummonerId;
    j["id"] = v.id;
    j["state"] = v.state;
    j["eligibility"] = v.eligibility;
    j["toSummonerId"] = v.toSummonerId;
    j["fromSummonerName"] = v.fromSummonerName;
    j["invitationMetaData"] = v.invitationMetaData;
    j["timestamp"] = v.timestamp;
    j["errorType"] = v.errorType;
    j["toSummonerName"] = v.toSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.id = j.at("id").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.errorType = j.at("errorType").get<std::string>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
  }
}
