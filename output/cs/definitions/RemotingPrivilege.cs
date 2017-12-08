using System.Runtime.Serialization;
namespace leagueapi {
  // Well-known privilege levels for bindable functions.
  [DataContract]  enum RemotingPrivilege {
    // Maximum privilege level for remote administrators.
    [DataMember(Name = "Admin")]
    Admin = 254,

    // Minimum possible privilege level.
    [DataMember(Name = "None")]
    None = 0,

    // Maximum possible privilege level. Used for in-process function calls.
    [DataMember(Name = "Local")]
    Local = 255,

    // Maximum privilege level for remote non-administrators.
    [DataMember(Name = "User")]
    User = 127,

  }
}