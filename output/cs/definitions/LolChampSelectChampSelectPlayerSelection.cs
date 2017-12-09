using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectChampSelectPlayerSelection
    {
        [DataMember(Name = "assignedPosition")]
        public string AssignedPosition { get; set; }

        [DataMember(Name = "cellId")]
        public long CellId { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "championPickIntent")]
        public int ChampionPickIntent { get; set; }

        [DataMember(Name = "displayName")]
        public string DisplayName { get; set; }

        [DataMember(Name = "playerType")]
        public string PlayerType { get; set; }

        [DataMember(Name = "selectedSkinId")]
        public int SelectedSkinId { get; set; }

        [DataMember(Name = "spell1Id")]
        public ulong Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        public ulong Spell2Id { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "team")]
        public int Team { get; set; }

        [DataMember(Name = "wardSkinId")]
        public long WardSkinId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectChampSelectPlayerSelection {\n");
            sb.Append("  AssignedPosition: ").Append(AssignedPosition).Append("\n");
            sb.Append("  CellId: ").Append(CellId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChampionPickIntent: ").Append(ChampionPickIntent).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  PlayerType: ").Append(PlayerType).Append("\n");
            sb.Append("  SelectedSkinId: ").Append(SelectedSkinId).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  Team: ").Append(Team).Append("\n");
            sb.Append("  WardSkinId: ").Append(WardSkinId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}