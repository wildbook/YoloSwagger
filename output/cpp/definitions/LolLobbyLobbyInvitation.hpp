#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    std::string id;
    std::string errorType;
    std::string toSummonerName;
    LolLobbyEligibility_t eligibility;
    std::string timestamp;
    nlohmann::json invitationMetaData;
    uint64_t fromSummonerId;
    LolLobbyLobbyInvitationState_t state;
    std::string fromSummonerName;
    uint64_t toSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["id"] = v.id;
    j["errorType"] = v.errorType;
    j["toSummonerName"] = v.toSummonerName;
    j["eligibility"] = v.eligibility;
    j["timestamp"] = v.timestamp;
    j["invitationMetaData"] = v.invitationMetaData;
    j["fromSummonerId"] = v.fromSummonerId;
    j["state"] = v.state;
    j["fromSummonerName"] = v.fromSummonerName;
    j["toSummonerId"] = v.toSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.id = j.at("id").get<std::string>();
    v.errorType = j.at("errorType").get<std::string>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
