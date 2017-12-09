using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryTimeline
    {
        [DataMember(Name = "creepsPerMinDeltas")]
        public Dictionary<string, double> CreepsPerMinDeltas { get; set; }

        [DataMember(Name = "csDiffPerMinDeltas")]
        public Dictionary<string, double> CsDiffPerMinDeltas { get; set; }

        [DataMember(Name = "damageTakenDiffPerMinDeltas")]
        public Dictionary<string, double> DamageTakenDiffPerMinDeltas { get; set; }

        [DataMember(Name = "damageTakenPerMinDeltas")]
        public Dictionary<string, double> DamageTakenPerMinDeltas { get; set; }

        [DataMember(Name = "goldPerMinDeltas")]
        public Dictionary<string, double> GoldPerMinDeltas { get; set; }

        [DataMember(Name = "lane")]
        public string Lane { get; set; }

        [DataMember(Name = "participantId")]
        public ushort ParticipantId { get; set; }

        [DataMember(Name = "role")]
        public string Role { get; set; }

        [DataMember(Name = "xpDiffPerMinDeltas")]
        public Dictionary<string, double> XpDiffPerMinDeltas { get; set; }

        [DataMember(Name = "xpPerMinDeltas")]
        public Dictionary<string, double> XpPerMinDeltas { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTimeline {\n");
            sb.Append("  CreepsPerMinDeltas: ").Append(CreepsPerMinDeltas).Append("\n");
            sb.Append("  CsDiffPerMinDeltas: ").Append(CsDiffPerMinDeltas).Append("\n");
            sb.Append("  DamageTakenDiffPerMinDeltas: ").Append(DamageTakenDiffPerMinDeltas).Append("\n");
            sb.Append("  DamageTakenPerMinDeltas: ").Append(DamageTakenPerMinDeltas).Append("\n");
            sb.Append("  GoldPerMinDeltas: ").Append(GoldPerMinDeltas).Append("\n");
            sb.Append("  Lane: ").Append(Lane).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  XpDiffPerMinDeltas: ").Append(XpDiffPerMinDeltas).Append("\n");
            sb.Append("  XpPerMinDeltas: ").Append(XpPerMinDeltas).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}