using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolGameQueuesQueueAvailability {
    [DataMember(Name = "Available")]
    Available = 0,

    [DataMember(Name = "DoesntMeetRequirements")]
    DoesntMeetRequirements = 2,

    [DataMember(Name = "PlatformDisabled")]
    PlatformDisabled = 1,

  }
}