using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLootLootType {
    [DataMember(Name = "Currency")]
    Currency = 1,

    [DataMember(Name = "Chest")]
    Chest = 0,

  }
}