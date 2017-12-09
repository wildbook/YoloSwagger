using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2EndOfGameTeam
    {
        [DataMember(Name = "championBans")]
        public int[] ChampionBans { get; set; }

        [DataMember(Name = "fullId")]
        public string FullId { get; set; }

        [DataMember(Name = "isBottomTeam")]
        public bool IsBottomTeam { get; set; }

        [DataMember(Name = "isPlayerTeam")]
        public bool IsPlayerTeam { get; set; }

        [DataMember(Name = "isWinningTeam")]
        public bool IsWinningTeam { get; set; }

        [DataMember(Name = "memberStatusString")]
        public string MemberStatusString { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "players")]
        public LolHonorV2EndOfGamePlayer[] Players { get; set; }

        [DataMember(Name = "stats")]
        public dynamic Stats { get; set; }

        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        [DataMember(Name = "teamId")]
        public int TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2EndOfGameTeam {\n");
            sb.Append("  ChampionBans: ").Append(ChampionBans).Append("\n");
            sb.Append("  FullId: ").Append(FullId).Append("\n");
            sb.Append("  IsBottomTeam: ").Append(IsBottomTeam).Append("\n");
            sb.Append("  IsPlayerTeam: ").Append(IsPlayerTeam).Append("\n");
            sb.Append("  IsWinningTeam: ").Append(IsWinningTeam).Append("\n");
            sb.Append("  MemberStatusString: ").Append(MemberStatusString).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Players: ").Append(Players).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}