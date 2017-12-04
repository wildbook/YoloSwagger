#ifndef SWAGGER_TYPES_LolClashRosterNotifyReason_HPP
#define SWAGGER_TYPES_LolClashRosterNotifyReason_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashRosterNotifyReason {
    // 
    BUYBACK = 7,
    // 
    BUYBACK_READY = 6,
    // 
    BUYBACK_UNREADY = 5,
    // 
    BYE_AUTO_WIN = 8,
    // 
    CHANGE_POSITION = 9,
    // 
    GAME_COMPLETED = 15,
    // 
    GAME_STARTED = 16,
    // 
    GAME_STARTED_ERROR = 17,
    // 
    LOSER_ROUND_COMPLETE = 19,
    // 
    PHASE_CHECKIN = 14,
    // 
    PHASE_READY = 13,
    // 
    PHASE_UNREADY = 12,
    // 
    QUEUE_DODGE = 18,
    // 
    REGISTERED = 10,
    // 
    RESTRICTION_AUTO_WIN = 11,
    // 
    ROSTER_ACCEPT_TICKET = 2,
    // 
    ROSTER_DECLINE_TICKET = 3,
    // 
    ROSTER_OFFER_TICKET = 1,
    // 
    ROSTER_REVOKED_TICKET = 4,
    // 
    ROSTER_SET_TICKET = 0,
    // 
    SUB_ACCEPT = 21,
    // 
    SUB_ACCEPTSUGGEST = 25,
    // 
    SUB_DECLINE = 22,
    // 
    SUB_DECLINESUGGEST = 26,
    // 
    SUB_INVITE = 20,
    // 
    SUB_RECLAIM = 27,
    // 
    SUB_REVOKE = 23,
    // 
    SUB_SUGGEST = 24,
    // 
    VOTE_WITHDRAW_DISMISS = 29,
    // 
    VOTE_WITHDRAW_UPDATE = 28,
    // 
    WINNER_ROUND_COMPLETE = 31,
    // 
    WITHDRAW = 30,
  };

  inline void to_json(nlohmann::json& j, const LolClashRosterNotifyReason& v) {
    switch(v) {
      case LolClashRosterNotifyReason::BUYBACK:
        j = "BUYBACK";
      break;
      case LolClashRosterNotifyReason::BUYBACK_READY:
        j = "BUYBACK_READY";
      break;
      case LolClashRosterNotifyReason::BUYBACK_UNREADY:
        j = "BUYBACK_UNREADY";
      break;
      case LolClashRosterNotifyReason::BYE_AUTO_WIN:
        j = "BYE_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason::CHANGE_POSITION:
        j = "CHANGE_POSITION";
      break;
      case LolClashRosterNotifyReason::GAME_COMPLETED:
        j = "GAME_COMPLETED";
      break;
      case LolClashRosterNotifyReason::GAME_STARTED:
        j = "GAME_STARTED";
      break;
      case LolClashRosterNotifyReason::GAME_STARTED_ERROR:
        j = "GAME_STARTED_ERROR";
      break;
      case LolClashRosterNotifyReason::LOSER_ROUND_COMPLETE:
        j = "LOSER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason::PHASE_CHECKIN:
        j = "PHASE_CHECKIN";
      break;
      case LolClashRosterNotifyReason::PHASE_READY:
        j = "PHASE_READY";
      break;
      case LolClashRosterNotifyReason::PHASE_UNREADY:
        j = "PHASE_UNREADY";
      break;
      case LolClashRosterNotifyReason::QUEUE_DODGE:
        j = "QUEUE_DODGE";
      break;
      case LolClashRosterNotifyReason::REGISTERED:
        j = "REGISTERED";
      break;
      case LolClashRosterNotifyReason::RESTRICTION_AUTO_WIN:
        j = "RESTRICTION_AUTO_WIN";
      break;
      case LolClashRosterNotifyReason::ROSTER_ACCEPT_TICKET:
        j = "ROSTER_ACCEPT_TICKET";
      break;
      case LolClashRosterNotifyReason::ROSTER_DECLINE_TICKET:
        j = "ROSTER_DECLINE_TICKET";
      break;
      case LolClashRosterNotifyReason::ROSTER_OFFER_TICKET:
        j = "ROSTER_OFFER_TICKET";
      break;
      case LolClashRosterNotifyReason::ROSTER_REVOKED_TICKET:
        j = "ROSTER_REVOKED_TICKET";
      break;
      case LolClashRosterNotifyReason::ROSTER_SET_TICKET:
        j = "ROSTER_SET_TICKET";
      break;
      case LolClashRosterNotifyReason::SUB_ACCEPT:
        j = "SUB_ACCEPT";
      break;
      case LolClashRosterNotifyReason::SUB_ACCEPTSUGGEST:
        j = "SUB_ACCEPTSUGGEST";
      break;
      case LolClashRosterNotifyReason::SUB_DECLINE:
        j = "SUB_DECLINE";
      break;
      case LolClashRosterNotifyReason::SUB_DECLINESUGGEST:
        j = "SUB_DECLINESUGGEST";
      break;
      case LolClashRosterNotifyReason::SUB_INVITE:
        j = "SUB_INVITE";
      break;
      case LolClashRosterNotifyReason::SUB_RECLAIM:
        j = "SUB_RECLAIM";
      break;
      case LolClashRosterNotifyReason::SUB_REVOKE:
        j = "SUB_REVOKE";
      break;
      case LolClashRosterNotifyReason::SUB_SUGGEST:
        j = "SUB_SUGGEST";
      break;
      case LolClashRosterNotifyReason::VOTE_WITHDRAW_DISMISS:
        j = "VOTE_WITHDRAW_DISMISS";
      break;
      case LolClashRosterNotifyReason::VOTE_WITHDRAW_UPDATE:
        j = "VOTE_WITHDRAW_UPDATE";
      break;
      case LolClashRosterNotifyReason::WINNER_ROUND_COMPLETE:
        j = "WINNER_ROUND_COMPLETE";
      break;
      case LolClashRosterNotifyReason::WITHDRAW:
        j = "WITHDRAW";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashRosterNotifyReason& v) {
    const auto s& = j.get<std::string>();
    if(s == "BUYBACK"){
      v = LolClashRosterNotifyReason::BUYBACK;
      return;
    }
    if(s == "BUYBACK_READY"){
      v = LolClashRosterNotifyReason::BUYBACK_READY;
      return;
    }
    if(s == "BUYBACK_UNREADY"){
      v = LolClashRosterNotifyReason::BUYBACK_UNREADY;
      return;
    }
    if(s == "BYE_AUTO_WIN"){
      v = LolClashRosterNotifyReason::BYE_AUTO_WIN;
      return;
    }
    if(s == "CHANGE_POSITION"){
      v = LolClashRosterNotifyReason::CHANGE_POSITION;
      return;
    }
    if(s == "GAME_COMPLETED"){
      v = LolClashRosterNotifyReason::GAME_COMPLETED;
      return;
    }
    if(s == "GAME_STARTED"){
      v = LolClashRosterNotifyReason::GAME_STARTED;
      return;
    }
    if(s == "GAME_STARTED_ERROR"){
      v = LolClashRosterNotifyReason::GAME_STARTED_ERROR;
      return;
    }
    if(s == "LOSER_ROUND_COMPLETE"){
      v = LolClashRosterNotifyReason::LOSER_ROUND_COMPLETE;
      return;
    }
    if(s == "PHASE_CHECKIN"){
      v = LolClashRosterNotifyReason::PHASE_CHECKIN;
      return;
    }
    if(s == "PHASE_READY"){
      v = LolClashRosterNotifyReason::PHASE_READY;
      return;
    }
    if(s == "PHASE_UNREADY"){
      v = LolClashRosterNotifyReason::PHASE_UNREADY;
      return;
    }
    if(s == "QUEUE_DODGE"){
      v = LolClashRosterNotifyReason::QUEUE_DODGE;
      return;
    }
    if(s == "REGISTERED"){
      v = LolClashRosterNotifyReason::REGISTERED;
      return;
    }
    if(s == "RESTRICTION_AUTO_WIN"){
      v = LolClashRosterNotifyReason::RESTRICTION_AUTO_WIN;
      return;
    }
    if(s == "ROSTER_ACCEPT_TICKET"){
      v = LolClashRosterNotifyReason::ROSTER_ACCEPT_TICKET;
      return;
    }
    if(s == "ROSTER_DECLINE_TICKET"){
      v = LolClashRosterNotifyReason::ROSTER_DECLINE_TICKET;
      return;
    }
    if(s == "ROSTER_OFFER_TICKET"){
      v = LolClashRosterNotifyReason::ROSTER_OFFER_TICKET;
      return;
    }
    if(s == "ROSTER_REVOKED_TICKET"){
      v = LolClashRosterNotifyReason::ROSTER_REVOKED_TICKET;
      return;
    }
    if(s == "ROSTER_SET_TICKET"){
      v = LolClashRosterNotifyReason::ROSTER_SET_TICKET;
      return;
    }
    if(s == "SUB_ACCEPT"){
      v = LolClashRosterNotifyReason::SUB_ACCEPT;
      return;
    }
    if(s == "SUB_ACCEPTSUGGEST"){
      v = LolClashRosterNotifyReason::SUB_ACCEPTSUGGEST;
      return;
    }
    if(s == "SUB_DECLINE"){
      v = LolClashRosterNotifyReason::SUB_DECLINE;
      return;
    }
    if(s == "SUB_DECLINESUGGEST"){
      v = LolClashRosterNotifyReason::SUB_DECLINESUGGEST;
      return;
    }
    if(s == "SUB_INVITE"){
      v = LolClashRosterNotifyReason::SUB_INVITE;
      return;
    }
    if(s == "SUB_RECLAIM"){
      v = LolClashRosterNotifyReason::SUB_RECLAIM;
      return;
    }
    if(s == "SUB_REVOKE"){
      v = LolClashRosterNotifyReason::SUB_REVOKE;
      return;
    }
    if(s == "SUB_SUGGEST"){
      v = LolClashRosterNotifyReason::SUB_SUGGEST;
      return;
    }
    if(s == "VOTE_WITHDRAW_DISMISS"){
      v = LolClashRosterNotifyReason::VOTE_WITHDRAW_DISMISS;
      return;
    }
    if(s == "VOTE_WITHDRAW_UPDATE"){
      v = LolClashRosterNotifyReason::VOTE_WITHDRAW_UPDATE;
      return;
    }
    if(s == "WINNER_ROUND_COMPLETE"){
      v = LolClashRosterNotifyReason::WINNER_ROUND_COMPLETE;
      return;
    }
    if(s == "WITHDRAW"){
      v = LolClashRosterNotifyReason::WITHDRAW;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashRosterNotifyReason_HPP
