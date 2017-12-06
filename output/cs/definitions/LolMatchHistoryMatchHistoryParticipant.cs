using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryParticipant
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "highestAchievedSeasonTier")]
        string HighestAchievedSeasonTier { get; set; }

        [DataMember(Name = "participantId")]
        ushort ParticipantId { get; set; }

        [DataMember(Name = "spell1Id")]
        ushort Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        ushort Spell2Id { get; set; }

        [DataMember(Name = "stats")]
        LolMatchHistoryMatchHistoryParticipantStatistics Stats { get; set; }

        [DataMember(Name = "teamId")]
        ushort TeamId { get; set; }

        [DataMember(Name = "timeline")]
        LolMatchHistoryMatchHistoryTimeline Timeline { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryParticipant {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  HighestAchievedSeasonTier: ").Append(HighestAchievedSeasonTier).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  Timeline: ").Append(Timeline).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}