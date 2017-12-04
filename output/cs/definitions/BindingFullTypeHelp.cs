using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Describes a struct or enum type.
  [DataContract]  struct BindingFullTypeHelp {
    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "tags")]
    string[] Tags {get; set;}

    [DataMember(Name = "fields")]
    BindingFullFieldHelp[] Fields {get; set;}

    [DataMember(Name = "nameSpace")]
    string NameSpace {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "values")]
    BindingFullEnumValueHelp[] Values {get; set;}

    [DataMember(Name = "size")]
    uint Size {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BindingFullTypeHelp {\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("  Fields: ").Append(Fields).Append("\n");
      sb.Append("  NameSpace: ").Append(NameSpace).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Values: ").Append(Values).Append("\n");
      sb.Append("  Size: ").Append(Size).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}