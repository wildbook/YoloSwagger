using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolClashTournamentState {
    [DataMember(Name = "IDLE")]
    IDLE = 0,

    [DataMember(Name = "IN_GAME")]
    IN_GAME = 3,

    [DataMember(Name = "LOCK_IN")]
    LOCK_IN = 1,

    [DataMember(Name = "RESULTS")]
    RESULTS = 4,

    [DataMember(Name = "SCOUTING")]
    SCOUTING = 2,

  }
}