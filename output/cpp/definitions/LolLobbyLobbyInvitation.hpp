#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    std::string errorType;
    nlohmann::json invitationMetaData;
    std::string toSummonerName;
    uint64_t fromSummonerId;
    uint64_t toSummonerId;
    std::string timestamp;
    LolLobbyEligibility_t eligibility;
    LolLobbyLobbyInvitationState_t state;
    std::string id;
    std::string fromSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation_t& v) {
    j["errorType"] = v.errorType;
    j["invitationMetaData"] = v.invitationMetaData;
    j["toSummonerName"] = v.toSummonerName;
    j["fromSummonerId"] = v.fromSummonerId;
    j["toSummonerId"] = v.toSummonerId;
    j["timestamp"] = v.timestamp;
    j["eligibility"] = v.eligibility;
    j["state"] = v.state;
    j["id"] = v.id;
    j["fromSummonerName"] = v.fromSummonerName;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation_t& v) {
    v.errorType = j.at("errorType").get<std::string>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>();
    v.toSummonerName = j.at("toSummonerName").get<std::string>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>();
    v.timestamp = j.at("timestamp").get<std::string>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.id = j.at("id").get<std::string>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
