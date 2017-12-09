using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolPlayerBehaviorNotificationSource {
    [DataMember(Name = "ForcedShutdown")]
    ForcedShutdown = 2,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "Login")]
    Login = 1,

    [DataMember(Name = "Message")]
    Message = 3,

  }
}