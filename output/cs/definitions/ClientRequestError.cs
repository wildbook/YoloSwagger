using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum ClientRequestError {
    [DataMember(Name = "ALREADY_DECLINE_WITHDRAW")]
    ALREADY_DECLINE_WITHDRAW = 3,

    [DataMember(Name = "ALREADY_INVITED")]
    ALREADY_INVITED = 1,

    [DataMember(Name = "ALREADY_IN_PHASE")]
    ALREADY_IN_PHASE = 5,

    [DataMember(Name = "ALREADY_MEMBER")]
    ALREADY_MEMBER = 0,

    [DataMember(Name = "ALREADY_SUGGESTED")]
    ALREADY_SUGGESTED = 2,

    [DataMember(Name = "ALREADY_VOTE_WITHDRAW")]
    ALREADY_VOTE_WITHDRAW = 4,

    [DataMember(Name = "CAPTAIN_NOT_ALLOWED")]
    CAPTAIN_NOT_ALLOWED = 6,

    [DataMember(Name = "FAIL_INVITE")]
    FAIL_INVITE = 7,

    [DataMember(Name = "FAIL_SUGGESTINVITE")]
    FAIL_SUGGESTINVITE = 8,

    [DataMember(Name = "INACTIVE_PHASE")]
    INACTIVE_PHASE = 15,

    [DataMember(Name = "INACTIVE_REGISTRATION")]
    INACTIVE_REGISTRATION = 14,

    [DataMember(Name = "INTERNAL_ERROR")]
    INTERNAL_ERROR = 16,

    [DataMember(Name = "INVALID_BRACKET")]
    INVALID_BRACKET = 30,

    [DataMember(Name = "INVALID_BUY_BACK")]
    INVALID_BUY_BACK = 18,

    [DataMember(Name = "INVALID_CHECKELIGIBILITY_SIZE")]
    INVALID_CHECKELIGIBILITY_SIZE = 29,

    [DataMember(Name = "INVALID_INVITEE")]
    INVALID_INVITEE = 22,

    [DataMember(Name = "INVALID_LOGO")]
    INVALID_LOGO = 25,

    [DataMember(Name = "INVALID_LOGOCOLOR")]
    INVALID_LOGOCOLOR = 26,

    [DataMember(Name = "INVALID_MATCHID")]
    INVALID_MATCHID = 31,

    [DataMember(Name = "INVALID_MATCHSTATUS_FORGAMEEND")]
    INVALID_MATCHSTATUS_FORGAMEEND = 34,

    [DataMember(Name = "INVALID_NAME")]
    INVALID_NAME = 27,

    [DataMember(Name = "INVALID_PHASE")]
    INVALID_PHASE = 21,

    [DataMember(Name = "INVALID_PLAYER")]
    INVALID_PLAYER = 32,

    [DataMember(Name = "INVALID_POSITION")]
    INVALID_POSITION = 24,

    [DataMember(Name = "INVALID_ROSTER")]
    INVALID_ROSTER = 17,

    [DataMember(Name = "INVALID_ROSTER_MEMBER_SIZE")]
    INVALID_ROSTER_MEMBER_SIZE = 23,

    [DataMember(Name = "INVALID_SHORTNAME")]
    INVALID_SHORTNAME = 28,

    [DataMember(Name = "INVALID_SUB")]
    INVALID_SUB = 19,

    [DataMember(Name = "INVALID_TOURNAMENT")]
    INVALID_TOURNAMENT = 20,

    [DataMember(Name = "INVALID_WITHDRAW")]
    INVALID_WITHDRAW = 33,

    [DataMember(Name = "IN_OTHER_PENDINGROSTER")]
    IN_OTHER_PENDINGROSTER = 12,

    [DataMember(Name = "IN_OTHER_PHASE")]
    IN_OTHER_PHASE = 13,

    [DataMember(Name = "IN_OTHER_ROSTER")]
    IN_OTHER_ROSTER = 11,

    [DataMember(Name = "LOGOCOLOR_NOT_ALLOWED")]
    LOGOCOLOR_NOT_ALLOWED = 10,

    [DataMember(Name = "LOGO_NOT_ALLOWED")]
    LOGO_NOT_ALLOWED = 9,

    [DataMember(Name = "MAX_INVITED")]
    MAX_INVITED = 35,

    [DataMember(Name = "MAX_ROSTER_FETCHSIZE")]
    MAX_ROSTER_FETCHSIZE = 37,

    [DataMember(Name = "MAX_SUBED")]
    MAX_SUBED = 36,

    [DataMember(Name = "MAX_SUB_SIZE")]
    MAX_SUB_SIZE = 38,

    [DataMember(Name = "NOT_ALLOWED_DELETE_TOURNAMENT")]
    NOT_ALLOWED_DELETE_TOURNAMENT = 49,

    [DataMember(Name = "NOT_CAPTAIN")]
    NOT_CAPTAIN = 43,

    [DataMember(Name = "NOT_ENOUGH_TICKETS")]
    NOT_ENOUGH_TICKETS = 48,

    [DataMember(Name = "NOT_INVITEE")]
    NOT_INVITEE = 45,

    [DataMember(Name = "NOT_MEMBER")]
    NOT_MEMBER = 44,

    [DataMember(Name = "NOT_SEED_INTO_LEAGUE")]
    NOT_SEED_INTO_LEAGUE = 46,

    [DataMember(Name = "NOT_UNANIMOUS")]
    NOT_UNANIMOUS = 47,

    [DataMember(Name = "NO_AVAILABLE_PHASE")]
    NO_AVAILABLE_PHASE = 42,

    [DataMember(Name = "NO_PERMISSION_CREATE_ROSTER")]
    NO_PERMISSION_CREATE_ROSTER = 40,

    [DataMember(Name = "NO_PERMISSION_REGISTER_ROSTER")]
    NO_PERMISSION_REGISTER_ROSTER = 41,

    [DataMember(Name = "NO_SAME_PLAYER")]
    NO_SAME_PLAYER = 39,

    [DataMember(Name = "OVER_INVITE")]
    OVER_INVITE = 51,

    [DataMember(Name = "OVER_SUGGESTION_INVITE")]
    OVER_SUGGESTION_INVITE = 50,

    [DataMember(Name = "PENDING_ROSTER_CLOSE")]
    PENDING_ROSTER_CLOSE = 54,

    [DataMember(Name = "PENDING_ROSTER_FULL")]
    PENDING_ROSTER_FULL = 53,

    [DataMember(Name = "PENDING_ROSTER_NOT_READY")]
    PENDING_ROSTER_NOT_READY = 52,

    [DataMember(Name = "ROSTER_DISBAND_NOT_ALLOWED")]
    ROSTER_DISBAND_NOT_ALLOWED = 57,

    [DataMember(Name = "ROSTER_ELIMINATED")]
    ROSTER_ELIMINATED = 55,

    [DataMember(Name = "ROSTER_NOT_ELIMINATED")]
    ROSTER_NOT_ELIMINATED = 56,

    [DataMember(Name = "SUGGEST_INVITEE_NOT_EXIST")]
    SUGGEST_INVITEE_NOT_EXIST = 58,

    [DataMember(Name = "TICKET_ALREADY_SET")]
    TICKET_ALREADY_SET = 59,

    [DataMember(Name = "TICKET_NOT_SET")]
    TICKET_NOT_SET = 62,

    [DataMember(Name = "TICKET_OFFER_NOT_EXIST")]
    TICKET_OFFER_NOT_EXIST = 60,

    [DataMember(Name = "TICKET_OFFER_OVER_LIMIT")]
    TICKET_OFFER_OVER_LIMIT = 61,

    [DataMember(Name = "WITHDRAW_CANCEL_NOT_ALLOWED")]
    WITHDRAW_CANCEL_NOT_ALLOWED = 64,

    [DataMember(Name = "WITHDRAW_LOCKOUT")]
    WITHDRAW_LOCKOUT = 65,

    [DataMember(Name = "WITHDRAW_NOT_ALLOWED")]
    WITHDRAW_NOT_ALLOWED = 63,

  }
}