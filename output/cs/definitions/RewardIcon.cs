using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RewardIcon {
    [DataMember(Name = "memberOwnedCount")]
    int MemberOwnedCount {get; set;}

    [DataMember(Name = "icon")]
    int Icon {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RewardIcon {\n");
      sb.Append("  MemberOwnedCount: ").Append(MemberOwnedCount).Append("\n");
      sb.Append("  Icon: ").Append(Icon).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}