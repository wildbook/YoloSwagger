using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Describes a function parameter.
  [DataContract]  struct BindingFullArgumentHelp {
    [DataMember(Name = "type")]
    BindingFullTypeIdentifier Type {get; set;}

    [DataMember(Name = "optional")]
    bool Optional {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BindingFullArgumentHelp {\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Optional: ").Append(Optional).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}