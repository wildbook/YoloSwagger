using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLobbyLobbyInvitationState {
    [DataMember(Name = "Requested")]
    Requested = 0,

    [DataMember(Name = "Kicked")]
    Kicked = 5,

    [DataMember(Name = "Joined")]
    Joined = 3,

    [DataMember(Name = "Pending")]
    Pending = 1,

    [DataMember(Name = "Error")]
    Error = 7,

    [DataMember(Name = "OnHold")]
    OnHold = 6,

    [DataMember(Name = "Accepted")]
    Accepted = 2,

    [DataMember(Name = "Declined")]
    Declined = 4,

  }
}