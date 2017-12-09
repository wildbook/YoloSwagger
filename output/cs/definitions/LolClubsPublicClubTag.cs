using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicClubTag
    {
        [DataMember(Name = "clubName")]
        public string ClubName { get; set; }

        [DataMember(Name = "clubTag")]
        public string ClubTag { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicClubTag {\n");
            sb.Append("  ClubName: ").Append(ClubName).Append("\n");
            sb.Append("  ClubTag: ").Append(ClubTag).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}