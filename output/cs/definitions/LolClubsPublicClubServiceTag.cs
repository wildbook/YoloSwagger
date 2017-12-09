using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicClubServiceTag
    {
        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicClubServiceTag {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}