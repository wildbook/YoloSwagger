using System.Runtime.Serialization;
namespace leagueapi {
  enum LolClashQueueAvailability {
    [DataMember(Name = "Available")]
    Available = 0,

    [DataMember(Name = "PlatformDisabled")]
    PlatformDisabled = 1,

    [DataMember(Name = "DoesntMeetRequirements")]
    DoesntMeetRequirements = 2,

  }
}