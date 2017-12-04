using System.Runtime.Serialization;
namespace leagueapi {
  enum LeaverBusterNotificationType {
    [DataMember(Name = "Reforming")]
    Reforming = 4,

    [DataMember(Name = "PunishmentIncurred")]
    PunishmentIncurred = 2,

    [DataMember(Name = "PunishedGamesRemaining")]
    PunishedGamesRemaining = 3,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "TaintedWarning")]
    TaintedWarning = 1,

  }
}