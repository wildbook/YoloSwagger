#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class ClientRequestError_t {
    NOT_SEED_INTO_LEAGUE_E = 46,
    ALREADY_SUGGESTED_E = 2,
    INVALID_BUY_BACK_E = 18,
    ROSTER_DISBAND_NOT_ALLOWED_E = 57,
    NOT_INVITEE_E = 45,
    NOT_ALLOWED_DELETE_TOURNAMENT_E = 49,
    TICKET_NOT_SET_E = 62,
    INVALID_MATCHID_E = 31,
    NO_SAME_PLAYER_E = 39,
    TICKET_OFFER_NOT_EXIST_E = 60,
    TICKET_ALREADY_SET_E = 59,
    INACTIVE_REGISTRATION_E = 14,
    NOT_CAPTAIN_E = 43,
    WITHDRAW_CANCEL_NOT_ALLOWED_E = 64,
    INACTIVE_PHASE_E = 15,
    INVALID_NAME_E = 27,
    NOT_UNANIMOUS_E = 47,
    SUGGEST_INVITEE_NOT_EXIST_E = 58,
    INVALID_TOURNAMENT_E = 20,
    INVALID_LOGOCOLOR_E = 26,
    INVALID_PLAYER_E = 32,
    ROSTER_NOT_ELIMINATED_E = 56,
    INVALID_ROSTER_MEMBER_SIZE_E = 23,
    WITHDRAW_LOCKOUT_E = 65,
    INVALID_CHECKELIGIBILITY_SIZE_E = 29,
    ALREADY_VOTE_WITHDRAW_E = 4,
    INTERNAL_ERROR_E = 16,
    PENDING_ROSTER_FULL_E = 53,
    MAX_SUBED_E = 36,
    LOGOCOLOR_NOT_ALLOWED_E = 10,
    FAIL_SUGGESTINVITE_E = 8,
    INVALID_INVITEE_E = 22,
    INVALID_WITHDRAW_E = 33,
    MAX_ROSTER_FETCHSIZE_E = 37,
    CAPTAIN_NOT_ALLOWED_E = 6,
    PENDING_ROSTER_NOT_READY_E = 52,
    IN_OTHER_PHASE_E = 13,
    OVER_SUGGESTION_INVITE_E = 50,
    NO_AVAILABLE_PHASE_E = 42,
    IN_OTHER_ROSTER_E = 11,
    ALREADY_IN_PHASE_E = 5,
    INVALID_ROSTER_E = 17,
    TICKET_OFFER_OVER_LIMIT_E = 61,
    NO_PERMISSION_REGISTER_ROSTER_E = 41,
    ALREADY_MEMBER_E = 0,
    PENDING_ROSTER_CLOSE_E = 54,
    LOGO_NOT_ALLOWED_E = 9,
    MAX_INVITED_E = 35,
    INVALID_PHASE_E = 21,
    INVALID_SHORTNAME_E = 28,
    ROSTER_ELIMINATED_E = 55,
    INVALID_POSITION_E = 24,
    INVALID_LOGO_E = 25,
    NOT_ENOUGH_TICKETS_E = 48,
    INVALID_SUB_E = 19,
    FAIL_INVITE_E = 7,
    OVER_INVITE_E = 51,
    INVALID_BRACKET_E = 30,
    ALREADY_INVITED_E = 1,
    INVALID_MATCHSTATUS_FORGAMEEND_E = 34,
    ALREADY_DECLINE_WITHDRAW_E = 3,
    IN_OTHER_PENDINGROSTER_E = 12,
    NO_PERMISSION_CREATE_ROSTER_E = 40,
    MAX_SUB_SIZE_E = 38,
    NOT_MEMBER_E = 44,
    WITHDRAW_NOT_ALLOWED_E = 63,
  };

  inline void to_json(nlohmann::json& j, const ClientRequestError_t& v) {
    switch(v) {
      case ClientRequestError_t::NOT_SEED_INTO_LEAGUE_E:
        j = "NOT_SEED_INTO_LEAGUE";
      break;
      case ClientRequestError_t::ALREADY_SUGGESTED_E:
        j = "ALREADY_SUGGESTED";
      break;
      case ClientRequestError_t::INVALID_BUY_BACK_E:
        j = "INVALID_BUY_BACK";
      break;
      case ClientRequestError_t::ROSTER_DISBAND_NOT_ALLOWED_E:
        j = "ROSTER_DISBAND_NOT_ALLOWED";
      break;
      case ClientRequestError_t::NOT_INVITEE_E:
        j = "NOT_INVITEE";
      break;
      case ClientRequestError_t::NOT_ALLOWED_DELETE_TOURNAMENT_E:
        j = "NOT_ALLOWED_DELETE_TOURNAMENT";
      break;
      case ClientRequestError_t::TICKET_NOT_SET_E:
        j = "TICKET_NOT_SET";
      break;
      case ClientRequestError_t::INVALID_MATCHID_E:
        j = "INVALID_MATCHID";
      break;
      case ClientRequestError_t::NO_SAME_PLAYER_E:
        j = "NO_SAME_PLAYER";
      break;
      case ClientRequestError_t::TICKET_OFFER_NOT_EXIST_E:
        j = "TICKET_OFFER_NOT_EXIST";
      break;
      case ClientRequestError_t::TICKET_ALREADY_SET_E:
        j = "TICKET_ALREADY_SET";
      break;
      case ClientRequestError_t::INACTIVE_REGISTRATION_E:
        j = "INACTIVE_REGISTRATION";
      break;
      case ClientRequestError_t::NOT_CAPTAIN_E:
        j = "NOT_CAPTAIN";
      break;
      case ClientRequestError_t::WITHDRAW_CANCEL_NOT_ALLOWED_E:
        j = "WITHDRAW_CANCEL_NOT_ALLOWED";
      break;
      case ClientRequestError_t::INACTIVE_PHASE_E:
        j = "INACTIVE_PHASE";
      break;
      case ClientRequestError_t::INVALID_NAME_E:
        j = "INVALID_NAME";
      break;
      case ClientRequestError_t::NOT_UNANIMOUS_E:
        j = "NOT_UNANIMOUS";
      break;
      case ClientRequestError_t::SUGGEST_INVITEE_NOT_EXIST_E:
        j = "SUGGEST_INVITEE_NOT_EXIST";
      break;
      case ClientRequestError_t::INVALID_TOURNAMENT_E:
        j = "INVALID_TOURNAMENT";
      break;
      case ClientRequestError_t::INVALID_LOGOCOLOR_E:
        j = "INVALID_LOGOCOLOR";
      break;
      case ClientRequestError_t::INVALID_PLAYER_E:
        j = "INVALID_PLAYER";
      break;
      case ClientRequestError_t::ROSTER_NOT_ELIMINATED_E:
        j = "ROSTER_NOT_ELIMINATED";
      break;
      case ClientRequestError_t::INVALID_ROSTER_MEMBER_SIZE_E:
        j = "INVALID_ROSTER_MEMBER_SIZE";
      break;
      case ClientRequestError_t::WITHDRAW_LOCKOUT_E:
        j = "WITHDRAW_LOCKOUT";
      break;
      case ClientRequestError_t::INVALID_CHECKELIGIBILITY_SIZE_E:
        j = "INVALID_CHECKELIGIBILITY_SIZE";
      break;
      case ClientRequestError_t::ALREADY_VOTE_WITHDRAW_E:
        j = "ALREADY_VOTE_WITHDRAW";
      break;
      case ClientRequestError_t::INTERNAL_ERROR_E:
        j = "INTERNAL_ERROR";
      break;
      case ClientRequestError_t::PENDING_ROSTER_FULL_E:
        j = "PENDING_ROSTER_FULL";
      break;
      case ClientRequestError_t::MAX_SUBED_E:
        j = "MAX_SUBED";
      break;
      case ClientRequestError_t::LOGOCOLOR_NOT_ALLOWED_E:
        j = "LOGOCOLOR_NOT_ALLOWED";
      break;
      case ClientRequestError_t::FAIL_SUGGESTINVITE_E:
        j = "FAIL_SUGGESTINVITE";
      break;
      case ClientRequestError_t::INVALID_INVITEE_E:
        j = "INVALID_INVITEE";
      break;
      case ClientRequestError_t::INVALID_WITHDRAW_E:
        j = "INVALID_WITHDRAW";
      break;
      case ClientRequestError_t::MAX_ROSTER_FETCHSIZE_E:
        j = "MAX_ROSTER_FETCHSIZE";
      break;
      case ClientRequestError_t::CAPTAIN_NOT_ALLOWED_E:
        j = "CAPTAIN_NOT_ALLOWED";
      break;
      case ClientRequestError_t::PENDING_ROSTER_NOT_READY_E:
        j = "PENDING_ROSTER_NOT_READY";
      break;
      case ClientRequestError_t::IN_OTHER_PHASE_E:
        j = "IN_OTHER_PHASE";
      break;
      case ClientRequestError_t::OVER_SUGGESTION_INVITE_E:
        j = "OVER_SUGGESTION_INVITE";
      break;
      case ClientRequestError_t::NO_AVAILABLE_PHASE_E:
        j = "NO_AVAILABLE_PHASE";
      break;
      case ClientRequestError_t::IN_OTHER_ROSTER_E:
        j = "IN_OTHER_ROSTER";
      break;
      case ClientRequestError_t::ALREADY_IN_PHASE_E:
        j = "ALREADY_IN_PHASE";
      break;
      case ClientRequestError_t::INVALID_ROSTER_E:
        j = "INVALID_ROSTER";
      break;
      case ClientRequestError_t::TICKET_OFFER_OVER_LIMIT_E:
        j = "TICKET_OFFER_OVER_LIMIT";
      break;
      case ClientRequestError_t::NO_PERMISSION_REGISTER_ROSTER_E:
        j = "NO_PERMISSION_REGISTER_ROSTER";
      break;
      case ClientRequestError_t::ALREADY_MEMBER_E:
        j = "ALREADY_MEMBER";
      break;
      case ClientRequestError_t::PENDING_ROSTER_CLOSE_E:
        j = "PENDING_ROSTER_CLOSE";
      break;
      case ClientRequestError_t::LOGO_NOT_ALLOWED_E:
        j = "LOGO_NOT_ALLOWED";
      break;
      case ClientRequestError_t::MAX_INVITED_E:
        j = "MAX_INVITED";
      break;
      case ClientRequestError_t::INVALID_PHASE_E:
        j = "INVALID_PHASE";
      break;
      case ClientRequestError_t::INVALID_SHORTNAME_E:
        j = "INVALID_SHORTNAME";
      break;
      case ClientRequestError_t::ROSTER_ELIMINATED_E:
        j = "ROSTER_ELIMINATED";
      break;
      case ClientRequestError_t::INVALID_POSITION_E:
        j = "INVALID_POSITION";
      break;
      case ClientRequestError_t::INVALID_LOGO_E:
        j = "INVALID_LOGO";
      break;
      case ClientRequestError_t::NOT_ENOUGH_TICKETS_E:
        j = "NOT_ENOUGH_TICKETS";
      break;
      case ClientRequestError_t::INVALID_SUB_E:
        j = "INVALID_SUB";
      break;
      case ClientRequestError_t::FAIL_INVITE_E:
        j = "FAIL_INVITE";
      break;
      case ClientRequestError_t::OVER_INVITE_E:
        j = "OVER_INVITE";
      break;
      case ClientRequestError_t::INVALID_BRACKET_E:
        j = "INVALID_BRACKET";
      break;
      case ClientRequestError_t::ALREADY_INVITED_E:
        j = "ALREADY_INVITED";
      break;
      case ClientRequestError_t::INVALID_MATCHSTATUS_FORGAMEEND_E:
        j = "INVALID_MATCHSTATUS_FORGAMEEND";
      break;
      case ClientRequestError_t::ALREADY_DECLINE_WITHDRAW_E:
        j = "ALREADY_DECLINE_WITHDRAW";
      break;
      case ClientRequestError_t::IN_OTHER_PENDINGROSTER_E:
        j = "IN_OTHER_PENDINGROSTER";
      break;
      case ClientRequestError_t::NO_PERMISSION_CREATE_ROSTER_E:
        j = "NO_PERMISSION_CREATE_ROSTER";
      break;
      case ClientRequestError_t::MAX_SUB_SIZE_E:
        j = "MAX_SUB_SIZE";
      break;
      case ClientRequestError_t::NOT_MEMBER_E:
        j = "NOT_MEMBER";
      break;
      case ClientRequestError_t::WITHDRAW_NOT_ALLOWED_E:
        j = "WITHDRAW_NOT_ALLOWED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, ClientRequestError_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NOT_SEED_INTO_LEAGUE"){
      v = ClientRequestError_t::NOT_SEED_INTO_LEAGUE_E;
      return;
    }
    if(s == "ALREADY_SUGGESTED"){
      v = ClientRequestError_t::ALREADY_SUGGESTED_E;
      return;
    }
    if(s == "INVALID_BUY_BACK"){
      v = ClientRequestError_t::INVALID_BUY_BACK_E;
      return;
    }
    if(s == "ROSTER_DISBAND_NOT_ALLOWED"){
      v = ClientRequestError_t::ROSTER_DISBAND_NOT_ALLOWED_E;
      return;
    }
    if(s == "NOT_INVITEE"){
      v = ClientRequestError_t::NOT_INVITEE_E;
      return;
    }
    if(s == "NOT_ALLOWED_DELETE_TOURNAMENT"){
      v = ClientRequestError_t::NOT_ALLOWED_DELETE_TOURNAMENT_E;
      return;
    }
    if(s == "TICKET_NOT_SET"){
      v = ClientRequestError_t::TICKET_NOT_SET_E;
      return;
    }
    if(s == "INVALID_MATCHID"){
      v = ClientRequestError_t::INVALID_MATCHID_E;
      return;
    }
    if(s == "NO_SAME_PLAYER"){
      v = ClientRequestError_t::NO_SAME_PLAYER_E;
      return;
    }
    if(s == "TICKET_OFFER_NOT_EXIST"){
      v = ClientRequestError_t::TICKET_OFFER_NOT_EXIST_E;
      return;
    }
    if(s == "TICKET_ALREADY_SET"){
      v = ClientRequestError_t::TICKET_ALREADY_SET_E;
      return;
    }
    if(s == "INACTIVE_REGISTRATION"){
      v = ClientRequestError_t::INACTIVE_REGISTRATION_E;
      return;
    }
    if(s == "NOT_CAPTAIN"){
      v = ClientRequestError_t::NOT_CAPTAIN_E;
      return;
    }
    if(s == "WITHDRAW_CANCEL_NOT_ALLOWED"){
      v = ClientRequestError_t::WITHDRAW_CANCEL_NOT_ALLOWED_E;
      return;
    }
    if(s == "INACTIVE_PHASE"){
      v = ClientRequestError_t::INACTIVE_PHASE_E;
      return;
    }
    if(s == "INVALID_NAME"){
      v = ClientRequestError_t::INVALID_NAME_E;
      return;
    }
    if(s == "NOT_UNANIMOUS"){
      v = ClientRequestError_t::NOT_UNANIMOUS_E;
      return;
    }
    if(s == "SUGGEST_INVITEE_NOT_EXIST"){
      v = ClientRequestError_t::SUGGEST_INVITEE_NOT_EXIST_E;
      return;
    }
    if(s == "INVALID_TOURNAMENT"){
      v = ClientRequestError_t::INVALID_TOURNAMENT_E;
      return;
    }
    if(s == "INVALID_LOGOCOLOR"){
      v = ClientRequestError_t::INVALID_LOGOCOLOR_E;
      return;
    }
    if(s == "INVALID_PLAYER"){
      v = ClientRequestError_t::INVALID_PLAYER_E;
      return;
    }
    if(s == "ROSTER_NOT_ELIMINATED"){
      v = ClientRequestError_t::ROSTER_NOT_ELIMINATED_E;
      return;
    }
    if(s == "INVALID_ROSTER_MEMBER_SIZE"){
      v = ClientRequestError_t::INVALID_ROSTER_MEMBER_SIZE_E;
      return;
    }
    if(s == "WITHDRAW_LOCKOUT"){
      v = ClientRequestError_t::WITHDRAW_LOCKOUT_E;
      return;
    }
    if(s == "INVALID_CHECKELIGIBILITY_SIZE"){
      v = ClientRequestError_t::INVALID_CHECKELIGIBILITY_SIZE_E;
      return;
    }
    if(s == "ALREADY_VOTE_WITHDRAW"){
      v = ClientRequestError_t::ALREADY_VOTE_WITHDRAW_E;
      return;
    }
    if(s == "INTERNAL_ERROR"){
      v = ClientRequestError_t::INTERNAL_ERROR_E;
      return;
    }
    if(s == "PENDING_ROSTER_FULL"){
      v = ClientRequestError_t::PENDING_ROSTER_FULL_E;
      return;
    }
    if(s == "MAX_SUBED"){
      v = ClientRequestError_t::MAX_SUBED_E;
      return;
    }
    if(s == "LOGOCOLOR_NOT_ALLOWED"){
      v = ClientRequestError_t::LOGOCOLOR_NOT_ALLOWED_E;
      return;
    }
    if(s == "FAIL_SUGGESTINVITE"){
      v = ClientRequestError_t::FAIL_SUGGESTINVITE_E;
      return;
    }
    if(s == "INVALID_INVITEE"){
      v = ClientRequestError_t::INVALID_INVITEE_E;
      return;
    }
    if(s == "INVALID_WITHDRAW"){
      v = ClientRequestError_t::INVALID_WITHDRAW_E;
      return;
    }
    if(s == "MAX_ROSTER_FETCHSIZE"){
      v = ClientRequestError_t::MAX_ROSTER_FETCHSIZE_E;
      return;
    }
    if(s == "CAPTAIN_NOT_ALLOWED"){
      v = ClientRequestError_t::CAPTAIN_NOT_ALLOWED_E;
      return;
    }
    if(s == "PENDING_ROSTER_NOT_READY"){
      v = ClientRequestError_t::PENDING_ROSTER_NOT_READY_E;
      return;
    }
    if(s == "IN_OTHER_PHASE"){
      v = ClientRequestError_t::IN_OTHER_PHASE_E;
      return;
    }
    if(s == "OVER_SUGGESTION_INVITE"){
      v = ClientRequestError_t::OVER_SUGGESTION_INVITE_E;
      return;
    }
    if(s == "NO_AVAILABLE_PHASE"){
      v = ClientRequestError_t::NO_AVAILABLE_PHASE_E;
      return;
    }
    if(s == "IN_OTHER_ROSTER"){
      v = ClientRequestError_t::IN_OTHER_ROSTER_E;
      return;
    }
    if(s == "ALREADY_IN_PHASE"){
      v = ClientRequestError_t::ALREADY_IN_PHASE_E;
      return;
    }
    if(s == "INVALID_ROSTER"){
      v = ClientRequestError_t::INVALID_ROSTER_E;
      return;
    }
    if(s == "TICKET_OFFER_OVER_LIMIT"){
      v = ClientRequestError_t::TICKET_OFFER_OVER_LIMIT_E;
      return;
    }
    if(s == "NO_PERMISSION_REGISTER_ROSTER"){
      v = ClientRequestError_t::NO_PERMISSION_REGISTER_ROSTER_E;
      return;
    }
    if(s == "ALREADY_MEMBER"){
      v = ClientRequestError_t::ALREADY_MEMBER_E;
      return;
    }
    if(s == "PENDING_ROSTER_CLOSE"){
      v = ClientRequestError_t::PENDING_ROSTER_CLOSE_E;
      return;
    }
    if(s == "LOGO_NOT_ALLOWED"){
      v = ClientRequestError_t::LOGO_NOT_ALLOWED_E;
      return;
    }
    if(s == "MAX_INVITED"){
      v = ClientRequestError_t::MAX_INVITED_E;
      return;
    }
    if(s == "INVALID_PHASE"){
      v = ClientRequestError_t::INVALID_PHASE_E;
      return;
    }
    if(s == "INVALID_SHORTNAME"){
      v = ClientRequestError_t::INVALID_SHORTNAME_E;
      return;
    }
    if(s == "ROSTER_ELIMINATED"){
      v = ClientRequestError_t::ROSTER_ELIMINATED_E;
      return;
    }
    if(s == "INVALID_POSITION"){
      v = ClientRequestError_t::INVALID_POSITION_E;
      return;
    }
    if(s == "INVALID_LOGO"){
      v = ClientRequestError_t::INVALID_LOGO_E;
      return;
    }
    if(s == "NOT_ENOUGH_TICKETS"){
      v = ClientRequestError_t::NOT_ENOUGH_TICKETS_E;
      return;
    }
    if(s == "INVALID_SUB"){
      v = ClientRequestError_t::INVALID_SUB_E;
      return;
    }
    if(s == "FAIL_INVITE"){
      v = ClientRequestError_t::FAIL_INVITE_E;
      return;
    }
    if(s == "OVER_INVITE"){
      v = ClientRequestError_t::OVER_INVITE_E;
      return;
    }
    if(s == "INVALID_BRACKET"){
      v = ClientRequestError_t::INVALID_BRACKET_E;
      return;
    }
    if(s == "ALREADY_INVITED"){
      v = ClientRequestError_t::ALREADY_INVITED_E;
      return;
    }
    if(s == "INVALID_MATCHSTATUS_FORGAMEEND"){
      v = ClientRequestError_t::INVALID_MATCHSTATUS_FORGAMEEND_E;
      return;
    }
    if(s == "ALREADY_DECLINE_WITHDRAW"){
      v = ClientRequestError_t::ALREADY_DECLINE_WITHDRAW_E;
      return;
    }
    if(s == "IN_OTHER_PENDINGROSTER"){
      v = ClientRequestError_t::IN_OTHER_PENDINGROSTER_E;
      return;
    }
    if(s == "NO_PERMISSION_CREATE_ROSTER"){
      v = ClientRequestError_t::NO_PERMISSION_CREATE_ROSTER_E;
      return;
    }
    if(s == "MAX_SUB_SIZE"){
      v = ClientRequestError_t::MAX_SUB_SIZE_E;
      return;
    }
    if(s == "NOT_MEMBER"){
      v = ClientRequestError_t::NOT_MEMBER_E;
      return;
    }
    if(s == "WITHDRAW_NOT_ALLOWED"){
      v = ClientRequestError_t::WITHDRAW_NOT_ALLOWED_E;
      return;
    }
  }
  inline std::string to_string(const ClientRequestError_t& v) {
    switch(v) {
      case ClientRequestError_t::NOT_SEED_INTO_LEAGUE_E:
        return "NOT_SEED_INTO_LEAGUE";
      case ClientRequestError_t::ALREADY_SUGGESTED_E:
        return "ALREADY_SUGGESTED";
      case ClientRequestError_t::INVALID_BUY_BACK_E:
        return "INVALID_BUY_BACK";
      case ClientRequestError_t::ROSTER_DISBAND_NOT_ALLOWED_E:
        return "ROSTER_DISBAND_NOT_ALLOWED";
      case ClientRequestError_t::NOT_INVITEE_E:
        return "NOT_INVITEE";
      case ClientRequestError_t::NOT_ALLOWED_DELETE_TOURNAMENT_E:
        return "NOT_ALLOWED_DELETE_TOURNAMENT";
      case ClientRequestError_t::TICKET_NOT_SET_E:
        return "TICKET_NOT_SET";
      case ClientRequestError_t::INVALID_MATCHID_E:
        return "INVALID_MATCHID";
      case ClientRequestError_t::NO_SAME_PLAYER_E:
        return "NO_SAME_PLAYER";
      case ClientRequestError_t::TICKET_OFFER_NOT_EXIST_E:
        return "TICKET_OFFER_NOT_EXIST";
      case ClientRequestError_t::TICKET_ALREADY_SET_E:
        return "TICKET_ALREADY_SET";
      case ClientRequestError_t::INACTIVE_REGISTRATION_E:
        return "INACTIVE_REGISTRATION";
      case ClientRequestError_t::NOT_CAPTAIN_E:
        return "NOT_CAPTAIN";
      case ClientRequestError_t::WITHDRAW_CANCEL_NOT_ALLOWED_E:
        return "WITHDRAW_CANCEL_NOT_ALLOWED";
      case ClientRequestError_t::INACTIVE_PHASE_E:
        return "INACTIVE_PHASE";
      case ClientRequestError_t::INVALID_NAME_E:
        return "INVALID_NAME";
      case ClientRequestError_t::NOT_UNANIMOUS_E:
        return "NOT_UNANIMOUS";
      case ClientRequestError_t::SUGGEST_INVITEE_NOT_EXIST_E:
        return "SUGGEST_INVITEE_NOT_EXIST";
      case ClientRequestError_t::INVALID_TOURNAMENT_E:
        return "INVALID_TOURNAMENT";
      case ClientRequestError_t::INVALID_LOGOCOLOR_E:
        return "INVALID_LOGOCOLOR";
      case ClientRequestError_t::INVALID_PLAYER_E:
        return "INVALID_PLAYER";
      case ClientRequestError_t::ROSTER_NOT_ELIMINATED_E:
        return "ROSTER_NOT_ELIMINATED";
      case ClientRequestError_t::INVALID_ROSTER_MEMBER_SIZE_E:
        return "INVALID_ROSTER_MEMBER_SIZE";
      case ClientRequestError_t::WITHDRAW_LOCKOUT_E:
        return "WITHDRAW_LOCKOUT";
      case ClientRequestError_t::INVALID_CHECKELIGIBILITY_SIZE_E:
        return "INVALID_CHECKELIGIBILITY_SIZE";
      case ClientRequestError_t::ALREADY_VOTE_WITHDRAW_E:
        return "ALREADY_VOTE_WITHDRAW";
      case ClientRequestError_t::INTERNAL_ERROR_E:
        return "INTERNAL_ERROR";
      case ClientRequestError_t::PENDING_ROSTER_FULL_E:
        return "PENDING_ROSTER_FULL";
      case ClientRequestError_t::MAX_SUBED_E:
        return "MAX_SUBED";
      case ClientRequestError_t::LOGOCOLOR_NOT_ALLOWED_E:
        return "LOGOCOLOR_NOT_ALLOWED";
      case ClientRequestError_t::FAIL_SUGGESTINVITE_E:
        return "FAIL_SUGGESTINVITE";
      case ClientRequestError_t::INVALID_INVITEE_E:
        return "INVALID_INVITEE";
      case ClientRequestError_t::INVALID_WITHDRAW_E:
        return "INVALID_WITHDRAW";
      case ClientRequestError_t::MAX_ROSTER_FETCHSIZE_E:
        return "MAX_ROSTER_FETCHSIZE";
      case ClientRequestError_t::CAPTAIN_NOT_ALLOWED_E:
        return "CAPTAIN_NOT_ALLOWED";
      case ClientRequestError_t::PENDING_ROSTER_NOT_READY_E:
        return "PENDING_ROSTER_NOT_READY";
      case ClientRequestError_t::IN_OTHER_PHASE_E:
        return "IN_OTHER_PHASE";
      case ClientRequestError_t::OVER_SUGGESTION_INVITE_E:
        return "OVER_SUGGESTION_INVITE";
      case ClientRequestError_t::NO_AVAILABLE_PHASE_E:
        return "NO_AVAILABLE_PHASE";
      case ClientRequestError_t::IN_OTHER_ROSTER_E:
        return "IN_OTHER_ROSTER";
      case ClientRequestError_t::ALREADY_IN_PHASE_E:
        return "ALREADY_IN_PHASE";
      case ClientRequestError_t::INVALID_ROSTER_E:
        return "INVALID_ROSTER";
      case ClientRequestError_t::TICKET_OFFER_OVER_LIMIT_E:
        return "TICKET_OFFER_OVER_LIMIT";
      case ClientRequestError_t::NO_PERMISSION_REGISTER_ROSTER_E:
        return "NO_PERMISSION_REGISTER_ROSTER";
      case ClientRequestError_t::ALREADY_MEMBER_E:
        return "ALREADY_MEMBER";
      case ClientRequestError_t::PENDING_ROSTER_CLOSE_E:
        return "PENDING_ROSTER_CLOSE";
      case ClientRequestError_t::LOGO_NOT_ALLOWED_E:
        return "LOGO_NOT_ALLOWED";
      case ClientRequestError_t::MAX_INVITED_E:
        return "MAX_INVITED";
      case ClientRequestError_t::INVALID_PHASE_E:
        return "INVALID_PHASE";
      case ClientRequestError_t::INVALID_SHORTNAME_E:
        return "INVALID_SHORTNAME";
      case ClientRequestError_t::ROSTER_ELIMINATED_E:
        return "ROSTER_ELIMINATED";
      case ClientRequestError_t::INVALID_POSITION_E:
        return "INVALID_POSITION";
      case ClientRequestError_t::INVALID_LOGO_E:
        return "INVALID_LOGO";
      case ClientRequestError_t::NOT_ENOUGH_TICKETS_E:
        return "NOT_ENOUGH_TICKETS";
      case ClientRequestError_t::INVALID_SUB_E:
        return "INVALID_SUB";
      case ClientRequestError_t::FAIL_INVITE_E:
        return "FAIL_INVITE";
      case ClientRequestError_t::OVER_INVITE_E:
        return "OVER_INVITE";
      case ClientRequestError_t::INVALID_BRACKET_E:
        return "INVALID_BRACKET";
      case ClientRequestError_t::ALREADY_INVITED_E:
        return "ALREADY_INVITED";
      case ClientRequestError_t::INVALID_MATCHSTATUS_FORGAMEEND_E:
        return "INVALID_MATCHSTATUS_FORGAMEEND";
      case ClientRequestError_t::ALREADY_DECLINE_WITHDRAW_E:
        return "ALREADY_DECLINE_WITHDRAW";
      case ClientRequestError_t::IN_OTHER_PENDINGROSTER_E:
        return "IN_OTHER_PENDINGROSTER";
      case ClientRequestError_t::NO_PERMISSION_CREATE_ROSTER_E:
        return "NO_PERMISSION_CREATE_ROSTER";
      case ClientRequestError_t::MAX_SUB_SIZE_E:
        return "MAX_SUB_SIZE";
      case ClientRequestError_t::NOT_MEMBER_E:
        return "NOT_MEMBER";
      case ClientRequestError_t::WITHDRAW_NOT_ALLOWED_E:
        return "WITHDRAW_NOT_ALLOWED";
    }
  }

}
