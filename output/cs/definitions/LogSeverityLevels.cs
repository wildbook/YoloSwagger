using System.Runtime.Serialization;
namespace leagueapi {
  // Allowable severity levels for log events.
  [DataContract]  enum LogSeverityLevels {
    // Always logged, regardless of program's state
    [DataMember(Name = "Always")]
    Always = 3,

    // Progress expected to continue, despite issues
    [DataMember(Name = "Warning")]
    Warning = 1,

    // Progress nominal (used for INFO and TRACE)
    [DataMember(Name = "Okay")]
    Okay = 0,

    // Critical failure; thread may terminate
    [DataMember(Name = "Error")]
    Error = 2,

  }
}