using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolClashFoundationError {
    [DataMember(Name = "CLASH_DISABLED")]
    CLASH_DISABLED = 1,

    [DataMember(Name = "CLASH_NOT_INITIALIZED")]
    CLASH_NOT_INITIALIZED = 0,

    [DataMember(Name = "DESERIALIZATION_FAILED")]
    DESERIALIZATION_FAILED = 2,

    [DataMember(Name = "GAMEFLOW_UNAVAILABLE")]
    GAMEFLOW_UNAVAILABLE = 3,

  }
}