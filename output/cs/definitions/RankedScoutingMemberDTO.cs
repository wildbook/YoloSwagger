using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RankedScoutingMemberDTO
    {
        [DataMember(Name = "championScoutingData")]
        public RankedScoutingTopChampionDTO[] ChampionScoutingData { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RankedScoutingMemberDTO {\n");
            sb.Append("  ChampionScoutingData: ").Append(ChampionScoutingData).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}