using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderCellV1
    {
        [DataMember(Name = "assignedPosition")]
        public string AssignedPosition { get; set; }

        [DataMember(Name = "cellId")]
        public int CellId { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "championPickIntent")]
        public int ChampionPickIntent { get; set; }

        [DataMember(Name = "skinId")]
        public int SkinId { get; set; }

        [DataMember(Name = "spell1Id")]
        public int Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        public int Spell2Id { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "teamId")]
        public int TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderCellV1 {\n");
            sb.Append("  AssignedPosition: ").Append(AssignedPosition).Append("\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChampionPickIntent: ").Append(ChampionPickIntent).Append("\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}