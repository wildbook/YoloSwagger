using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryTimeline
    {
        [DataMember(Name = "lane")]
        string Lane { get; set; }

        [DataMember(Name = "participantId")]
        ushort ParticipantId { get; set; }

        [DataMember(Name = "csDiffPerMinDeltas")]
        Dictionary<string, double> CsDiffPerMinDeltas { get; set; }

        [DataMember(Name = "goldPerMinDeltas")]
        Dictionary<string, double> GoldPerMinDeltas { get; set; }

        [DataMember(Name = "xpDiffPerMinDeltas")]
        Dictionary<string, double> XpDiffPerMinDeltas { get; set; }

        [DataMember(Name = "creepsPerMinDeltas")]
        Dictionary<string, double> CreepsPerMinDeltas { get; set; }

        [DataMember(Name = "xpPerMinDeltas")]
        Dictionary<string, double> XpPerMinDeltas { get; set; }

        [DataMember(Name = "role")]
        string Role { get; set; }

        [DataMember(Name = "damageTakenDiffPerMinDeltas")]
        Dictionary<string, double> DamageTakenDiffPerMinDeltas { get; set; }

        [DataMember(Name = "damageTakenPerMinDeltas")]
        Dictionary<string, double> DamageTakenPerMinDeltas { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTimeline {\n");
            sb.Append("  Lane: ").Append(Lane).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  CsDiffPerMinDeltas: ").Append(CsDiffPerMinDeltas).Append("\n");
            sb.Append("  GoldPerMinDeltas: ").Append(GoldPerMinDeltas).Append("\n");
            sb.Append("  XpDiffPerMinDeltas: ").Append(XpDiffPerMinDeltas).Append("\n");
            sb.Append("  CreepsPerMinDeltas: ").Append(CreepsPerMinDeltas).Append("\n");
            sb.Append("  XpPerMinDeltas: ").Append(XpPerMinDeltas).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  DamageTakenDiffPerMinDeltas: ").Append(DamageTakenDiffPerMinDeltas).Append("\n");
            sb.Append("  DamageTakenPerMinDeltas: ").Append(DamageTakenPerMinDeltas).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}