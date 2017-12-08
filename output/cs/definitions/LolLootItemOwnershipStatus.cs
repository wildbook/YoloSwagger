using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLootItemOwnershipStatus {
    [DataMember(Name = "NONE")]
    NONE = 0,

    [DataMember(Name = "RENTAL")]
    RENTAL = 2,

    [DataMember(Name = "OWNED")]
    OWNED = 3,

    [DataMember(Name = "FREE")]
    FREE = 1,

  }
}