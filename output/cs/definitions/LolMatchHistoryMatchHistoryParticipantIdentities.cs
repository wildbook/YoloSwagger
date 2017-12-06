using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryParticipantIdentities
    {
        [DataMember(Name = "participantId")]
        ushort ParticipantId { get; set; }

        [DataMember(Name = "player")]
        LolMatchHistoryMatchHistoryParticipantIdentityPlayer Player { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryParticipantIdentities {\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}