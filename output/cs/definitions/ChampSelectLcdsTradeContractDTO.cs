using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ChampSelectLcdsTradeContractDTO
    {
        [DataMember(Name = "requesterInternalSummonerName")]
        string RequesterInternalSummonerName { get; set; }

        [DataMember(Name = "state")]
        string State { get; set; }

        [DataMember(Name = "requesterChampionId")]
        int RequesterChampionId { get; set; }

        [DataMember(Name = "responderInternalSummonerName")]
        string ResponderInternalSummonerName { get; set; }

        [DataMember(Name = "responderChampionId")]
        int ResponderChampionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsTradeContractDTO {\n");
            sb.Append("  RequesterInternalSummonerName: ").Append(RequesterInternalSummonerName).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  RequesterChampionId: ").Append(RequesterChampionId).Append("\n");
            sb.Append("  ResponderInternalSummonerName: ").Append(ResponderInternalSummonerName).Append("\n");
            sb.Append("  ResponderChampionId: ").Append(ResponderChampionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}