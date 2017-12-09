using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryParticipantFrame
    {
        [DataMember(Name = "currentGold")]
        public int CurrentGold { get; set; }

        [DataMember(Name = "dominionScore")]
        public ushort DominionScore { get; set; }

        [DataMember(Name = "jungleMinionsKilled")]
        public ushort JungleMinionsKilled { get; set; }

        [DataMember(Name = "level")]
        public ushort Level { get; set; }

        [DataMember(Name = "minionsKilled")]
        public ushort MinionsKilled { get; set; }

        [DataMember(Name = "participantId")]
        public ushort ParticipantId { get; set; }

        [DataMember(Name = "position")]
        public LolMatchHistoryMatchHistoryPosition Position { get; set; }

        [DataMember(Name = "teamScore")]
        public ushort TeamScore { get; set; }

        [DataMember(Name = "totalGold")]
        public int TotalGold { get; set; }

        [DataMember(Name = "xp")]
        public uint Xp { get; set; }

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