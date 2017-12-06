using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashRosterNotifyReason {
    [DataMember(Name = "BUYBACK")]
    BUYBACK = 7,

    [DataMember(Name = "BUYBACK_READY")]
    BUYBACK_READY = 6,

    [DataMember(Name = "BUYBACK_UNREADY")]
    BUYBACK_UNREADY = 5,

    [DataMember(Name = "BYE_AUTO_WIN")]
    BYE_AUTO_WIN = 8,

    [DataMember(Name = "CHANGE_POSITION")]
    CHANGE_POSITION = 9,

    [DataMember(Name = "GAME_COMPLETED")]
    GAME_COMPLETED = 15,

    [DataMember(Name = "GAME_STARTED")]
    GAME_STARTED = 16,

    [DataMember(Name = "GAME_STARTED_ERROR")]
    GAME_STARTED_ERROR = 17,

    [DataMember(Name = "LOSER_ROUND_COMPLETE")]
    LOSER_ROUND_COMPLETE = 19,

    [DataMember(Name = "PHASE_CHECKIN")]
    PHASE_CHECKIN = 14,

    [DataMember(Name = "PHASE_READY")]
    PHASE_READY = 13,

    [DataMember(Name = "PHASE_UNREADY")]
    PHASE_UNREADY = 12,

    [DataMember(Name = "QUEUE_DODGE")]
    QUEUE_DODGE = 18,

    [DataMember(Name = "REGISTERED")]
    REGISTERED = 10,

    [DataMember(Name = "RESTRICTION_AUTO_WIN")]
    RESTRICTION_AUTO_WIN = 11,

    [DataMember(Name = "ROSTER_ACCEPT_TICKET")]
    ROSTER_ACCEPT_TICKET = 2,

    [DataMember(Name = "ROSTER_DECLINE_TICKET")]
    ROSTER_DECLINE_TICKET = 3,

    [DataMember(Name = "ROSTER_OFFER_TICKET")]
    ROSTER_OFFER_TICKET = 1,

    [DataMember(Name = "ROSTER_REVOKED_TICKET")]
    ROSTER_REVOKED_TICKET = 4,

    [DataMember(Name = "ROSTER_SET_TICKET")]
    ROSTER_SET_TICKET = 0,

    [DataMember(Name = "SUB_ACCEPT")]
    SUB_ACCEPT = 21,

    [DataMember(Name = "SUB_ACCEPTSUGGEST")]
    SUB_ACCEPTSUGGEST = 25,

    [DataMember(Name = "SUB_DECLINE")]
    SUB_DECLINE = 22,

    [DataMember(Name = "SUB_DECLINESUGGEST")]
    SUB_DECLINESUGGEST = 26,

    [DataMember(Name = "SUB_INVITE")]
    SUB_INVITE = 20,

    [DataMember(Name = "SUB_RECLAIM")]
    SUB_RECLAIM = 27,

    [DataMember(Name = "SUB_REVOKE")]
    SUB_REVOKE = 23,

    [DataMember(Name = "SUB_SUGGEST")]
    SUB_SUGGEST = 24,

    [DataMember(Name = "VOTE_WITHDRAW_DISMISS")]
    VOTE_WITHDRAW_DISMISS = 29,

    [DataMember(Name = "VOTE_WITHDRAW_UPDATE")]
    VOTE_WITHDRAW_UPDATE = 28,

    [DataMember(Name = "WINNER_ROUND_COMPLETE")]
    WINNER_ROUND_COMPLETE = 31,

    [DataMember(Name = "WITHDRAW")]
    WITHDRAW = 30,

  }
}