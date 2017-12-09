using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2Honor
    {
        [DataMember(Name = "honorCategory")]
        public string HonorCategory { get; set; }

        [DataMember(Name = "voterRelationship")]
        public string VoterRelationship { get; set; }

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