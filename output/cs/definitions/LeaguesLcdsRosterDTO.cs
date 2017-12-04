using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeaguesLcdsRosterDTO {
    [DataMember(Name = "memberList")]
    LeaguesLcdsTeamMemberInfoDTO[] MemberList {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeaguesLcdsRosterDTO {\n");
      sb.Append("  MemberList: ").Append(MemberList).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}