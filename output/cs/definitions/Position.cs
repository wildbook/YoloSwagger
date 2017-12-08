using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum Position {
    [DataMember(Name = "BOTTOM")]
    BOTTOM = 2,

    [DataMember(Name = "TOP")]
    TOP = 0,

    [DataMember(Name = "MIDDLE")]
    MIDDLE = 1,

    [DataMember(Name = "JUNGLE")]
    JUNGLE = 3,

    [DataMember(Name = "UTILITY")]
    UTILITY = 4,

    [DataMember(Name = "UNSELECTED")]
    UNSELECTED = 6,

    [DataMember(Name = "FILL")]
    FILL = 5,

  }
}