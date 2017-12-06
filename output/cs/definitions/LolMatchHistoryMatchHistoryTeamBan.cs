using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryTeamBan
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "pickTurn")]
        ushort PickTurn { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTeamBan {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  PickTurn: ").Append(PickTurn).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}