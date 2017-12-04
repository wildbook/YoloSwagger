using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerInventory {
    [DataMember(Name = "skins")]
    int[] Skins {get; set;}

    [DataMember(Name = "wardSkins")]
    long[] WardSkins {get; set;}

    [DataMember(Name = "champions")]
    int[] Champions {get; set;}

    [DataMember(Name = "icons")]
    int[] Icons {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerInventory {\n");
      sb.Append("  Skins: ").Append(Skins).Append("\n");
      sb.Append("  WardSkins: ").Append(WardSkins).Append("\n");
      sb.Append("  Champions: ").Append(Champions).Append("\n");
      sb.Append("  Icons: ").Append(Icons).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}