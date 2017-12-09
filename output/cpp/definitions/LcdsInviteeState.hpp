#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LcdsInviteeState_t {
    PENDING_E = 1,
    DECLINED_E = 2,
    KICKED_E = 7,
    QUIT_E = 6,
    CREATOR_E = 0,
    BANNED_E = 8,
    ACCEPTED_E = 3,
    ACCEPT_FAILED_E = 4,
    JOINED_E = 5,
  };

  inline void to_json(nlohmann::json& j, const LcdsInviteeState_t& v) {
    switch(v) {
      case LcdsInviteeState_t::PENDING_E:
        j = "PENDING";
      break;
      case LcdsInviteeState_t::DECLINED_E:
        j = "DECLINED";
      break;
      case LcdsInviteeState_t::KICKED_E:
        j = "KICKED";
      break;
      case LcdsInviteeState_t::QUIT_E:
        j = "QUIT";
      break;
      case LcdsInviteeState_t::CREATOR_E:
        j = "CREATOR";
      break;
      case LcdsInviteeState_t::BANNED_E:
        j = "BANNED";
      break;
      case LcdsInviteeState_t::ACCEPTED_E:
        j = "ACCEPTED";
      break;
      case LcdsInviteeState_t::ACCEPT_FAILED_E:
        j = "ACCEPT_FAILED";
      break;
      case LcdsInviteeState_t::JOINED_E:
        j = "JOINED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LcdsInviteeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PENDING"){
      v = LcdsInviteeState_t::PENDING_E;
      return;
    }
    if(s == "DECLINED"){
      v = LcdsInviteeState_t::DECLINED_E;
      return;
    }
    if(s == "KICKED"){
      v = LcdsInviteeState_t::KICKED_E;
      return;
    }
    if(s == "QUIT"){
      v = LcdsInviteeState_t::QUIT_E;
      return;
    }
    if(s == "CREATOR"){
      v = LcdsInviteeState_t::CREATOR_E;
      return;
    }
    if(s == "BANNED"){
      v = LcdsInviteeState_t::BANNED_E;
      return;
    }
    if(s == "ACCEPTED"){
      v = LcdsInviteeState_t::ACCEPTED_E;
      return;
    }
    if(s == "ACCEPT_FAILED"){
      v = LcdsInviteeState_t::ACCEPT_FAILED_E;
      return;
    }
    if(s == "JOINED"){
      v = LcdsInviteeState_t::JOINED_E;
      return;
    }
  }
  inline std::string to_string(const LcdsInviteeState_t& v) {
    switch(v) {
      case LcdsInviteeState_t::PENDING_E:
        return "PENDING";
      case LcdsInviteeState_t::DECLINED_E:
        return "DECLINED";
      case LcdsInviteeState_t::KICKED_E:
        return "KICKED";
      case LcdsInviteeState_t::QUIT_E:
        return "QUIT";
      case LcdsInviteeState_t::CREATOR_E:
        return "CREATOR";
      case LcdsInviteeState_t::BANNED_E:
        return "BANNED";
      case LcdsInviteeState_t::ACCEPTED_E:
        return "ACCEPTED";
      case LcdsInviteeState_t::ACCEPT_FAILED_E:
        return "ACCEPT_FAILED";
      case LcdsInviteeState_t::JOINED_E:
        return "JOINED";
    }
  }

}
