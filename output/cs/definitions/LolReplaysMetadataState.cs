using System.Runtime.Serialization;
namespace leagueapi {
  enum LolReplaysMetadataState {
    [DataMember(Name = "downloading")]
    Downloading = 4,

    [DataMember(Name = "lost")]
    Lost = 8,

    [DataMember(Name = "incompatible")]
    Incompatible = 5,

    [DataMember(Name = "checking")]
    Checking = 0,

    [DataMember(Name = "watch")]
    Watch = 2,

    [DataMember(Name = "missingOrExpired")]
    MissingOrExpired = 6,

    [DataMember(Name = "unsupported")]
    Unsupported = 9,

    [DataMember(Name = "error")]
    Error = 10,

    [DataMember(Name = "download")]
    Download = 3,

    [DataMember(Name = "found")]
    Found = 1,

    [DataMember(Name = "retryDownload")]
    RetryDownload = 7,

  }
}