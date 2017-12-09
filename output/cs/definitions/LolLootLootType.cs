using System.Runtime.Serialization;
namespace LeagueClientApi {
  [DataContract]  public enum LolLootLootType {
    [DataMember(Name = "Chest")]
    Chest = 0,

    [DataMember(Name = "Currency")]
    Currency = 1,

  }
}