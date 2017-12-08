using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashPlayerState {
    [DataMember(Name = "NO_ROSTER")]
    NO_ROSTER = 0,

    [DataMember(Name = "HAS_ROSTER")]
    HAS_ROSTER = 1,

    [DataMember(Name = "ELIMINATED")]
    ELIMINATED = 3,

    [DataMember(Name = "BRACKET_ROSTER")]
    BRACKET_ROSTER = 2,

  }
}