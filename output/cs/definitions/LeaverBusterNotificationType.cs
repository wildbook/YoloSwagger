using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LeaverBusterNotificationType {
    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "PunishedGamesRemaining")]
    PunishedGamesRemaining = 3,

    [DataMember(Name = "PunishmentIncurred")]
    PunishmentIncurred = 2,

    [DataMember(Name = "Reforming")]
    Reforming = 4,

    [DataMember(Name = "TaintedWarning")]
    TaintedWarning = 1,

  }
}