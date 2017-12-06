using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ChampSelectLcdsPlayerChampionSelectionDTO
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "selectedSkinIndex")]
        int SelectedSkinIndex { get; set; }

        [DataMember(Name = "spell1Id")]
        int Spell1Id { get; set; }

        [DataMember(Name = "spell2Id")]
        int Spell2Id { get; set; }

        [DataMember(Name = "summonerInternalName")]
        string SummonerInternalName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsPlayerChampionSelectionDTO {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  SelectedSkinIndex: ").Append(SelectedSkinIndex).Append("\n");
            sb.Append("  Spell1Id: ").Append(Spell1Id).Append("\n");
            sb.Append("  Spell2Id: ").Append(Spell2Id).Append("\n");
            sb.Append("  SummonerInternalName: ").Append(SummonerInternalName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}