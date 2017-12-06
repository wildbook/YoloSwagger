using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum LolLootRedeemableStatus {
    [DataMember(Name = "ALREADY_OWNED")]
    ALREADY_OWNED = 5,

    [DataMember(Name = "ALREADY_RENTED")]
    ALREADY_RENTED = 6,

    [DataMember(Name = "CHAMPION_NOT_OWNED")]
    CHAMPION_NOT_OWNED = 7,

    [DataMember(Name = "NOT_REDEEMABLE")]
    NOT_REDEEMABLE = 3,

    [DataMember(Name = "NOT_REDEEMABLE_RENTAL")]
    NOT_REDEEMABLE_RENTAL = 4,

    [DataMember(Name = "REDEEMABLE")]
    REDEEMABLE = 1,

    [DataMember(Name = "REDEEMABLE_RENTAL")]
    REDEEMABLE_RENTAL = 2,

    [DataMember(Name = "SKIN_NOT_OWNED")]
    SKIN_NOT_OWNED = 8,

    [DataMember(Name = "UNKNOWN")]
    UNKNOWN = 0,

  }
}