#ifndef SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
#define SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
#include <json.hpp>
#include "LolLobbyEligibility.hpp"
#include "LolLobbyLobbyInvitationState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyLobbyInvitation {
    // 
    LolLobbyEligibility eligibility;
    // 
    std::string errorType;
    // 
    uint64_t fromSummonerId;
    // 
    std::string fromSummonerName;
    // 
    std::string id;
    // 
    nlohmann::json invitationMetaData;
    // 
    LolLobbyLobbyInvitationState state;
    // 
    std::string timestamp;
    // 
    uint64_t toSummonerId;
    // 
    std::string toSummonerName;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyInvitation& v) {
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

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyInvitation& v) {
    v.eligibility = j.at("eligibility").get<LolLobbyEligibility>;
    v.errorType = j.at("errorType").get<std::string>;
    v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>;
    v.fromSummonerName = j.at("fromSummonerName").get<std::string>;
    v.id = j.at("id").get<std::string>;
    v.invitationMetaData = j.at("invitationMetaData").get<nlohmann::json>;
    v.state = j.at("state").get<LolLobbyLobbyInvitationState>;
    v.timestamp = j.at("timestamp").get<std::string>;
    v.toSummonerId = j.at("toSummonerId").get<uint64_t>;
    v.toSummonerName = j.at("toSummonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyInvitation_HPP
