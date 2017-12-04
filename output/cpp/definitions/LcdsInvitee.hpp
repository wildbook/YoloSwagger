#ifndef SWAGGER_TYPES_LcdsInvitee_HPP
#define SWAGGER_TYPES_LcdsInvitee_HPP
#include <json.hpp>
#include "LcdsInviteeState.hpp"
namespace leagueapi {
  // 
  struct LcdsInvitee {
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
    // 
    LcdsInviteeState inviteeState;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitee& v) {
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["inviteeState"] = v.inviteeState;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitee& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>;
  }

}
#endif // SWAGGER_TYPES_LcdsInvitee_HPP
