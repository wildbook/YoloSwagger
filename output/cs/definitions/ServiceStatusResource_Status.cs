using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ServiceStatusResource_Status {
    [DataMember(Name = "degraded")]
    Degraded = 3,

    [DataMember(Name = "deploying")]
    Deploying = 4,

    [DataMember(Name = "offline")]
    Offline = 2,

    [DataMember(Name = "online")]
    Online = 1,

    [DataMember(Name = "unknown")]
    Unknown = 0,

  }
}