#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashRosterNotifyReason_t {
    SUB_DECLINE_E = 22,
    ROSTER_OFFER_TICKET_E = 1,
    SUB_DECLINESUGGEST_E = 26,
    ROSTER_DECLINE_TICKET_E = 3,
    BUYBACK_E = 7,
    SUB_SUGGEST_E = 24,
    SUB_INVITE_E = 20,
    SUB_ACCEPT_E = 21,
    GAME_COMPLETED_E = 15,
    WINNER_ROUND_COMPLETE_E = 31,
    RESTRICTION_AUTO_WIN_E = 11,
    SUB_REVOKE_E = 23,
    PHASE_CHECKIN_E = 14,
    GAME_STARTED_E = 16,
    GAME_STARTED_ERROR_E = 17,
    SUB_RECLAIM_E = 27,
    BYE_AUTO_WIN_E = 8,
    SUB_ACCEPTSUGGEST_E = 25,
    ROSTER_REVOKED_TICKET_E = 4,
    BUYBACK_UNREADY_E = 5,
    PHASE_READY_E = 13,
    VOTE_WITHDRAW_UPDATE_E = 28,
    ROSTER_ACCEPT_TICKET_E = 2,
    WITHDRAW_E = 30,
    ROSTER_SET_TICKET_E = 0,
    BUYBACK_READY_E = 6,
    PHASE_UNREADY_E = 12,
    CHANGE_POSITION_E = 9,
    QUEUE_DODGE_E = 18,
    LOSER_ROUND_COMPLETE_E = 19,
    VOTE_WITHDRAW_DISMISS_E = 29,
    REGISTERED_E = 10,
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterNotifyReason_t& v) {
    switch(v) {
      case LolClashRosterNotifyReason_t::SUB_DECLINE_E:
        j = "SUB_DECLINE";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_OFFER_TICKET_E:
        j = "ROSTER_OFFER_TICKET";
      break;
      case LolClashRosterNotifyReason_t::SUB_DECLINESUGGEST_E:
        j = "SUB_DECLINESUGGEST";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_DECLINE_TICKET_E:
        j = "ROSTER_DECLINE_TICKET";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_E:
        j = "BUYBACK";
      break;
      case LolClashRosterNotifyReason_t::SUB_SUGGEST_E:
        j = "SUB_SUGGEST";
      break;
      case LolClashRosterNotifyReason_t::SUB_INVITE_E:
        j = "SUB_INVITE";
      break;
      case LolClashRosterNotifyReason_t::SUB_ACCEPT_E:
        j = "SUB_ACCEPT";
      break;
      case LolClashRosterNotifyReason_t::GAME_COMPLETED_E:
        j = "GAME_COMPLETED";
      break;
      case LolClashRosterNotifyReason_t::WINNER_ROUND_COMPLETE_E:
        j = "WINNER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason_t::RESTRICTION_AUTO_WIN_E:
        j = "RESTRICTION_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason_t::SUB_REVOKE_E:
        j = "SUB_REVOKE";
      break;
      case LolClashRosterNotifyReason_t::PHASE_CHECKIN_E:
        j = "PHASE_CHECKIN";
      break;
      case LolClashRosterNotifyReason_t::GAME_STARTED_E:
        j = "GAME_STARTED";
      break;
      case LolClashRosterNotifyReason_t::GAME_STARTED_ERROR_E:
        j = "GAME_STARTED_ERROR";
      break;
      case LolClashRosterNotifyReason_t::SUB_RECLAIM_E:
        j = "SUB_RECLAIM";
      break;
      case LolClashRosterNotifyReason_t::BYE_AUTO_WIN_E:
        j = "BYE_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason_t::SUB_ACCEPTSUGGEST_E:
        j = "SUB_ACCEPTSUGGEST";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_REVOKED_TICKET_E:
        j = "ROSTER_REVOKED_TICKET";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_UNREADY_E:
        j = "BUYBACK_UNREADY";
      break;
      case LolClashRosterNotifyReason_t::PHASE_READY_E:
        j = "PHASE_READY";
      break;
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_UPDATE_E:
        j = "VOTE_WITHDRAW_UPDATE";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_ACCEPT_TICKET_E:
        j = "ROSTER_ACCEPT_TICKET";
      break;
      case LolClashRosterNotifyReason_t::WITHDRAW_E:
        j = "WITHDRAW";
      break;
      case LolClashRosterNotifyReason_t::ROSTER_SET_TICKET_E:
        j = "ROSTER_SET_TICKET";
      break;
      case LolClashRosterNotifyReason_t::BUYBACK_READY_E:
        j = "BUYBACK_READY";
      break;
      case LolClashRosterNotifyReason_t::PHASE_UNREADY_E:
        j = "PHASE_UNREADY";
      break;
      case LolClashRosterNotifyReason_t::CHANGE_POSITION_E:
        j = "CHANGE_POSITION";
      break;
      case LolClashRosterNotifyReason_t::QUEUE_DODGE_E:
        j = "QUEUE_DODGE";
      break;
      case LolClashRosterNotifyReason_t::LOSER_ROUND_COMPLETE_E:
        j = "LOSER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason_t::VOTE_WITHDRAW_DISMISS_E:
        j = "VOTE_WITHDRAW_DISMISS";
      break;
      case LolClashRosterNotifyReason_t::REGISTERED_E:
        j = "REGISTERED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterNotifyReason_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUB_DECLINE"){
      v = LolClashRosterNotifyReason_t::SUB_DECLINE_E;
      return;
    }
    if(s == "ROSTER_OFFER_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_OFFER_TICKET_E;
      return;
    }
    if(s == "SUB_DECLINESUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_DECLINESUGGEST_E;
      return;
    }
    if(s == "ROSTER_DECLINE_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_DECLINE_TICKET_E;
      return;
    }
    if(s == "BUYBACK"){
      v = LolClashRosterNotifyReason_t::BUYBACK_E;
      return;
    }
    if(s == "SUB_SUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_SUGGEST_E;
      return;
    }
    if(s == "SUB_INVITE"){
      v = LolClashRosterNotifyReason_t::SUB_INVITE_E;
      return;
    }
    if(s == "SUB_ACCEPT"){
      v = LolClashRosterNotifyReason_t::SUB_ACCEPT_E;
      return;
    }
    if(s == "GAME_COMPLETED"){
      v = LolClashRosterNotifyReason_t::GAME_COMPLETED_E;
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
    if(s == "SUB_REVOKE"){
      v = LolClashRosterNotifyReason_t::SUB_REVOKE_E;
      return;
    }
    if(s == "PHASE_CHECKIN"){
      v = LolClashRosterNotifyReason_t::PHASE_CHECKIN_E;
      return;
    }
    if(s == "GAME_STARTED"){
      v = LolClashRosterNotifyReason_t::GAME_STARTED_E;
      return;
    }
    if(s == "GAME_STARTED_ERROR"){
      v = LolClashRosterNotifyReason_t::GAME_STARTED_ERROR_E;
      return;
    }
    if(s == "SUB_RECLAIM"){
      v = LolClashRosterNotifyReason_t::SUB_RECLAIM_E;
      return;
    }
    if(s == "BYE_AUTO_WIN"){
      v = LolClashRosterNotifyReason_t::BYE_AUTO_WIN_E;
      return;
    }
    if(s == "SUB_ACCEPTSUGGEST"){
      v = LolClashRosterNotifyReason_t::SUB_ACCEPTSUGGEST_E;
      return;
    }
    if(s == "ROSTER_REVOKED_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_REVOKED_TICKET_E;
      return;
    }
    if(s == "BUYBACK_UNREADY"){
      v = LolClashRosterNotifyReason_t::BUYBACK_UNREADY_E;
      return;
    }
    if(s == "PHASE_READY"){
      v = LolClashRosterNotifyReason_t::PHASE_READY_E;
      return;
    }
    if(s == "VOTE_WITHDRAW_UPDATE"){
      v = LolClashRosterNotifyReason_t::VOTE_WITHDRAW_UPDATE_E;
      return;
    }
    if(s == "ROSTER_ACCEPT_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_ACCEPT_TICKET_E;
      return;
    }
    if(s == "WITHDRAW"){
      v = LolClashRosterNotifyReason_t::WITHDRAW_E;
      return;
    }
    if(s == "ROSTER_SET_TICKET"){
      v = LolClashRosterNotifyReason_t::ROSTER_SET_TICKET_E;
      return;
    }
    if(s == "BUYBACK_READY"){
      v = LolClashRosterNotifyReason_t::BUYBACK_READY_E;
      return;
    }
    if(s == "PHASE_UNREADY"){
      v = LolClashRosterNotifyReason_t::PHASE_UNREADY_E;
      return;
    }
    if(s == "CHANGE_POSITION"){
      v = LolClashRosterNotifyReason_t::CHANGE_POSITION_E;
      return;
    }
    if(s == "QUEUE_DODGE"){
      v = LolClashRosterNotifyReason_t::QUEUE_DODGE_E;
      return;
    }
    if(s == "LOSER_ROUND_COMPLETE"){
      v = LolClashRosterNotifyReason_t::LOSER_ROUND_COMPLETE_E;
      return;
    }
    if(s == "VOTE_WITHDRAW_DISMISS"){
      v = LolClashRosterNotifyReason_t::VOTE_WITHDRAW_DISMISS_E;
      return;
    }
    if(s == "REGISTERED"){
      v = LolClashRosterNotifyReason_t::REGISTERED_E;
      return;
    }
  }
}
