using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLobbyLobbyInvitationState {
    [DataMember(Name = "Accepted")]
    Accepted = 2,

    [DataMember(Name = "Declined")]
    Declined = 4,

    [DataMember(Name = "Error")]
    Error = 7,

    [DataMember(Name = "Joined")]
    Joined = 3,

    [DataMember(Name = "Kicked")]
    Kicked = 5,

    [DataMember(Name = "OnHold")]
    OnHold = 6,

    [DataMember(Name = "Pending")]
    Pending = 1,

    [DataMember(Name = "Requested")]
    Requested = 0,

  }
}