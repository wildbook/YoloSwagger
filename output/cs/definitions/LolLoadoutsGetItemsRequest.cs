using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoadoutsGetItemsRequest {
    [DataMember(Name = "inventoryTypes")]
    string[] InventoryTypes {get; set;}

    [DataMember(Name = "id")]
    uint Id {get; set;}

    [DataMember(Name = "inventoryJWTs")]
    string[] InventoryJWTs {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoadoutsGetItemsRequest {\n");
      sb.Append("  InventoryTypes: ").Append(InventoryTypes).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  InventoryJWTs: ").Append(InventoryJWTs).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}