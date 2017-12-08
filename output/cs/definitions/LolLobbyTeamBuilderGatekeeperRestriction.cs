using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderGatekeeperRestriction
    {
        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "reason")]
        string Reason { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "payload")]
        string Payload { get; set; }

        [DataMember(Name = "remainingMillis")]
        uint RemainingMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderGatekeeperRestriction {\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  RemainingMillis: ").Append(RemainingMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}