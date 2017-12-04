#ifndef SWAGGER_TYPES_ClientRequestError_HPP
#define SWAGGER_TYPES_ClientRequestError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class ClientRequestError {
    // 
    OVER_INVITE = 51,
    // 
    PENDING_ROSTER_CLOSE = 54,
    // 
    INVALID_ROSTER = 17,
    // 
    NOT_CAPTAIN = 43,
    // 
    PENDING_ROSTER_NOT_READY = 52,
    // 
    ALREADY_IN_PHASE = 5,
    // 
    TICKET_NOT_SET = 62,
    // 
    ROSTER_DISBAND_NOT_ALLOWED = 57,
    // 
    INVALID_SUB = 19,
    // 
    OVER_SUGGESTION_INVITE = 50,
    // 
    INACTIVE_PHASE = 15,
    // 
    INVALID_LOGOCOLOR = 26,
    // 
    IN_OTHER_PHASE = 13,
    // 
    WITHDRAW_LOCKOUT = 65,
    // 
    SUGGEST_INVITEE_NOT_EXIST = 58,
    // 
    LOGO_NOT_ALLOWED = 9,
    // 
    INVALID_BRACKET = 30,
    // 
    NOT_SEED_INTO_LEAGUE = 46,
    // 
    NO_AVAILABLE_PHASE = 42,
    // 
    NOT_INVITEE = 45,
    // 
    INVALID_ROSTER_MEMBER_SIZE = 23,
    // 
    CAPTAIN_NOT_ALLOWED = 6,
    // 
    NOT_UNANIMOUS = 47,
    // 
    INVALID_MATCHID = 31,
    // 
    INVALID_CHECKELIGIBILITY_SIZE = 29,
    // 
    ALREADY_SUGGESTED = 2,
    // 
    TICKET_OFFER_NOT_EXIST = 60,
    // 
    FAIL_SUGGESTINVITE = 8,
    // 
    INVALID_TOURNAMENT = 20,
    // 
    MAX_SUB_SIZE = 38,
    // 
    ALREADY_INVITED = 1,
    // 
    ALREADY_DECLINE_WITHDRAW = 3,
    // 
    ROSTER_ELIMINATED = 55,
    // 
    NO_PERMISSION_CREATE_ROSTER = 40,
    // 
    INVALID_NAME = 27,
    // 
    INVALID_BUY_BACK = 18,
    // 
    WITHDRAW_CANCEL_NOT_ALLOWED = 64,
    // 
    INACTIVE_REGISTRATION = 14,
    // 
    NO_SAME_PLAYER = 39,
    // 
    NO_PERMISSION_REGISTER_ROSTER = 41,
    // 
    TICKET_OFFER_OVER_LIMIT = 61,
    // 
    INVALID_PHASE = 21,
    // 
    ALREADY_VOTE_WITHDRAW = 4,
    // 
    FAIL_INVITE = 7,
    // 
    INVALID_MATCHSTATUS_FORGAMEEND = 34,
    // 
    INVALID_PLAYER = 32,
    // 
    NOT_MEMBER = 44,
    // 
    ROSTER_NOT_ELIMINATED = 56,
    // 
    INTERNAL_ERROR = 16,
    // 
    NOT_ALLOWED_DELETE_TOURNAMENT = 49,
    // 
    LOGOCOLOR_NOT_ALLOWED = 10,
    // 
    ALREADY_MEMBER = 0,
    // 
    INVALID_POSITION = 24,
    // 
    TICKET_ALREADY_SET = 59,
    // 
    MAX_INVITED = 35,
    // 
    MAX_SUBED = 36,
    // 
    NOT_ENOUGH_TICKETS = 48,
    // 
    WITHDRAW_NOT_ALLOWED = 63,
    // 
    INVALID_WITHDRAW = 33,
    // 
    IN_OTHER_PENDINGROSTER = 12,
    // 
    INVALID_SHORTNAME = 28,
    // 
    MAX_ROSTER_FETCHSIZE = 37,
    // 
    IN_OTHER_ROSTER = 11,
    // 
    PENDING_ROSTER_FULL = 53,
    // 
    INVALID_LOGO = 25,
    // 
    INVALID_INVITEE = 22,
  };

  inline void to_json(nlohmann::json& j, const ClientRequestError& v) {
    switch(v) {
      case ClientRequestError::OVER_INVITE:
        j = "OVER_INVITE";
      break;
      case ClientRequestError::PENDING_ROSTER_CLOSE:
        j = "PENDING_ROSTER_CLOSE";
      break;
      case ClientRequestError::INVALID_ROSTER:
        j = "INVALID_ROSTER";
      break;
      case ClientRequestError::NOT_CAPTAIN:
        j = "NOT_CAPTAIN";
      break;
      case ClientRequestError::PENDING_ROSTER_NOT_READY:
        j = "PENDING_ROSTER_NOT_READY";
      break;
      case ClientRequestError::ALREADY_IN_PHASE:
        j = "ALREADY_IN_PHASE";
      break;
      case ClientRequestError::TICKET_NOT_SET:
        j = "TICKET_NOT_SET";
      break;
      case ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED:
        j = "ROSTER_DISBAND_NOT_ALLOWED";
      break;
      case ClientRequestError::INVALID_SUB:
        j = "INVALID_SUB";
      break;
      case ClientRequestError::OVER_SUGGESTION_INVITE:
        j = "OVER_SUGGESTION_INVITE";
      break;
      case ClientRequestError::INACTIVE_PHASE:
        j = "INACTIVE_PHASE";
      break;
      case ClientRequestError::INVALID_LOGOCOLOR:
        j = "INVALID_LOGOCOLOR";
      break;
      case ClientRequestError::IN_OTHER_PHASE:
        j = "IN_OTHER_PHASE";
      break;
      case ClientRequestError::WITHDRAW_LOCKOUT:
        j = "WITHDRAW_LOCKOUT";
      break;
      case ClientRequestError::SUGGEST_INVITEE_NOT_EXIST:
        j = "SUGGEST_INVITEE_NOT_EXIST";
      break;
      case ClientRequestError::LOGO_NOT_ALLOWED:
        j = "LOGO_NOT_ALLOWED";
      break;
      case ClientRequestError::INVALID_BRACKET:
        j = "INVALID_BRACKET";
      break;
      case ClientRequestError::NOT_SEED_INTO_LEAGUE:
        j = "NOT_SEED_INTO_LEAGUE";
      break;
      case ClientRequestError::NO_AVAILABLE_PHASE:
        j = "NO_AVAILABLE_PHASE";
      break;
      case ClientRequestError::NOT_INVITEE:
        j = "NOT_INVITEE";
      break;
      case ClientRequestError::INVALID_ROSTER_MEMBER_SIZE:
        j = "INVALID_ROSTER_MEMBER_SIZE";
      break;
      case ClientRequestError::CAPTAIN_NOT_ALLOWED:
        j = "CAPTAIN_NOT_ALLOWED";
      break;
      case ClientRequestError::NOT_UNANIMOUS:
        j = "NOT_UNANIMOUS";
      break;
      case ClientRequestError::INVALID_MATCHID:
        j = "INVALID_MATCHID";
      break;
      case ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE:
        j = "INVALID_CHECKELIGIBILITY_SIZE";
      break;
      case ClientRequestError::ALREADY_SUGGESTED:
        j = "ALREADY_SUGGESTED";
      break;
      case ClientRequestError::TICKET_OFFER_NOT_EXIST:
        j = "TICKET_OFFER_NOT_EXIST";
      break;
      case ClientRequestError::FAIL_SUGGESTINVITE:
        j = "FAIL_SUGGESTINVITE";
      break;
      case ClientRequestError::INVALID_TOURNAMENT:
        j = "INVALID_TOURNAMENT";
      break;
      case ClientRequestError::MAX_SUB_SIZE:
        j = "MAX_SUB_SIZE";
      break;
      case ClientRequestError::ALREADY_INVITED:
        j = "ALREADY_INVITED";
      break;
      case ClientRequestError::ALREADY_DECLINE_WITHDRAW:
        j = "ALREADY_DECLINE_WITHDRAW";
      break;
      case ClientRequestError::ROSTER_ELIMINATED:
        j = "ROSTER_ELIMINATED";
      break;
      case ClientRequestError::NO_PERMISSION_CREATE_ROSTER:
        j = "NO_PERMISSION_CREATE_ROSTER";
      break;
      case ClientRequestError::INVALID_NAME:
        j = "INVALID_NAME";
      break;
      case ClientRequestError::INVALID_BUY_BACK:
        j = "INVALID_BUY_BACK";
      break;
      case ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED:
        j = "WITHDRAW_CANCEL_NOT_ALLOWED";
      break;
      case ClientRequestError::INACTIVE_REGISTRATION:
        j = "INACTIVE_REGISTRATION";
      break;
      case ClientRequestError::NO_SAME_PLAYER:
        j = "NO_SAME_PLAYER";
      break;
      case ClientRequestError::NO_PERMISSION_REGISTER_ROSTER:
        j = "NO_PERMISSION_REGISTER_ROSTER";
      break;
      case ClientRequestError::TICKET_OFFER_OVER_LIMIT:
        j = "TICKET_OFFER_OVER_LIMIT";
      break;
      case ClientRequestError::INVALID_PHASE:
        j = "INVALID_PHASE";
      break;
      case ClientRequestError::ALREADY_VOTE_WITHDRAW:
        j = "ALREADY_VOTE_WITHDRAW";
      break;
      case ClientRequestError::FAIL_INVITE:
        j = "FAIL_INVITE";
      break;
      case ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND:
        j = "INVALID_MATCHSTATUS_FORGAMEEND";
      break;
      case ClientRequestError::INVALID_PLAYER:
        j = "INVALID_PLAYER";
      break;
      case ClientRequestError::NOT_MEMBER:
        j = "NOT_MEMBER";
      break;
      case ClientRequestError::ROSTER_NOT_ELIMINATED:
        j = "ROSTER_NOT_ELIMINATED";
      break;
      case ClientRequestError::INTERNAL_ERROR:
        j = "INTERNAL_ERROR";
      break;
      case ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT:
        j = "NOT_ALLOWED_DELETE_TOURNAMENT";
      break;
      case ClientRequestError::LOGOCOLOR_NOT_ALLOWED:
        j = "LOGOCOLOR_NOT_ALLOWED";
      break;
      case ClientRequestError::ALREADY_MEMBER:
        j = "ALREADY_MEMBER";
      break;
      case ClientRequestError::INVALID_POSITION:
        j = "INVALID_POSITION";
      break;
      case ClientRequestError::TICKET_ALREADY_SET:
        j = "TICKET_ALREADY_SET";
      break;
      case ClientRequestError::MAX_INVITED:
        j = "MAX_INVITED";
      break;
      case ClientRequestError::MAX_SUBED:
        j = "MAX_SUBED";
      break;
      case ClientRequestError::NOT_ENOUGH_TICKETS:
        j = "NOT_ENOUGH_TICKETS";
      break;
      case ClientRequestError::WITHDRAW_NOT_ALLOWED:
        j = "WITHDRAW_NOT_ALLOWED";
      break;
      case ClientRequestError::INVALID_WITHDRAW:
        j = "INVALID_WITHDRAW";
      break;
      case ClientRequestError::IN_OTHER_PENDINGROSTER:
        j = "IN_OTHER_PENDINGROSTER";
      break;
      case ClientRequestError::INVALID_SHORTNAME:
        j = "INVALID_SHORTNAME";
      break;
      case ClientRequestError::MAX_ROSTER_FETCHSIZE:
        j = "MAX_ROSTER_FETCHSIZE";
      break;
      case ClientRequestError::IN_OTHER_ROSTER:
        j = "IN_OTHER_ROSTER";
      break;
      case ClientRequestError::PENDING_ROSTER_FULL:
        j = "PENDING_ROSTER_FULL";
      break;
      case ClientRequestError::INVALID_LOGO:
        j = "INVALID_LOGO";
      break;
      case ClientRequestError::INVALID_INVITEE:
        j = "INVALID_INVITEE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClientRequestError& v) {
    const auto& s = j.get<std::string>();
    if(s == "OVER_INVITE"){
      v = ClientRequestError::OVER_INVITE;
      return;
    }
    if(s == "PENDING_ROSTER_CLOSE"){
      v = ClientRequestError::PENDING_ROSTER_CLOSE;
      return;
    }
    if(s == "INVALID_ROSTER"){
      v = ClientRequestError::INVALID_ROSTER;
      return;
    }
    if(s == "NOT_CAPTAIN"){
      v = ClientRequestError::NOT_CAPTAIN;
      return;
    }
    if(s == "PENDING_ROSTER_NOT_READY"){
      v = ClientRequestError::PENDING_ROSTER_NOT_READY;
      return;
    }
    if(s == "ALREADY_IN_PHASE"){
      v = ClientRequestError::ALREADY_IN_PHASE;
      return;
    }
    if(s == "TICKET_NOT_SET"){
      v = ClientRequestError::TICKET_NOT_SET;
      return;
    }
    if(s == "ROSTER_DISBAND_NOT_ALLOWED"){
      v = ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED;
      return;
    }
    if(s == "INVALID_SUB"){
      v = ClientRequestError::INVALID_SUB;
      return;
    }
    if(s == "OVER_SUGGESTION_INVITE"){
      v = ClientRequestError::OVER_SUGGESTION_INVITE;
      return;
    }
    if(s == "INACTIVE_PHASE"){
      v = ClientRequestError::INACTIVE_PHASE;
      return;
    }
    if(s == "INVALID_LOGOCOLOR"){
      v = ClientRequestError::INVALID_LOGOCOLOR;
      return;
    }
    if(s == "IN_OTHER_PHASE"){
      v = ClientRequestError::IN_OTHER_PHASE;
      return;
    }
    if(s == "WITHDRAW_LOCKOUT"){
      v = ClientRequestError::WITHDRAW_LOCKOUT;
      return;
    }
    if(s == "SUGGEST_INVITEE_NOT_EXIST"){
      v = ClientRequestError::SUGGEST_INVITEE_NOT_EXIST;
      return;
    }
    if(s == "LOGO_NOT_ALLOWED"){
      v = ClientRequestError::LOGO_NOT_ALLOWED;
      return;
    }
    if(s == "INVALID_BRACKET"){
      v = ClientRequestError::INVALID_BRACKET;
      return;
    }
    if(s == "NOT_SEED_INTO_LEAGUE"){
      v = ClientRequestError::NOT_SEED_INTO_LEAGUE;
      return;
    }
    if(s == "NO_AVAILABLE_PHASE"){
      v = ClientRequestError::NO_AVAILABLE_PHASE;
      return;
    }
    if(s == "NOT_INVITEE"){
      v = ClientRequestError::NOT_INVITEE;
      return;
    }
    if(s == "INVALID_ROSTER_MEMBER_SIZE"){
      v = ClientRequestError::INVALID_ROSTER_MEMBER_SIZE;
      return;
    }
    if(s == "CAPTAIN_NOT_ALLOWED"){
      v = ClientRequestError::CAPTAIN_NOT_ALLOWED;
      return;
    }
    if(s == "NOT_UNANIMOUS"){
      v = ClientRequestError::NOT_UNANIMOUS;
      return;
    }
    if(s == "INVALID_MATCHID"){
      v = ClientRequestError::INVALID_MATCHID;
      return;
    }
    if(s == "INVALID_CHECKELIGIBILITY_SIZE"){
      v = ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE;
      return;
    }
    if(s == "ALREADY_SUGGESTED"){
      v = ClientRequestError::ALREADY_SUGGESTED;
      return;
    }
    if(s == "TICKET_OFFER_NOT_EXIST"){
      v = ClientRequestError::TICKET_OFFER_NOT_EXIST;
      return;
    }
    if(s == "FAIL_SUGGESTINVITE"){
      v = ClientRequestError::FAIL_SUGGESTINVITE;
      return;
    }
    if(s == "INVALID_TOURNAMENT"){
      v = ClientRequestError::INVALID_TOURNAMENT;
      return;
    }
    if(s == "MAX_SUB_SIZE"){
      v = ClientRequestError::MAX_SUB_SIZE;
      return;
    }
    if(s == "ALREADY_INVITED"){
      v = ClientRequestError::ALREADY_INVITED;
      return;
    }
    if(s == "ALREADY_DECLINE_WITHDRAW"){
      v = ClientRequestError::ALREADY_DECLINE_WITHDRAW;
      return;
    }
    if(s == "ROSTER_ELIMINATED"){
      v = ClientRequestError::ROSTER_ELIMINATED;
      return;
    }
    if(s == "NO_PERMISSION_CREATE_ROSTER"){
      v = ClientRequestError::NO_PERMISSION_CREATE_ROSTER;
      return;
    }
    if(s == "INVALID_NAME"){
      v = ClientRequestError::INVALID_NAME;
      return;
    }
    if(s == "INVALID_BUY_BACK"){
      v = ClientRequestError::INVALID_BUY_BACK;
      return;
    }
    if(s == "WITHDRAW_CANCEL_NOT_ALLOWED"){
      v = ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED;
      return;
    }
    if(s == "INACTIVE_REGISTRATION"){
      v = ClientRequestError::INACTIVE_REGISTRATION;
      return;
    }
    if(s == "NO_SAME_PLAYER"){
      v = ClientRequestError::NO_SAME_PLAYER;
      return;
    }
    if(s == "NO_PERMISSION_REGISTER_ROSTER"){
      v = ClientRequestError::NO_PERMISSION_REGISTER_ROSTER;
      return;
    }
    if(s == "TICKET_OFFER_OVER_LIMIT"){
      v = ClientRequestError::TICKET_OFFER_OVER_LIMIT;
      return;
    }
    if(s == "INVALID_PHASE"){
      v = ClientRequestError::INVALID_PHASE;
      return;
    }
    if(s == "ALREADY_VOTE_WITHDRAW"){
      v = ClientRequestError::ALREADY_VOTE_WITHDRAW;
      return;
    }
    if(s == "FAIL_INVITE"){
      v = ClientRequestError::FAIL_INVITE;
      return;
    }
    if(s == "INVALID_MATCHSTATUS_FORGAMEEND"){
      v = ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND;
      return;
    }
    if(s == "INVALID_PLAYER"){
      v = ClientRequestError::INVALID_PLAYER;
      return;
    }
    if(s == "NOT_MEMBER"){
      v = ClientRequestError::NOT_MEMBER;
      return;
    }
    if(s == "ROSTER_NOT_ELIMINATED"){
      v = ClientRequestError::ROSTER_NOT_ELIMINATED;
      return;
    }
    if(s == "INTERNAL_ERROR"){
      v = ClientRequestError::INTERNAL_ERROR;
      return;
    }
    if(s == "NOT_ALLOWED_DELETE_TOURNAMENT"){
      v = ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT;
      return;
    }
    if(s == "LOGOCOLOR_NOT_ALLOWED"){
      v = ClientRequestError::LOGOCOLOR_NOT_ALLOWED;
      return;
    }
    if(s == "ALREADY_MEMBER"){
      v = ClientRequestError::ALREADY_MEMBER;
      return;
    }
    if(s == "INVALID_POSITION"){
      v = ClientRequestError::INVALID_POSITION;
      return;
    }
    if(s == "TICKET_ALREADY_SET"){
      v = ClientRequestError::TICKET_ALREADY_SET;
      return;
    }
    if(s == "MAX_INVITED"){
      v = ClientRequestError::MAX_INVITED;
      return;
    }
    if(s == "MAX_SUBED"){
      v = ClientRequestError::MAX_SUBED;
      return;
    }
    if(s == "NOT_ENOUGH_TICKETS"){
      v = ClientRequestError::NOT_ENOUGH_TICKETS;
      return;
    }
    if(s == "WITHDRAW_NOT_ALLOWED"){
      v = ClientRequestError::WITHDRAW_NOT_ALLOWED;
      return;
    }
    if(s == "INVALID_WITHDRAW"){
      v = ClientRequestError::INVALID_WITHDRAW;
      return;
    }
    if(s == "IN_OTHER_PENDINGROSTER"){
      v = ClientRequestError::IN_OTHER_PENDINGROSTER;
      return;
    }
    if(s == "INVALID_SHORTNAME"){
      v = ClientRequestError::INVALID_SHORTNAME;
      return;
    }
    if(s == "MAX_ROSTER_FETCHSIZE"){
      v = ClientRequestError::MAX_ROSTER_FETCHSIZE;
      return;
    }
    if(s == "IN_OTHER_ROSTER"){
      v = ClientRequestError::IN_OTHER_ROSTER;
      return;
    }
    if(s == "PENDING_ROSTER_FULL"){
      v = ClientRequestError::PENDING_ROSTER_FULL;
      return;
    }
    if(s == "INVALID_LOGO"){
      v = ClientRequestError::INVALID_LOGO;
      return;
    }
    if(s == "INVALID_INVITEE"){
      v = ClientRequestError::INVALID_INVITEE;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_ClientRequestError_HPP
