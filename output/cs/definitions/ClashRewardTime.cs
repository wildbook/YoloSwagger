using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ClashRewardTime {
    [DataMember(Name = "EOB")]
    EOB = 2,

    [DataMember(Name = "EOG")]
    EOG = 1,

    [DataMember(Name = "EOT")]
    EOT = 3,

    [DataMember(Name = "NONE")]
    NONE = 0,

  }
}