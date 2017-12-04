using System.Runtime.Serialization;
namespace leagueapi {
  enum LolLootInventoryOwnership {
    [DataMember(Name = "RENTED")]
    RENTED = 1,

    [DataMember(Name = "F2P")]
    F2P = 2,

    [DataMember(Name = "OWNED")]
    OWNED = 0,

  }
}