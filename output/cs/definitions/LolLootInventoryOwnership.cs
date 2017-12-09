using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLootInventoryOwnership {
    [DataMember(Name = "F2P")]
    F2P = 2,

    [DataMember(Name = "OWNED")]
    OWNED = 0,

    [DataMember(Name = "RENTED")]
    RENTED = 1,

  }
}