#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  struct LolLobbyLobbyInvitation_t {
    std::string_t toSummonerName;
    LolLobbyEligibility_t eligibility;
    std::string_t timestamp;
    std::string_t errorType;
    uint64_t_t toSummonerId;
    LolLobbyLobbyInvitationState_t state;
    std::string_t fromSummonerName;
    uint64_t_t fromSummonerId;
    nlohmann::json_t invitationMetaData;
    std::string_t id;
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
    v.toSummonerName = j.at("toSummonerName").get<std::string_t>();
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility_t>();
    v.timestamp = j.at("timestamp").get<std::string_t>();
    v.errorType = j.at("errorType").get<std::string_t>();
    v.toSummonerId = j.at("toSummonerId").get<uint64_t_t>();
    v.state = j.at("state").get<LolLobbyLobbyInvitationState_t>();
    v.fromSummonerName = j.at("fromSummonerName").get<std::string_t>();
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t_t>();
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyLobbyInvitation_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
