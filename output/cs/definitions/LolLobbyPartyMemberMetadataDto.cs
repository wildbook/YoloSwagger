using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPartyMemberMetadataDto {
    [DataMember(Name = "positionPref")]
    string[] PositionPref {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPartyMemberMetadataDto {\n");
      sb.Append("  PositionPref: ").Append(PositionPref).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}