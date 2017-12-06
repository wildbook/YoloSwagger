using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLootLootType {
    [DataMember(Name = "Chest")]
    Chest = 0,

    [DataMember(Name = "Currency")]
    Currency = 1,

  }
}