using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Describes a function.
  [DataContract]  struct BindingFullFunctionHelp {
    [DataMember(Name = "help")]
    string Help {get; set;}

    [DataMember(Name = "tags")]
    string[] Tags {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "nameSpace")]
    string NameSpace {get; set;}

    [DataMember(Name = "threadSafe")]
    bool ThreadSafe {get; set;}

    [DataMember(Name = "returns")]
    BindingFullTypeIdentifier Returns {get; set;}

    [DataMember(Name = "arguments")]
    BindingFullArgumentHelp[] Arguments {get; set;}

    [DataMember(Name = "async")]
    string Async {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BindingFullFunctionHelp {\n");
      sb.Append("  Help: ").Append(Help).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  NameSpace: ").Append(NameSpace).Append("\n");
      sb.Append("  ThreadSafe: ").Append(ThreadSafe).Append("\n");
      sb.Append("  Returns: ").Append(Returns).Append("\n");
      sb.Append("  Arguments: ").Append(Arguments).Append("\n");
      sb.Append("  Async: ").Append(Async).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}