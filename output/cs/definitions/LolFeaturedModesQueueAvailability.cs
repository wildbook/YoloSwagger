using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolFeaturedModesQueueAvailability {
    [DataMember(Name = "Available")]
    Available = 0,

    [DataMember(Name = "DoesntMeetRequirements")]
    DoesntMeetRequirements = 2,

    [DataMember(Name = "PlatformDisabled")]
    PlatformDisabled = 1,

  }
}