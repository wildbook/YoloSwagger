using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoadoutsInventoryDTO {
    [DataMember(Name = "expires")]
    string Expires {get; set;}

    [DataMember(Name = "items")]
    Dictionary<string, dynamic> Items {get; set;}

    [DataMember(Name = "itemsJwt")]
    string ItemsJwt {get; set;}

    [DataMember(Name = "puuid")]
    string Puuid {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoadoutsInventoryDTO {\n");
      sb.Append("  Expires: ").Append(Expires).Append("\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  ItemsJwt: ").Append(ItemsJwt).Append("\n");
      sb.Append("  Puuid: ").Append(Puuid).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}