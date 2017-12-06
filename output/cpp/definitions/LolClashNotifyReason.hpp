#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashNotifyReason_t {
    INVITE_E = 14,
    DECLINE_TICKET_E = 25,
    SET_TICKET_E = 22,
    REVOKE_SUGGESTION_E = 3,
    CHANGE_SHORTNAME_E = 11,
    ACCEPT_TICKET_E = 26,
    UNREADY_E = 5,
    ACCEPT_SUGGESTION_E = 2,
    KICK_E = 21,
    CHANGE_LOGO_E = 9,
    CHANGE_NAMETAGLOGO_E = 13,
    SUGGESTION_E = 0,
    LEAVE_E = 19,
    DECLINE_INVITE_E = 16,
    REVOKE_INVITE_E = 18,
    RESENT_INVITE_E = 15,
    ACCEPT_INVITE_E = 17,
    READY_E = 4,
    DISMISS_E = 7,
    DECLINE_SUGGESTION_E = 1,
    CAPTAIN_LEAVE_E = 20,
    CHANGE_NAME_E = 10,
    REVOKED_TICKET_E = 24,
    CHANGE_POSITION_E = 12,
    OFFER_TICKET_E = 23,
    OWNER_CLOSE_E = 6,
    OWNER_TRANSFER_E = 8,
  };

  inline void to_json(nlohmann::json& j, const LolClashNotifyReason_t& v) {
    switch(v) {
      case LolClashNotifyReason_t::INVITE_E:
        j = "INVITE";
      break;
      case LolClashNotifyReason_t::DECLINE_TICKET_E:
        j = "DECLINE_TICKET";
      break;
      case LolClashNotifyReason_t::SET_TICKET_E:
        j = "SET_TICKET";
      break;
      case LolClashNotifyReason_t::REVOKE_SUGGESTION_E:
        j = "REVOKE_SUGGESTION";
      break;
      case LolClashNotifyReason_t::CHANGE_SHORTNAME_E:
        j = "CHANGE_SHORTNAME";
      break;
      case LolClashNotifyReason_t::ACCEPT_TICKET_E:
        j = "ACCEPT_TICKET";
      break;
      case LolClashNotifyReason_t::UNREADY_E:
        j = "UNREADY";
      break;
      case LolClashNotifyReason_t::ACCEPT_SUGGESTION_E:
        j = "ACCEPT_SUGGESTION";
      break;
      case LolClashNotifyReason_t::KICK_E:
        j = "KICK";
      break;
      case LolClashNotifyReason_t::CHANGE_LOGO_E:
        j = "CHANGE_LOGO";
      break;
      case LolClashNotifyReason_t::CHANGE_NAMETAGLOGO_E:
        j = "CHANGE_NAMETAGLOGO";
      break;
      case LolClashNotifyReason_t::SUGGESTION_E:
        j = "SUGGESTION";
      break;
      case LolClashNotifyReason_t::LEAVE_E:
        j = "LEAVE";
      break;
      case LolClashNotifyReason_t::DECLINE_INVITE_E:
        j = "DECLINE_INVITE";
      break;
      case LolClashNotifyReason_t::REVOKE_INVITE_E:
        j = "REVOKE_INVITE";
      break;
      case LolClashNotifyReason_t::RESENT_INVITE_E:
        j = "RESENT_INVITE";
      break;
      case LolClashNotifyReason_t::ACCEPT_INVITE_E:
        j = "ACCEPT_INVITE";
      break;
      case LolClashNotifyReason_t::READY_E:
        j = "READY";
      break;
      case LolClashNotifyReason_t::DISMISS_E:
        j = "DISMISS";
      break;
      case LolClashNotifyReason_t::DECLINE_SUGGESTION_E:
        j = "DECLINE_SUGGESTION";
      break;
      case LolClashNotifyReason_t::CAPTAIN_LEAVE_E:
        j = "CAPTAIN_LEAVE";
      break;
      case LolClashNotifyReason_t::CHANGE_NAME_E:
        j = "CHANGE_NAME";
      break;
      case LolClashNotifyReason_t::REVOKED_TICKET_E:
        j = "REVOKED_TICKET";
      break;
      case LolClashNotifyReason_t::CHANGE_POSITION_E:
        j = "CHANGE_POSITION";
      break;
      case LolClashNotifyReason_t::OFFER_TICKET_E:
        j = "OFFER_TICKET";
      break;
      case LolClashNotifyReason_t::OWNER_CLOSE_E:
        j = "OWNER_CLOSE";
      break;
      case LolClashNotifyReason_t::OWNER_TRANSFER_E:
        j = "OWNER_TRANSFER";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashNotifyReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "INVITE"){
      v = LolClashNotifyReason_t::INVITE_E;
      return;
    }
    if(s == "DECLINE_TICKET"){
      v = LolClashNotifyReason_t::DECLINE_TICKET_E;
      return;
    }
    if(s == "SET_TICKET"){
      v = LolClashNotifyReason_t::SET_TICKET_E;
      return;
    }
    if(s == "REVOKE_SUGGESTION"){
      v = LolClashNotifyReason_t::REVOKE_SUGGESTION_E;
      return;
    }
    if(s == "CHANGE_SHORTNAME"){
      v = LolClashNotifyReason_t::CHANGE_SHORTNAME_E;
      return;
    }
    if(s == "ACCEPT_TICKET"){
      v = LolClashNotifyReason_t::ACCEPT_TICKET_E;
      return;
    }
    if(s == "UNREADY"){
      v = LolClashNotifyReason_t::UNREADY_E;
      return;
    }
    if(s == "ACCEPT_SUGGESTION"){
      v = LolClashNotifyReason_t::ACCEPT_SUGGESTION_E;
      return;
    }
    if(s == "KICK"){
      v = LolClashNotifyReason_t::KICK_E;
      return;
    }
    if(s == "CHANGE_LOGO"){
      v = LolClashNotifyReason_t::CHANGE_LOGO_E;
      return;
    }
    if(s == "CHANGE_NAMETAGLOGO"){
      v = LolClashNotifyReason_t::CHANGE_NAMETAGLOGO_E;
      return;
    }
    if(s == "SUGGESTION"){
      v = LolClashNotifyReason_t::SUGGESTION_E;
      return;
    }
    if(s == "LEAVE"){
      v = LolClashNotifyReason_t::LEAVE_E;
      return;
    }
    if(s == "DECLINE_INVITE"){
      v = LolClashNotifyReason_t::DECLINE_INVITE_E;
      return;
    }
    if(s == "REVOKE_INVITE"){
      v = LolClashNotifyReason_t::REVOKE_INVITE_E;
      return;
    }
    if(s == "RESENT_INVITE"){
      v = LolClashNotifyReason_t::RESENT_INVITE_E;
      return;
    }
    if(s == "ACCEPT_INVITE"){
      v = LolClashNotifyReason_t::ACCEPT_INVITE_E;
      return;
    }
    if(s == "READY"){
      v = LolClashNotifyReason_t::READY_E;
      return;
    }
    if(s == "DISMISS"){
      v = LolClashNotifyReason_t::DISMISS_E;
      return;
    }
    if(s == "DECLINE_SUGGESTION"){
      v = LolClashNotifyReason_t::DECLINE_SUGGESTION_E;
      return;
    }
    if(s == "CAPTAIN_LEAVE"){
      v = LolClashNotifyReason_t::CAPTAIN_LEAVE_E;
      return;
    }
    if(s == "CHANGE_NAME"){
      v = LolClashNotifyReason_t::CHANGE_NAME_E;
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
    if(s == "OFFER_TICKET"){
      v = LolClashNotifyReason_t::OFFER_TICKET_E;
      return;
    }
    if(s == "OWNER_CLOSE"){
      v = LolClashNotifyReason_t::OWNER_CLOSE_E;
      return;
    }
    if(s == "OWNER_TRANSFER"){
      v = LolClashNotifyReason_t::OWNER_TRANSFER_E;
      return;
    }
  }
}
