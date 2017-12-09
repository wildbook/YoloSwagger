using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2EndOfGamePlayer
    {
        [DataMember(Name = "botPlayer")]
        public bool BotPlayer { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "isReportingDisabled")]
        public bool IsReportingDisabled { get; set; }

        [DataMember(Name = "leaver")]
        public bool Leaver { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "skinIndex")]
        public int SkinIndex { get; set; }

        [DataMember(Name = "skinName")]
        public string SkinName { get; set; }

        [DataMember(Name = "stats")]
        public dynamic Stats { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "teamId")]
        public int TeamId { get; set; }

        [DataMember(Name = "userId")]
        public ulong UserId { get; set; }

        [DataMember(Name = "wins")]
        public int Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2EndOfGamePlayer {\n");
            sb.Append("  BotPlayer: ").Append(BotPlayer).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  IsReportingDisabled: ").Append(IsReportingDisabled).Append("\n");
            sb.Append("  Leaver: ").Append(Leaver).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  SkinIndex: ").Append(SkinIndex).Append("\n");
            sb.Append("  SkinName: ").Append(SkinName).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}