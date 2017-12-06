using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum ServiceStatusIncident_Severity {
    [DataMember(Name = "error")]
    Error = 2,

    [DataMember(Name = "info")]
    Info = 0,

    [DataMember(Name = "warn")]
    Warn = 1,

  }
}