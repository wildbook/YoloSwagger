using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectTradeContract
    {
        [DataMember(Name = "cellId")]
        long CellId { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "state")]
        LolLobbyTeamBuilderChampSelectTradeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectTradeContract {\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}