using System.Runtime.Serialization;
namespace leagueapi {
  // Allowable severity levels for log events.
  [DataContract]  enum LogSeverityLevels {
    // Always logged, regardless of program's state
    [DataMember(Name = "Always")]
    Always = 3,

    // Critical failure; thread may terminate
    [DataMember(Name = "Error")]
    Error = 2,

    // Progress nominal (used for INFO and TRACE)
    [DataMember(Name = "Okay")]
    Okay = 0,

    // Progress expected to continue, despite issues
    [DataMember(Name = "Warning")]
    Warning = 1,

  }
}