using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicClubsPublicData
    {
        [DataMember(Name = "availability")]
        public string Availability { get; set; }

        [DataMember(Name = "lastSeenOnlineTimestamp")]
        public string LastSeenOnlineTimestamp { get; set; }

        [DataMember(Name = "summonerIconId")]
        public int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "tag")]
        public LolClubsPublicClubTag Tag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicClubsPublicData {\n");
            sb.Append("  Availability: ").Append(Availability).Append("\n");
            sb.Append("  LastSeenOnlineTimestamp: ").Append(LastSeenOnlineTimestamp).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}