using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderCellV1
    {
        [DataMember(Name = "assignedPosition")]
        string AssignedPosition { get; set; }

        [DataMember(Name = "cellId")]
        int CellId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "championPickIntent")]
        int ChampionPickIntent { get; set; }

        [DataMember(Name = "skinId")]
        int SkinId { get; set; }

        [DataMember(Name = "spell1Id")]
        int Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        int Spell2Id { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        [DataMember(Name = "teamId")]
        int TeamId { get; set; }

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