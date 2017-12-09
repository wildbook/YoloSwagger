using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsTradeContractDTO
    {
        [DataMember(Name = "requesterChampionId")]
        public int RequesterChampionId { get; set; }

        [DataMember(Name = "requesterInternalSummonerName")]
        public string RequesterInternalSummonerName { get; set; }

        [DataMember(Name = "responderChampionId")]
        public int ResponderChampionId { get; set; }

        [DataMember(Name = "responderInternalSummonerName")]
        public string ResponderInternalSummonerName { get; set; }

        [DataMember(Name = "state")]
        public string State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsTradeContractDTO {\n");
            sb.Append("  RequesterChampionId: ").Append(RequesterChampionId).Append("\n");
            sb.Append("  RequesterInternalSummonerName: ").Append(RequesterInternalSummonerName).Append("\n");
            sb.Append("  ResponderChampionId: ").Append(ResponderChampionId).Append("\n");
            sb.Append("  ResponderInternalSummonerName: ").Append(ResponderInternalSummonerName).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}