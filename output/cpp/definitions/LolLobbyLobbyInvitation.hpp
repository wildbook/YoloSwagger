#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
#include <json.hpp>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyInvitation {
    // 
    std::string toSummonerName;
    // 
    LolLobbyEligibility eligibility;
    // 
    std::string timestamp;
    // 
    std::string errorType;
    // 
    uint64_t toSummonerId;
    // 
    LolLobbyLobbyInvitationState state;
    // 
    std::string fromSummonerName;
    // 
    uint64_t fromSummonerId;
    // 
    nlohmann::json invitationMetaData;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation& v) {
    v.toSummonerName = j.at("toSummonerName").get<std::string>;
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.errorType = j.at("errorType").get<std::string>;
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>;
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>;
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
