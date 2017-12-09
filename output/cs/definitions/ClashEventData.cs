using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClashEventData
    {
        [DataMember(Name = "bracket")]
        public int Bracket { get; set; }

        [DataMember(Name = "earnedDate")]
        public string EarnedDate { get; set; }

        [DataMember(Name = "playerUUIDs")]
        public string[] PlayerUUIDs { get; set; }

        [DataMember(Name = "rewardSpec")]
        public ClashRewardSpec RewardSpec { get; set; }

        [DataMember(Name = "rewardType")]
        public string RewardType { get; set; }

        [DataMember(Name = "seasonId")]
        public int SeasonId { get; set; }

        [DataMember(Name = "teamLogoChromaId")]
        public string TeamLogoChromaId { get; set; }

        [DataMember(Name = "teamLogoName")]
        public string TeamLogoName { get; set; }

        [DataMember(Name = "teamName")]
        public string TeamName { get; set; }

        [DataMember(Name = "theme")]
        public string Theme { get; set; }

        [DataMember(Name = "tier")]
        public string Tier { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        [DataMember(Name = "tournamentName")]
        public string TournamentName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashEventData {\n");
            sb.Append("  Bracket: ").Append(Bracket).Append("\n");
            sb.Append("  EarnedDate: ").Append(EarnedDate).Append("\n");
            sb.Append("  PlayerUUIDs: ").Append(PlayerUUIDs).Append("\n");
            sb.Append("  RewardSpec: ").Append(RewardSpec).Append("\n");
            sb.Append("  RewardType: ").Append(RewardType).Append("\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  TeamLogoChromaId: ").Append(TeamLogoChromaId).Append("\n");
            sb.Append("  TeamLogoName: ").Append(TeamLogoName).Append("\n");
            sb.Append("  TeamName: ").Append(TeamName).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("  TournamentName: ").Append(TournamentName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}