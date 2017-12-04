using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2Honor {
    [DataMember(Name = "voterRelationship")]
    string VoterRelationship {get; set;}

    [DataMember(Name = "honorCategory")]
    string HonorCategory {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2Honor {\n");
      sb.Append("  VoterRelationship: ").Append(VoterRelationship).Append("\n");
      sb.Append("  HonorCategory: ").Append(HonorCategory).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}