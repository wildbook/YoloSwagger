using System.Runtime.Serialization;
namespace leagueapi {
  enum PatcherNotificationId {
    [DataMember(Name = "MissingFilesError")]
    MissingFilesError = 2,

    [DataMember(Name = "ConnectionError")]
    ConnectionError = 1,

    [DataMember(Name = "UnspecifiedError")]
    UnspecifiedError = 0,

    [DataMember(Name = "FailedToWriteError")]
    FailedToWriteError = 3,

    [DataMember(Name = "DidRestoreClientBackup")]
    DidRestoreClientBackup = 5,

    [DataMember(Name = "WillRestoreClientBackupOnRestart")]
    WillRestoreClientBackupOnRestart = 4,

  }
}