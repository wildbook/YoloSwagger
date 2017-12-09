#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    uint64_t toSummonerId;
    std::string toSummonerName;
    std::string fromSummonerName;
    uint64_t fromSummonerId;
    std::string errorType;
    std::string id;
    LolLobbyEligibility_t eligibility;
    nlohmann::json invitationMetaData;
    std::string timestamp;
    LolLobbyLobbyInvitationState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["toSummonerId"] = v.toSummonerId;
    j["toSummonerName"] = v.toSummonerName;
    j["fromSummonerName"] = v.fromSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
    j["errorType"] = v.errorType;
    j["id"] = v.id;
    j["eligibility"] = v.eligibility;
    j["invitationMetaData"] = v.invitationMetaData;
    j["timestamp"] = v.timestamp;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.errorType = j.at("errorType").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
