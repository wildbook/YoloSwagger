using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksChampSelectPlayerSelection
    {
        [DataMember(Name = "championPickIntent")]
        int ChampionPickIntent { get; set; }

        [DataMember(Name = "spell1Id")]
        ulong Spell1Id { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "playerType")]
        string PlayerType { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "assignedPosition")]
        string AssignedPosition { get; set; }

        [DataMember(Name = "selectedSkinId")]
        int SelectedSkinId { get; set; }

        [DataMember(Name = "team")]
        int Team { get; set; }

        [DataMember(Name = "displayName")]
        string DisplayName { get; set; }

        [DataMember(Name = "spell2Id")]
        ulong Spell2Id { get; set; }

        [DataMember(Name = "wardSkinId")]
        long WardSkinId { get; set; }

        [DataMember(Name = "cellId")]
        long CellId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksChampSelectPlayerSelection {\n");
            sb.Append("  ChampionPickIntent: ").Append(ChampionPickIntent).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  PlayerType: ").Append(PlayerType).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  AssignedPosition: ").Append(AssignedPosition).Append("\n");
            sb.Append("  SelectedSkinId: ").Append(SelectedSkinId).Append("\n");
            sb.Append("  Team: ").Append(Team).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  WardSkinId: ").Append(WardSkinId).Append("\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}