using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PatcherHeaderEntry {
    [DataMember(Name = "value")]
    string Value {get; set;}

    [DataMember(Name = "key")]
    string Key {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PatcherHeaderEntry {\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
      sb.Append("  Key: ").Append(Key).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}