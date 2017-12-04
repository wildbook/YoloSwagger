using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Describes an enumerator.
  [DataContract]  struct BindingFullEnumValueHelp {
    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "value")]
    int Value {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BindingFullEnumValueHelp {\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}