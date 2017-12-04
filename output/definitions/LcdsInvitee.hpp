#ifndef SWAGGER_TYPES_LcdsInvitee_HPP
#define SWAGGER_TYPES_LcdsInvitee_HPP
#include <json.hpp>
#include "LcdsInviteeState.hpp"
namespace leagueapi {
  // 
  struct LcdsInvitee {
    // 
    LcdsInviteeState inviteeState;
    // 
    uint64_t summonerId;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitee& v) {
    j["inviteeState"] = v.inviteeState;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitee& v) {
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState>;
    v.summonerId = j.at("summonerId").get<uint64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsInvitee_HPP
