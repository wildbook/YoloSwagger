using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryParticipantFrame
    {
        [DataMember(Name = "currentGold")]
        int CurrentGold { get; set; }

        [DataMember(Name = "dominionScore")]
        ushort DominionScore { get; set; }

        [DataMember(Name = "jungleMinionsKilled")]
        ushort JungleMinionsKilled { get; set; }

        [DataMember(Name = "level")]
        ushort Level { get; set; }

        [DataMember(Name = "minionsKilled")]
        ushort MinionsKilled { get; set; }

        [DataMember(Name = "participantId")]
        ushort ParticipantId { get; set; }

        [DataMember(Name = "position")]
        LolMatchHistoryMatchHistoryPosition Position { get; set; }

        [DataMember(Name = "teamScore")]
        ushort TeamScore { get; set; }

        [DataMember(Name = "totalGold")]
        int TotalGold { get; set; }

        [DataMember(Name = "xp")]
        uint Xp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryParticipantFrame {\n");
            sb.Append("  CurrentGold: ").Append(CurrentGold).Append("\n");
            sb.Append("  DominionScore: ").Append(DominionScore).Append("\n");
            sb.Append("  JungleMinionsKilled: ").Append(JungleMinionsKilled).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  MinionsKilled: ").Append(MinionsKilled).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  TeamScore: ").Append(TeamScore).Append("\n");
            sb.Append("  TotalGold: ").Append(TotalGold).Append("\n");
            sb.Append("  Xp: ").Append(Xp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}