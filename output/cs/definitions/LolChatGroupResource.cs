using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatGroupResource {
    [DataMember(Name = "priority")]
    int Priority {get; set;}

    [DataMember(Name = "collapsed")]
    bool Collapsed {get; set;}

    [DataMember(Name = "id")]
    uint Id {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "isMetaGroup")]
    bool IsMetaGroup {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatGroupResource {\n");
      sb.Append("  Priority: ").Append(Priority).Append("\n");
      sb.Append("  Collapsed: ").Append(Collapsed).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  IsMetaGroup: ").Append(IsMetaGroup).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}