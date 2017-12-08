#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsInviteeState.hpp"
namespace leagueapi {
  struct LcdsInvitee_t {
    std::string summonerName;
    LcdsInviteeState_t inviteeState;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitee_t& v) {
    j["summonerName"] = v.summonerName;
    j["inviteeState"] = v.inviteeState;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitee_t& v) {
    v.summonerName = j.at("summonerName").get<std::string>();
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LcdsInvitee_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
