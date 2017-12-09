using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum PatcherNotificationId {
    [DataMember(Name = "ConnectionError")]
    ConnectionError = 1,

    [DataMember(Name = "DidRestoreClientBackup")]
    DidRestoreClientBackup = 5,

    [DataMember(Name = "FailedToWriteError")]
    FailedToWriteError = 3,

    [DataMember(Name = "MissingFilesError")]
    MissingFilesError = 2,

    [DataMember(Name = "UnspecifiedError")]
    UnspecifiedError = 0,

    [DataMember(Name = "WillRestoreClientBackupOnRestart")]
    WillRestoreClientBackupOnRestart = 4,

  }
}