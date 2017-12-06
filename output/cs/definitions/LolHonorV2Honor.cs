using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolHonorV2Honor
    {
        [DataMember(Name = "honorCategory")]
        string HonorCategory { get; set; }

        [DataMember(Name = "voterRelationship")]
        string VoterRelationship { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2Honor {\n");
            sb.Append("  HonorCategory: ").Append(HonorCategory).Append("\n");
            sb.Append("  VoterRelationship: ").Append(VoterRelationship).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}