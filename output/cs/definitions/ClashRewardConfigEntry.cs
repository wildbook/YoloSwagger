using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClashRewardConfigEntry {
    [DataMember(Name = "vals")]
    ClashRewardOutput[] Vals {get; set;}

    [DataMember(Name = "key")]
    string Key {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClashRewardConfigEntry {\n");
      sb.Append("  Vals: ").Append(Vals).Append("\n");
      sb.Append("  Key: ").Append(Key).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}