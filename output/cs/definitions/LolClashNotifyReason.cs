using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashNotifyReason {
    [DataMember(Name = "DECLINE_TICKET")]
    DECLINE_TICKET = 25,

    [DataMember(Name = "INVITE")]
    INVITE = 14,

    [DataMember(Name = "DECLINE_INVITE")]
    DECLINE_INVITE = 16,

    [DataMember(Name = "ACCEPT_INVITE")]
    ACCEPT_INVITE = 17,

    [DataMember(Name = "DECLINE_SUGGESTION")]
    DECLINE_SUGGESTION = 1,

    [DataMember(Name = "LEAVE")]
    LEAVE = 19,

    [DataMember(Name = "SET_TICKET")]
    SET_TICKET = 22,

    [DataMember(Name = "CAPTAIN_LEAVE")]
    CAPTAIN_LEAVE = 20,

    [DataMember(Name = "UNREADY")]
    UNREADY = 5,

    [DataMember(Name = "RESENT_INVITE")]
    RESENT_INVITE = 15,

    [DataMember(Name = "DISMISS")]
    DISMISS = 7,

    [DataMember(Name = "CHANGE_SHORTNAME")]
    CHANGE_SHORTNAME = 11,

    [DataMember(Name = "CHANGE_LOGO")]
    CHANGE_LOGO = 9,

    [DataMember(Name = "OWNER_TRANSFER")]
    OWNER_TRANSFER = 8,

    [DataMember(Name = "OWNER_CLOSE")]
    OWNER_CLOSE = 6,

    [DataMember(Name = "CHANGE_NAMETAGLOGO")]
    CHANGE_NAMETAGLOGO = 13,

    [DataMember(Name = "CHANGE_NAME")]
    CHANGE_NAME = 10,

    [DataMember(Name = "OFFER_TICKET")]
    OFFER_TICKET = 23,

    [DataMember(Name = "REVOKE_SUGGESTION")]
    REVOKE_SUGGESTION = 3,

    [DataMember(Name = "ACCEPT_TICKET")]
    ACCEPT_TICKET = 26,

    [DataMember(Name = "ACCEPT_SUGGESTION")]
    ACCEPT_SUGGESTION = 2,

    [DataMember(Name = "REVOKED_TICKET")]
    REVOKED_TICKET = 24,

    [DataMember(Name = "CHANGE_POSITION")]
    CHANGE_POSITION = 12,

    [DataMember(Name = "SUGGESTION")]
    SUGGESTION = 0,

    [DataMember(Name = "READY")]
    READY = 4,

    [DataMember(Name = "REVOKE_INVITE")]
    REVOKE_INVITE = 18,

    [DataMember(Name = "KICK")]
    KICK = 21,

  }
}