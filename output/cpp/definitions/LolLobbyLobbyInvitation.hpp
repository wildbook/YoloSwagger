#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    std::string toSummonerName;
    LolLobbyEligibility_t eligibility;
    std::string timestamp;
    std::string errorType;
    uint64_t toSummonerId;
    LolLobbyLobbyInvitationState_t state;
    std::string fromSummonerName;
    uint64_t fromSummonerId;
    nlohmann::json invitationMetaData;
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["toSummonerName"] = v.toSummonerName;
    j["eligibility"] = v.eligibility;
    j["timestamp"] = v.timestamp;
    j["errorType"] = v.errorType;
    j["toSummonerId"] = v.toSummonerId;
    j["state"] = v.state;
    j["fromSummonerName"] = v.fromSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
    j["invitationMetaData"] = v.invitationMetaData;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.errorType = j.at("errorType").get<std::string>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.id = j.at("id").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
