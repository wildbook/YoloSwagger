using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeague
    {
        [DataMember(Name = "challengerNextPromotionUpdateInMs")]
        public ulong ChallengerNextPromotionUpdateInMs { get; set; }

        [DataMember(Name = "leagueName")]
        public string LeagueName { get; set; }

        [DataMember(Name = "leagueTier")]
        public LolLeaguesLeagueTier LeagueTier { get; set; }

        [DataMember(Name = "leagues")]
        public LolLeaguesLeagueDivision[] Leagues { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "queueType")]
        public LolLeaguesLeagueQueueType QueueType { get; set; }

        [DataMember(Name = "requesterLeagueRank")]
        public LolLeaguesLeagueRank RequesterLeagueRank { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeague {\n");
            sb.Append("  ChallengerNextPromotionUpdateInMs: ").Append(ChallengerNextPromotionUpdateInMs).Append("\n");
            sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
            sb.Append("  LeagueTier: ").Append(LeagueTier).Append("\n");
            sb.Append("  Leagues: ").Append(Leagues).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  RequesterLeagueRank: ").Append(RequesterLeagueRank).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}