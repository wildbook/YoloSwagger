using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksPerkStyleSlotResource {
    [DataMember(Name = "perks")]
    int[] Perks {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "slotLabel")]
    string SlotLabel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksPerkStyleSlotResource {\n");
      sb.Append("  Perks: ").Append(Perks).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  SlotLabel: ").Append(SlotLabel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}