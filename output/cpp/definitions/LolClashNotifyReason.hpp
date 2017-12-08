#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashNotifyReason_t {
    DECLINE_TICKET_E = 25,
    INVITE_E = 14,
    DECLINE_INVITE_E = 16,
    ACCEPT_INVITE_E = 17,
    DECLINE_SUGGESTION_E = 1,
    LEAVE_E = 19,
    SET_TICKET_E = 22,
    CAPTAIN_LEAVE_E = 20,
    UNREADY_E = 5,
    RESENT_INVITE_E = 15,
    DISMISS_E = 7,
    CHANGE_SHORTNAME_E = 11,
    CHANGE_LOGO_E = 9,
    OWNER_TRANSFER_E = 8,
    OWNER_CLOSE_E = 6,
    CHANGE_NAMETAGLOGO_E = 13,
    CHANGE_NAME_E = 10,
    OFFER_TICKET_E = 23,
    REVOKE_SUGGESTION_E = 3,
    ACCEPT_TICKET_E = 26,
    ACCEPT_SUGGESTION_E = 2,
    REVOKED_TICKET_E = 24,
    CHANGE_POSITION_E = 12,
    SUGGESTION_E = 0,
    READY_E = 4,
    REVOKE_INVITE_E = 18,
    KICK_E = 21,
  };

  inline void to_json(nlohmann::json& j, const LolClashNotifyReason_t& v) {
    switch(v) {
      case LolClashNotifyReason_t::DECLINE_TICKET_E:
        j = "DECLINE_TICKET";
      break;
      case LolClashNotifyReason_t::INVITE_E:
        j = "INVITE";
      break;
      case LolClashNotifyReason_t::DECLINE_INVITE_E:
        j = "DECLINE_INVITE";
      break;
      case LolClashNotifyReason_t::ACCEPT_INVITE_E:
        j = "ACCEPT_INVITE";
      break;
      case LolClashNotifyReason_t::DECLINE_SUGGESTION_E:
        j = "DECLINE_SUGGESTION";
      break;
      case LolClashNotifyReason_t::LEAVE_E:
        j = "LEAVE";
      break;
      case LolClashNotifyReason_t::SET_TICKET_E:
        j = "SET_TICKET";
      break;
      case LolClashNotifyReason_t::CAPTAIN_LEAVE_E:
        j = "CAPTAIN_LEAVE";
      break;
      case LolClashNotifyReason_t::UNREADY_E:
        j = "UNREADY";
      break;
      case LolClashNotifyReason_t::RESENT_INVITE_E:
        j = "RESENT_INVITE";
      break;
      case LolClashNotifyReason_t::DISMISS_E:
        j = "DISMISS";
      break;
      case LolClashNotifyReason_t::CHANGE_SHORTNAME_E:
        j = "CHANGE_SHORTNAME";
      break;
      case LolClashNotifyReason_t::CHANGE_LOGO_E:
        j = "CHANGE_LOGO";
      break;
      case LolClashNotifyReason_t::OWNER_TRANSFER_E:
        j = "OWNER_TRANSFER";
      break;
      case LolClashNotifyReason_t::OWNER_CLOSE_E:
        j = "OWNER_CLOSE";
      break;
      case LolClashNotifyReason_t::CHANGE_NAMETAGLOGO_E:
        j = "CHANGE_NAMETAGLOGO";
      break;
      case LolClashNotifyReason_t::CHANGE_NAME_E:
        j = "CHANGE_NAME";
      break;
      case LolClashNotifyReason_t::OFFER_TICKET_E:
        j = "OFFER_TICKET";
      break;
      case LolClashNotifyReason_t::REVOKE_SUGGESTION_E:
        j = "REVOKE_SUGGESTION";
      break;
      case LolClashNotifyReason_t::ACCEPT_TICKET_E:
        j = "ACCEPT_TICKET";
      break;
      case LolClashNotifyReason_t::ACCEPT_SUGGESTION_E:
        j = "ACCEPT_SUGGESTION";
      break;
      case LolClashNotifyReason_t::REVOKED_TICKET_E:
        j = "REVOKED_TICKET";
      break;
      case LolClashNotifyReason_t::CHANGE_POSITION_E:
        j = "CHANGE_POSITION";
      break;
      case LolClashNotifyReason_t::SUGGESTION_E:
        j = "SUGGESTION";
      break;
      case LolClashNotifyReason_t::READY_E:
        j = "READY";
      break;
      case LolClashNotifyReason_t::REVOKE_INVITE_E:
        j = "REVOKE_INVITE";
      break;
      case LolClashNotifyReason_t::KICK_E:
        j = "KICK";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashNotifyReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DECLINE_TICKET"){
      v = LolClashNotifyReason_t::DECLINE_TICKET_E;
      return;
    }
    if(s == "INVITE"){
      v = LolClashNotifyReason_t::INVITE_E;
      return;
    }
    if(s == "DECLINE_INVITE"){
      v = LolClashNotifyReason_t::DECLINE_INVITE_E;
      return;
    }
    if(s == "ACCEPT_INVITE"){
      v = LolClashNotifyReason_t::ACCEPT_INVITE_E;
      return;
    }
    if(s == "DECLINE_SUGGESTION"){
      v = LolClashNotifyReason_t::DECLINE_SUGGESTION_E;
      return;
    }
    if(s == "LEAVE"){
      v = LolClashNotifyReason_t::LEAVE_E;
      return;
    }
    if(s == "SET_TICKET"){
      v = LolClashNotifyReason_t::SET_TICKET_E;
      return;
    }
    if(s == "CAPTAIN_LEAVE"){
      v = LolClashNotifyReason_t::CAPTAIN_LEAVE_E;
      return;
    }
    if(s == "UNREADY"){
      v = LolClashNotifyReason_t::UNREADY_E;
      return;
    }
    if(s == "RESENT_INVITE"){
      v = LolClashNotifyReason_t::RESENT_INVITE_E;
      return;
    }
    if(s == "DISMISS"){
      v = LolClashNotifyReason_t::DISMISS_E;
      return;
    }
    if(s == "CHANGE_SHORTNAME"){
      v = LolClashNotifyReason_t::CHANGE_SHORTNAME_E;
      return;
    }
    if(s == "CHANGE_LOGO"){
      v = LolClashNotifyReason_t::CHANGE_LOGO_E;
      return;
    }
    if(s == "OWNER_TRANSFER"){
      v = LolClashNotifyReason_t::OWNER_TRANSFER_E;
      return;
    }
    if(s == "OWNER_CLOSE"){
      v = LolClashNotifyReason_t::OWNER_CLOSE_E;
      return;
    }
    if(s == "CHANGE_NAMETAGLOGO"){
      v = LolClashNotifyReason_t::CHANGE_NAMETAGLOGO_E;
      return;
    }
    if(s == "CHANGE_NAME"){
      v = LolClashNotifyReason_t::CHANGE_NAME_E;
      return;
    }
    if(s == "OFFER_TICKET"){
      v = LolClashNotifyReason_t::OFFER_TICKET_E;
      return;
    }
    if(s == "REVOKE_SUGGESTION"){
      v = LolClashNotifyReason_t::REVOKE_SUGGESTION_E;
      return;
    }
    if(s == "ACCEPT_TICKET"){
      v = LolClashNotifyReason_t::ACCEPT_TICKET_E;
      return;
    }
    if(s == "ACCEPT_SUGGESTION"){
      v = LolClashNotifyReason_t::ACCEPT_SUGGESTION_E;
      return;
    }
    if(s == "REVOKED_TICKET"){
      v = LolClashNotifyReason_t::REVOKED_TICKET_E;
      return;
    }
    if(s == "CHANGE_POSITION"){
      v = LolClashNotifyReason_t::CHANGE_POSITION_E;
      return;
    }
    if(s == "SUGGESTION"){
      v = LolClashNotifyReason_t::SUGGESTION_E;
      return;
    }
    if(s == "READY"){
      v = LolClashNotifyReason_t::READY_E;
      return;
    }
    if(s == "REVOKE_INVITE"){
      v = LolClashNotifyReason_t::REVOKE_INVITE_E;
      return;
    }
    if(s == "KICK"){
      v = LolClashNotifyReason_t::KICK_E;
      return;
    }
  }
  inline std::string to_string(const LolClashNotifyReason_t& v) {
    switch(v) {
      case LolClashNotifyReason_t::DECLINE_TICKET_E:
        return "DECLINE_TICKET";
      case LolClashNotifyReason_t::INVITE_E:
        return "INVITE";
      case LolClashNotifyReason_t::DECLINE_INVITE_E:
        return "DECLINE_INVITE";
      case LolClashNotifyReason_t::ACCEPT_INVITE_E:
        return "ACCEPT_INVITE";
      case LolClashNotifyReason_t::DECLINE_SUGGESTION_E:
        return "DECLINE_SUGGESTION";
      case LolClashNotifyReason_t::LEAVE_E:
        return "LEAVE";
      case LolClashNotifyReason_t::SET_TICKET_E:
        return "SET_TICKET";
      case LolClashNotifyReason_t::CAPTAIN_LEAVE_E:
        return "CAPTAIN_LEAVE";
      case LolClashNotifyReason_t::UNREADY_E:
        return "UNREADY";
      case LolClashNotifyReason_t::RESENT_INVITE_E:
        return "RESENT_INVITE";
      case LolClashNotifyReason_t::DISMISS_E:
        return "DISMISS";
      case LolClashNotifyReason_t::CHANGE_SHORTNAME_E:
        return "CHANGE_SHORTNAME";
      case LolClashNotifyReason_t::CHANGE_LOGO_E:
        return "CHANGE_LOGO";
      case LolClashNotifyReason_t::OWNER_TRANSFER_E:
        return "OWNER_TRANSFER";
      case LolClashNotifyReason_t::OWNER_CLOSE_E:
        return "OWNER_CLOSE";
      case LolClashNotifyReason_t::CHANGE_NAMETAGLOGO_E:
        return "CHANGE_NAMETAGLOGO";
      case LolClashNotifyReason_t::CHANGE_NAME_E:
        return "CHANGE_NAME";
      case LolClashNotifyReason_t::OFFER_TICKET_E:
        return "OFFER_TICKET";
      case LolClashNotifyReason_t::REVOKE_SUGGESTION_E:
        return "REVOKE_SUGGESTION";
      case LolClashNotifyReason_t::ACCEPT_TICKET_E:
        return "ACCEPT_TICKET";
      case LolClashNotifyReason_t::ACCEPT_SUGGESTION_E:
        return "ACCEPT_SUGGESTION";
      case LolClashNotifyReason_t::REVOKED_TICKET_E:
        return "REVOKED_TICKET";
      case LolClashNotifyReason_t::CHANGE_POSITION_E:
        return "CHANGE_POSITION";
      case LolClashNotifyReason_t::SUGGESTION_E:
        return "SUGGESTION";
      case LolClashNotifyReason_t::READY_E:
        return "READY";
      case LolClashNotifyReason_t::REVOKE_INVITE_E:
        return "REVOKE_INVITE";
      case LolClashNotifyReason_t::KICK_E:
        return "KICK";
    }
  }

}
