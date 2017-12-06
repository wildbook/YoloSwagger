using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashRosterMemberState {
    [DataMember(Name = "FORCED_NOT_READY")]
    FORCED_NOT_READY = 2,

    [DataMember(Name = "NOT_READY")]
    NOT_READY = 1,

    [DataMember(Name = "PENDING")]
    PENDING = 0,

    [DataMember(Name = "READY")]
    READY = 3,

  }
}