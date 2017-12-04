#ifndef SWAGGER_TYPES_LolClashNotifyReason_HPP
#define SWAGGER_TYPES_LolClashNotifyReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashNotifyReason {
    // 
    ACCEPT_INVITE = 17,
    // 
    ACCEPT_SUGGESTION = 2,
    // 
    ACCEPT_TICKET = 26,
    // 
    CAPTAIN_LEAVE = 20,
    // 
    CHANGE_LOGO = 9,
    // 
    CHANGE_NAME = 10,
    // 
    CHANGE_NAMETAGLOGO = 13,
    // 
    CHANGE_POSITION = 12,
    // 
    CHANGE_SHORTNAME = 11,
    // 
    DECLINE_INVITE = 16,
    // 
    DECLINE_SUGGESTION = 1,
    // 
    DECLINE_TICKET = 25,
    // 
    DISMISS = 7,
    // 
    INVITE = 14,
    // 
    KICK = 21,
    // 
    LEAVE = 19,
    // 
    OFFER_TICKET = 23,
    // 
    OWNER_CLOSE = 6,
    // 
    OWNER_TRANSFER = 8,
    // 
    READY = 4,
    // 
    RESENT_INVITE = 15,
    // 
    REVOKED_TICKET = 24,
    // 
    REVOKE_INVITE = 18,
    // 
    REVOKE_SUGGESTION = 3,
    // 
    SET_TICKET = 22,
    // 
    SUGGESTION = 0,
    // 
    UNREADY = 5,
  };

  inline void to_json(nlohmann::json& j, const LolClashNotifyReason& v) {
    switch(v) {
      case LolClashNotifyReason::ACCEPT_INVITE:
        j = "ACCEPT_INVITE";
      break;
      case LolClashNotifyReason::ACCEPT_SUGGESTION:
        j = "ACCEPT_SUGGESTION";
      break;
      case LolClashNotifyReason::ACCEPT_TICKET:
        j = "ACCEPT_TICKET";
      break;
      case LolClashNotifyReason::CAPTAIN_LEAVE:
        j = "CAPTAIN_LEAVE";
      break;
      case LolClashNotifyReason::CHANGE_LOGO:
        j = "CHANGE_LOGO";
      break;
      case LolClashNotifyReason::CHANGE_NAME:
        j = "CHANGE_NAME";
      break;
      case LolClashNotifyReason::CHANGE_NAMETAGLOGO:
        j = "CHANGE_NAMETAGLOGO";
      break;
      case LolClashNotifyReason::CHANGE_POSITION:
        j = "CHANGE_POSITION";
      break;
      case LolClashNotifyReason::CHANGE_SHORTNAME:
        j = "CHANGE_SHORTNAME";
      break;
      case LolClashNotifyReason::DECLINE_INVITE:
        j = "DECLINE_INVITE";
      break;
      case LolClashNotifyReason::DECLINE_SUGGESTION:
        j = "DECLINE_SUGGESTION";
      break;
      case LolClashNotifyReason::DECLINE_TICKET:
        j = "DECLINE_TICKET";
      break;
      case LolClashNotifyReason::DISMISS:
        j = "DISMISS";
      break;
      case LolClashNotifyReason::INVITE:
        j = "INVITE";
      break;
      case LolClashNotifyReason::KICK:
        j = "KICK";
      break;
      case LolClashNotifyReason::LEAVE:
        j = "LEAVE";
      break;
      case LolClashNotifyReason::OFFER_TICKET:
        j = "OFFER_TICKET";
      break;
      case LolClashNotifyReason::OWNER_CLOSE:
        j = "OWNER_CLOSE";
      break;
      case LolClashNotifyReason::OWNER_TRANSFER:
        j = "OWNER_TRANSFER";
      break;
      case LolClashNotifyReason::READY:
        j = "READY";
      break;
      case LolClashNotifyReason::RESENT_INVITE:
        j = "RESENT_INVITE";
      break;
      case LolClashNotifyReason::REVOKED_TICKET:
        j = "REVOKED_TICKET";
      break;
      case LolClashNotifyReason::REVOKE_INVITE:
        j = "REVOKE_INVITE";
      break;
      case LolClashNotifyReason::REVOKE_SUGGESTION:
        j = "REVOKE_SUGGESTION";
      break;
      case LolClashNotifyReason::SET_TICKET:
        j = "SET_TICKET";
      break;
      case LolClashNotifyReason::SUGGESTION:
        j = "SUGGESTION";
      break;
      case LolClashNotifyReason::UNREADY:
        j = "UNREADY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashNotifyReason& v) {
    const auto s& = j.get<std::string>();
    if(s == "ACCEPT_INVITE"){
      v = LolClashNotifyReason::ACCEPT_INVITE;
      return;
    }
    if(s == "ACCEPT_SUGGESTION"){
      v = LolClashNotifyReason::ACCEPT_SUGGESTION;
      return;
    }
    if(s == "ACCEPT_TICKET"){
      v = LolClashNotifyReason::ACCEPT_TICKET;
      return;
    }
    if(s == "CAPTAIN_LEAVE"){
      v = LolClashNotifyReason::CAPTAIN_LEAVE;
      return;
    }
    if(s == "CHANGE_LOGO"){
      v = LolClashNotifyReason::CHANGE_LOGO;
      return;
    }
    if(s == "CHANGE_NAME"){
      v = LolClashNotifyReason::CHANGE_NAME;
      return;
    }
    if(s == "CHANGE_NAMETAGLOGO"){
      v = LolClashNotifyReason::CHANGE_NAMETAGLOGO;
      return;
    }
    if(s == "CHANGE_POSITION"){
      v = LolClashNotifyReason::CHANGE_POSITION;
      return;
    }
    if(s == "CHANGE_SHORTNAME"){
      v = LolClashNotifyReason::CHANGE_SHORTNAME;
      return;
    }
    if(s == "DECLINE_INVITE"){
      v = LolClashNotifyReason::DECLINE_INVITE;
      return;
    }
    if(s == "DECLINE_SUGGESTION"){
      v = LolClashNotifyReason::DECLINE_SUGGESTION;
      return;
    }
    if(s == "DECLINE_TICKET"){
      v = LolClashNotifyReason::DECLINE_TICKET;
      return;
    }
    if(s == "DISMISS"){
      v = LolClashNotifyReason::DISMISS;
      return;
    }
    if(s == "INVITE"){
      v = LolClashNotifyReason::INVITE;
      return;
    }
    if(s == "KICK"){
      v = LolClashNotifyReason::KICK;
      return;
    }
    if(s == "LEAVE"){
      v = LolClashNotifyReason::LEAVE;
      return;
    }
    if(s == "OFFER_TICKET"){
      v = LolClashNotifyReason::OFFER_TICKET;
      return;
    }
    if(s == "OWNER_CLOSE"){
      v = LolClashNotifyReason::OWNER_CLOSE;
      return;
    }
    if(s == "OWNER_TRANSFER"){
      v = LolClashNotifyReason::OWNER_TRANSFER;
      return;
    }
    if(s == "READY"){
      v = LolClashNotifyReason::READY;
      return;
    }
    if(s == "RESENT_INVITE"){
      v = LolClashNotifyReason::RESENT_INVITE;
      return;
    }
    if(s == "REVOKED_TICKET"){
      v = LolClashNotifyReason::REVOKED_TICKET;
      return;
    }
    if(s == "REVOKE_INVITE"){
      v = LolClashNotifyReason::REVOKE_INVITE;
      return;
    }
    if(s == "REVOKE_SUGGESTION"){
      v = LolClashNotifyReason::REVOKE_SUGGESTION;
      return;
    }
    if(s == "SET_TICKET"){
      v = LolClashNotifyReason::SET_TICKET;
      return;
    }
    if(s == "SUGGESTION"){
      v = LolClashNotifyReason::SUGGESTION;
      return;
    }
    if(s == "UNREADY"){
      v = LolClashNotifyReason::UNREADY;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashNotifyReason_HPP
