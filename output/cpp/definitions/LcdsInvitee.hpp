#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsInviteeState.hpp"
namespace leagueapi {
  struct LcdsInvitee_t {
    uint64_t summonerId;
    LcdsInviteeState_t inviteeState;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const LcdsInvitee_t& v) {
    j["summonerId"] = v.summonerId;
    j["inviteeState"] = v.inviteeState;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, LcdsInvitee_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.inviteeState = j.at("inviteeState").get<LcdsInviteeState_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const LcdsInvitee_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
