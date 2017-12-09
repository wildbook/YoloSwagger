#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashRosterNotifyReason_t {
    ROSTER_REVOKED_TICKET_E = 4,
    SUB_INVITE_E = 20,
    VOTE_WITHDRAW_UPDATE_E = 28,
    BUYBACK_UNREADY_E = 5,
    VOTE_WITHDRAW_DISMISS_E = 29,
    SUB_DECLINESUGGEST_E = 26,
    PHASE_READY_E = 13,
    WITHDRAW_E = 30,
    ROSTER_ACCEPT_TICKET_E = 2,
    BUYBACK_E = 7,
    GAME_STARTED_ERROR_E = 17,
    ROSTER_DECLINE_TICKET_E = 3,
    BYE_AUTO_WIN_E = 8,
    LOSER_ROUND_COMPLETE_E = 19,
    GAME_COMPLETED_E = 15,
    SUB_SUGGEST_E = 24,
    WINNER_ROUND_COMPLETE_E = 31,
    RESTRICTION_AUTO_WIN_E = 11,
    GAME_STARTED_E = 16,
    CHANGE_POSITION_E = 9,
    ROSTER_OFFER_TICKET_E = 1,
    ROSTER_SET_TICKET_E = 0,
    PHASE_CHECKIN_E = 14,
    REGISTERED_E = 10,
    SUB_DECLINE_E = 22,
    SUB_ACCEPTSUGGEST_E = 25,
    SUB_REVOKE_E = 23,
    SUB_RECLAIM_E = 27,
    BUYBACK_READY_E = 6,
    SUB_ACCEPT_E = 21,
    QUEUE_DODGE_E = 18,
    PHASE_UNREADY_E = 12,
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterNotifyReason_t& v) {
    switch(v) {
      case LolClashRosterNotifyReason_t::ROSTER_REVOKED_TICKET_E:
        j = "ROSTER_REVOKED_TICKET";
      break;
      case LolClashRosterNotifyReason_t::SUB_INVITE_E:
        j = "SUB_INVITE";
      break;
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_UPDATE_E:
        j = "VOTE_WITHDRAW_UPDATE";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_UNREADY_E:
        j = "BUYBACK_UNREADY";
      break;
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_DISMISS_E:
        j = "VOTE_WITHDRAW_DISMISS";
      break;
      case LolClashRosterNotifyReason_t::SUB_DECLINESUGGEST_E:
        j = "SUB_DECLINESUGGEST";
      break;
      case LolClashRosterNotifyReason_t::PHASE_READY_E:
        j = "PHASE_READY";
      break;
      case LolClashRosterNotifyReason_t::WITHDRAW_E:
        j = "WITHDRAW";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_ACCEPT_TICKET_E:
        j = "ROSTER_ACCEPT_TICKET";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_E:
        j = "BUYBACK";
      break;
      case LolClashRosterNotifyReason_t::GAME_STARTED_ERROR_E:
        j = "GAME_STARTED_ERROR";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_DECLINE_TICKET_E:
        j = "ROSTER_DECLINE_TICKET";
      break;
      case LolClashRosterNotifyReason_t::BYE_AUTO_WIN_E:
        j = "BYE_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason_t::LOSER_ROUND_COMPLETE_E:
        j = "LOSER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason_t::GAME_COMPLETED_E:
        j = "GAME_COMPLETED";
      break;
      case LolClashRosterNotifyReason_t::SUB_SUGGEST_E:
        j = "SUB_SUGGEST";
      break;
      case LolClashRosterNotifyReason_t::WINNER_ROUND_COMPLETE_E:
        j = "WINNER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason_t::RESTRICTION_AUTO_WIN_E:
        j = "RESTRICTION_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason_t::GAME_STARTED_E:
        j = "GAME_STARTED";
      break;
      case LolClashRosterNotifyReason_t::CHANGE_POSITION_E:
        j = "CHANGE_POSITION";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_OFFER_TICKET_E:
        j = "ROSTER_OFFER_TICKET";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_SET_TICKET_E:
        j = "ROSTER_SET_TICKET";
      break;
      case LolClashRosterNotifyReason_t::PHASE_CHECKIN_E:
        j = "PHASE_CHECKIN";
      break;
      case LolClashRosterNotifyReason_t::REGISTERED_E:
        j = "REGISTERED";
      break;
      case LolClashRosterNotifyReason_t::SUB_DECLINE_E:
        j = "SUB_DECLINE";
      break;
      case LolClashRosterNotifyReason_t::SUB_ACCEPTSUGGEST_E:
        j = "SUB_ACCEPTSUGGEST";
      break;
      case LolClashRosterNotifyReason_t::SUB_REVOKE_E:
        j = "SUB_REVOKE";
      break;
      case LolClashRosterNotifyReason_t::SUB_RECLAIM_E:
        j = "SUB_RECLAIM";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_READY_E:
        j = "BUYBACK_READY";
      break;
      case LolClashRosterNotifyReason_t::SUB_ACCEPT_E:
        j = "SUB_ACCEPT";
      break;
      case LolClashRosterNotifyReason_t::QUEUE_DODGE_E:
        j = "QUEUE_DODGE";
      break;
      case LolClashRosterNotifyReason_t::PHASE_UNREADY_E:
        j = "PHASE_UNREADY";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterNotifyReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ROSTER_REVOKED_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_REVOKED_TICKET_E;
      return;
    }
    if(s == "SUB_INVITE"){
      v = LolClashRosterNotifyReason_t::SUB_INVITE_E;
      return;
    }
    if(s == "VOTE_WITHDRAW_UPDATE"){
      v = LolClashRosterNotifyReason_t::VOTE_WITHDRAW_UPDATE_E;
      return;
    }
    if(s == "BUYBACK_UNREADY"){
      v = LolClashRosterNotifyReason_t::BUYBACK_UNREADY_E;
      return;
    }
    if(s == "VOTE_WITHDRAW_DISMISS"){
      v = LolClashRosterNotifyReason_t::VOTE_WITHDRAW_DISMISS_E;
      return;
    }
    if(s == "SUB_DECLINESUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_DECLINESUGGEST_E;
      return;
    }
    if(s == "PHASE_READY"){
      v = LolClashRosterNotifyReason_t::PHASE_READY_E;
      return;
    }
    if(s == "WITHDRAW"){
      v = LolClashRosterNotifyReason_t::WITHDRAW_E;
      return;
    }
    if(s == "ROSTER_ACCEPT_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_ACCEPT_TICKET_E;
      return;
    }
    if(s == "BUYBACK"){
      v = LolClashRosterNotifyReason_t::BUYBACK_E;
      return;
    }
    if(s == "GAME_STARTED_ERROR"){
      v = LolClashRosterNotifyReason_t::GAME_STARTED_ERROR_E;
      return;
    }
    if(s == "ROSTER_DECLINE_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_DECLINE_TICKET_E;
      return;
    }
    if(s == "BYE_AUTO_WIN"){
      v = LolClashRosterNotifyReason_t::BYE_AUTO_WIN_E;
      return;
    }
    if(s == "LOSER_ROUND_COMPLETE"){
      v = LolClashRosterNotifyReason_t::LOSER_ROUND_COMPLETE_E;
      return;
    }
    if(s == "GAME_COMPLETED"){
      v = LolClashRosterNotifyReason_t::GAME_COMPLETED_E;
      return;
    }
    if(s == "SUB_SUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_SUGGEST_E;
      return;
    }
    if(s == "WINNER_ROUND_COMPLETE"){
      v = LolClashRosterNotifyReason_t::WINNER_ROUND_COMPLETE_E;
      return;
    }
    if(s == "RESTRICTION_AUTO_WIN"){
      v = LolClashRosterNotifyReason_t::RESTRICTION_AUTO_WIN_E;
      return;
    }
    if(s == "GAME_STARTED"){
      v = LolClashRosterNotifyReason_t::GAME_STARTED_E;
      return;
    }
    if(s == "CHANGE_POSITION"){
      v = LolClashRosterNotifyReason_t::CHANGE_POSITION_E;
      return;
    }
    if(s == "ROSTER_OFFER_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_OFFER_TICKET_E;
      return;
    }
    if(s == "ROSTER_SET_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_SET_TICKET_E;
      return;
    }
    if(s == "PHASE_CHECKIN"){
      v = LolClashRosterNotifyReason_t::PHASE_CHECKIN_E;
      return;
    }
    if(s == "REGISTERED"){
      v = LolClashRosterNotifyReason_t::REGISTERED_E;
      return;
    }
    if(s == "SUB_DECLINE"){
      v = LolClashRosterNotifyReason_t::SUB_DECLINE_E;
      return;
    }
    if(s == "SUB_ACCEPTSUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_ACCEPTSUGGEST_E;
      return;
    }
    if(s == "SUB_REVOKE"){
      v = LolClashRosterNotifyReason_t::SUB_REVOKE_E;
      return;
    }
    if(s == "SUB_RECLAIM"){
      v = LolClashRosterNotifyReason_t::SUB_RECLAIM_E;
      return;
    }
    if(s == "BUYBACK_READY"){
      v = LolClashRosterNotifyReason_t::BUYBACK_READY_E;
      return;
    }
    if(s == "SUB_ACCEPT"){
      v = LolClashRosterNotifyReason_t::SUB_ACCEPT_E;
      return;
    }
    if(s == "QUEUE_DODGE"){
      v = LolClashRosterNotifyReason_t::QUEUE_DODGE_E;
      return;
    }
    if(s == "PHASE_UNREADY"){
      v = LolClashRosterNotifyReason_t::PHASE_UNREADY_E;
      return;
    }
  }
  inline std::string to_string(const LolClashRosterNotifyReason_t& v) {
    switch(v) {
      case LolClashRosterNotifyReason_t::ROSTER_REVOKED_TICKET_E:
        return "ROSTER_REVOKED_TICKET";
      case LolClashRosterNotifyReason_t::SUB_INVITE_E:
        return "SUB_INVITE";
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_UPDATE_E:
        return "VOTE_WITHDRAW_UPDATE";
      case LolClashRosterNotifyReason_t::BUYBACK_UNREADY_E:
        return "BUYBACK_UNREADY";
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_DISMISS_E:
        return "VOTE_WITHDRAW_DISMISS";
      case LolClashRosterNotifyReason_t::SUB_DECLINESUGGEST_E:
        return "SUB_DECLINESUGGEST";
      case LolClashRosterNotifyReason_t::PHASE_READY_E:
        return "PHASE_READY";
      case LolClashRosterNotifyReason_t::WITHDRAW_E:
        return "WITHDRAW";
      case LolClashRosterNotifyReason_t::ROSTER_ACCEPT_TICKET_E:
        return "ROSTER_ACCEPT_TICKET";
      case LolClashRosterNotifyReason_t::BUYBACK_E:
        return "BUYBACK";
      case LolClashRosterNotifyReason_t::GAME_STARTED_ERROR_E:
        return "GAME_STARTED_ERROR";
      case LolClashRosterNotifyReason_t::ROSTER_DECLINE_TICKET_E:
        return "ROSTER_DECLINE_TICKET";
      case LolClashRosterNotifyReason_t::BYE_AUTO_WIN_E:
        return "BYE_AUTO_WIN";
      case LolClashRosterNotifyReason_t::LOSER_ROUND_COMPLETE_E:
        return "LOSER_ROUND_COMPLETE";
      case LolClashRosterNotifyReason_t::GAME_COMPLETED_E:
        return "GAME_COMPLETED";
      case LolClashRosterNotifyReason_t::SUB_SUGGEST_E:
        return "SUB_SUGGEST";
      case LolClashRosterNotifyReason_t::WINNER_ROUND_COMPLETE_E:
        return "WINNER_ROUND_COMPLETE";
      case LolClashRosterNotifyReason_t::RESTRICTION_AUTO_WIN_E:
        return "RESTRICTION_AUTO_WIN";
      case LolClashRosterNotifyReason_t::GAME_STARTED_E:
        return "GAME_STARTED";
      case LolClashRosterNotifyReason_t::CHANGE_POSITION_E:
        return "CHANGE_POSITION";
      case LolClashRosterNotifyReason_t::ROSTER_OFFER_TICKET_E:
        return "ROSTER_OFFER_TICKET";
      case LolClashRosterNotifyReason_t::ROSTER_SET_TICKET_E:
        return "ROSTER_SET_TICKET";
      case LolClashRosterNotifyReason_t::PHASE_CHECKIN_E:
        return "PHASE_CHECKIN";
      case LolClashRosterNotifyReason_t::REGISTERED_E:
        return "REGISTERED";
      case LolClashRosterNotifyReason_t::SUB_DECLINE_E:
        return "SUB_DECLINE";
      case LolClashRosterNotifyReason_t::SUB_ACCEPTSUGGEST_E:
        return "SUB_ACCEPTSUGGEST";
      case LolClashRosterNotifyReason_t::SUB_REVOKE_E:
        return "SUB_REVOKE";
      case LolClashRosterNotifyReason_t::SUB_RECLAIM_E:
        return "SUB_RECLAIM";
      case LolClashRosterNotifyReason_t::BUYBACK_READY_E:
        return "BUYBACK_READY";
      case LolClashRosterNotifyReason_t::SUB_ACCEPT_E:
        return "SUB_ACCEPT";
      case LolClashRosterNotifyReason_t::QUEUE_DODGE_E:
        return "QUEUE_DODGE";
      case LolClashRosterNotifyReason_t::PHASE_UNREADY_E:
        return "PHASE_UNREADY";
    }
  }

}
