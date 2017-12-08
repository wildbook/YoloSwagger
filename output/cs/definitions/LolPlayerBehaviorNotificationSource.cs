using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolPlayerBehaviorNotificationSource {
    [DataMember(Name = "Login")]
    Login = 1,

    [DataMember(Name = "Message")]
    Message = 3,

    [DataMember(Name = "Invalid")]
    Invalid = 0,

    [DataMember(Name = "ForcedShutdown")]
    ForcedShutdown = 2,

  }
}