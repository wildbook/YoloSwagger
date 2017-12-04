using System.Runtime.Serialization;
namespace leagueapi {
  enum PatcherInjectedPatcherError {
    [DataMember(Name = "FailedFailedToWriteFile")]
    FailedFailedToWriteFile = 3,

    [DataMember(Name = "FailedToFindFile")]
    FailedToFindFile = 1,

    [DataMember(Name = "FailedToResolveHostName")]
    FailedToResolveHostName = 2,

    [DataMember(Name = "UnspecifiedError")]
    UnspecifiedError = 0,

  }
}