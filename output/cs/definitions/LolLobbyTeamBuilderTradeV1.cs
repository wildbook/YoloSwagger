using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTradeV1
    {
        [DataMember(Name = "cellId")]
        public int CellId { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "state")]
        public string State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTradeV1 {\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}